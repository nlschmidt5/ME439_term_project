import rclpy
from rclpy.node import Node 
import numpy as np
import traceback
from math import atan2, acos, asin, sin, cos, tan, sqrt, pi
from parallelbot_interfaces.msg import PBEndpoint, PBJointAngles
import heapq

class Define_Path(Node): 
    def __init__(self):
        super().__init__('Define_Path')
        
        # Create subscribers
        self.pub_endpoint = self.create_publisher(PBEndpoint, '/endpoint_desired',1)
        self.pub_joint_angles = self.create_publisher(PBJointAngles, '/joint_angles_desired',1)

        # declare robot parameters. not the right way, but i'm doing it anyways
        self.L1 = self.declare_parameter('L1',55).value
        self.L2 = self.declare_parameter('L2',90).value
        self.R1 =self.declare_parameter('R1',55).value
        self.R2 =self.declare_parameter('R2',140).value
        self.b = self.declare_parameter('b',90).value
        self.E = self.declare_parameter('E',30).value
       
        #initialize message types
        self.theta=PBJointAngles()
        self.endpoint=PBEndpoint()
        self.timerfrequency=100
        self.counter=0
        self.resolution=40
        self.timer = self.create_timer(1/self.timerfrequency, self.follow_path)
        self.qi=np.matrix([[-45],[40]])
        self.qg=np.matrix([[40],[140]])
        self.shortest_x=np.array([])
        self.shortest_y=np.array([])
        self.shortest_x, self.shortest_y= self.init_shortest()


    def follow_path(self):
        # quick and dirty way to define a path

        # x, y=self.line()
        #x, y=self.cirlce(self)
        if self.counter>=len(self.shortest_x):
            self.counter=0
        x, y=self.shortest()
        self.endpoint.xy=[x, y]
        self.pub_endpoint.publish(self.endpoint)
        self.counter+=1
        

    
    def line(self):
        x=np.hstack((np.linspace(-45, -45, int(self.resolution/2)), np.linspace(-45, -45, int(self.resolution/2)) ))
        y=np.hstack((np.linspace(40, 160, int(self.resolution/2)), np.linspace(160, 40, int(self.resolution/2)) ))
        return x[self.counter], y[self.counter]
    
    def circle(self):
        t=np.linspace(0, 2*np.pi, 90)
        x=20*np.cos(t)-20
        y=20*np.sin(t)+140
        return x[self.counter], y[self.counter]
    
    def shortest(self):
        return self.shortest_x[self.counter], self.shortest_y[self.counter]

    
    def init_shortest(self):
        self.get_logger().info("finding shortest path")
        K=10
        n=400
        obstacle_stack=1 #placeholder
        path=self.PRM(self.qi,self.qg,n,K,obstacle_stack)

        x=path[0,:].A1
        y=path[1,:].A1
        resolution=10
        self.get_logger().info("path found")
        x_smooth, y_smooth=self.smooth_path(x, y, resolution)
        x_smooth_out=np.hstack((x_smooth, np.flip(x_smooth)))
        y_smooth_out=np.hstack((y_smooth, np.flip(y_smooth)))
        return x_smooth_out, y_smooth_out

    def PRM(self, qI,qG,num_sample,K,obstacle_stack):
    # qI: initial configuration (x-y coords)
    # qG: goal configuration (x-y coords)
    # Vertex: matrix containing all the sampled x-y coordinates
    #   row 1 is x, row 2 is y 
    # Edge: describes connections between vertices
    #   row 1 is the parent vertex id, 2 is the child id, 3 is the distance
        Vertex = qI
        Edge = np.matrix([[0], [0], [0]])
        n = 10
        
        # sample random points within the workspace
        # add said points to Vertex
        while np.size(Vertex, 1) < num_sample - 1:
            xrand, yrand=self.get_random_position()
            random_config=np.matrix([[xrand], [yrand]])
            Vertex=np.hstack((Vertex, random_config))

        # add the goal to the end of Vertex
        Vertex=np.hstack((Vertex, qG))
        # initialize the graph
        Graph=np.tile(np.inf, (num_sample, num_sample))

        for i in range(np.size(Vertex, 1)):
            # find the K nearest neighbors for each point, and the distances to said points
            neighbors,neighbors_idx, neighbors_dis=self.find_nearest_vertex(Vertex[:,i], Vertex, K)
            for j in range(K):
                collision=self.vertex_collision_check(Vertex[:,i], neighbors[:,j], obstacle_stack, n)
                if not(collision):
                    new_edge=np.matrix([[j], [neighbors_idx[j]], [neighbors_dis[j]]])
                    Edge=np.hstack(( Edge, new_edge))
                    Graph[i, int(neighbors_idx[j])]=neighbors_dis[j]
                    Graph[int(neighbors_idx[j]), i]=neighbors_dis[j]

        init_idx = 0
        target_idx = np.size(Vertex, 1)-1

        shortest_distance, path = self.dijkstra(Graph, init_idx, target_idx)

        path_out = Vertex[:,path]
        Tree_out = Vertex
        Edge_out = Edge
        Graph_out = Graph

        return path_out

    def get_random_position(self):
        # find a random point within the workspace
        # reachable workspace needs to be better defined at some point. 
        i=0
        validpoint=False
        while not(validpoint):
            # pick a random point
            x=np.random.uniform(-45, 60)
            y=np.random.uniform(40, 160)
            i=i+1
            # see if it is in the workspace
            try: 
                theta1, theta2=self.calc_IK(x,y)
                # theta1_out=wrap_angle(theta1, "deg")
                # theta2_out=wrap_angle(theta2, "deg")
                self.get_logger().info("random point found")
                validpoint=True
            except: 
                validpoint=False
                self.get_logger().info("point failed "+ str(i)+ ", trying again")
        return x, y

    def calculate_distance(self, x1, y1, x2, y2):
        dis=np.sqrt((x2-x1)**2+(y2-y1)**2)
        return dis

    def find_nearest_vertex(self, q, Tree, K):
        # my advanced robotics course had a function for this in matlab
        # chatgpt was used to convert the matlab code to python
        """
        Find the nearest K vertices in the Tree to the configuration q using 2D distance.

        Parameters:
        q : ndarray
            The C-space configuration [x, y].
        Tree : ndarray
            The Tree with vertices as columns (each column [x, y]).
        K : int
            The number of nearest vertices to find.

        Returns:
        neighbors : ndarray
            Nearest vertices (each column is a vertex).
        neighbors_id : list
            Indices of the nearest vertices in the Tree.
        distances : ndarray
            Distances to the nearest vertices.
        """
        self.get_logger().info("finding neighbors")
        neighbors = np.matrix([[],[]])
        neighbors_id = np.array([])
        distances = np.array([])

        def calculate_distance(x1, y1, x2, y2):
            dis = np.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
            return dis

        # Initial selection of the first K vertices
        for n in range(K):
            x1, y1 = q[0, 0], q[1, 0]
            x2, y2 = Tree[0, n], Tree[1, n]
            distance = calculate_distance(x1, y1, x2, y2)
            neighbors=np.hstack((neighbors, Tree[:, n]))
            neighbors_id=np.hstack((neighbors_id, n))
            distances=np.hstack((distances, distance))


        # Check remaining vertices in the Tree
        for i in range(K, Tree.shape[1]):
            x1, y1 = q[0, 0], q[1, 0]
            x2, y2 = Tree[0, i], Tree[1, i]
            distance = calculate_distance(x1, y1, x2, y2)

            # Check if this vertex is closer than the farthest in neighbors
            if any(distance < distances):
                max_id = np.argmax(distances)
                neighbors[:, max_id] = Tree[:, i]
                neighbors_id[max_id] = i
                distances[max_id] = distance

        return neighbors, neighbors_id, distances

    def dijkstra(self, graph, start, end):
        # i tried writing my own function for this but couldn't get it to work, so
        # i used chatGPT to generate this. With some tweaking to the indexing it works.
        """
        Finds the shortest path in a graph represented as a NumPy adjacency matrix using Dijkstra's algorithm.
        
        :param graph: A NumPy 2D array where graph[i][j] represents the weight of the edge 
                    from node i to node j, and `inf` indicates no edge.
        :param start: The starting node index.
        :param end: The target node index.
        :return: A tuple containing:
                - shortest_distance: The shortest distance from start to end
                - path: A list of nodes representing the shortest path from start to end
        """
        self.get_logger().info("starting dijkstra")
        num_nodes = graph.shape[0]
        
        # Priority queue for maintaining the min-heap of distances
        priority_queue = []
        heapq.heappush(priority_queue, (0, start))
        
        # Initialize distances with infinity and set distance to the start node as 0
        distances = np.full(num_nodes, np.inf)
        distances[start] = 0
        
        # Predecessors array for reconstructing the shortest path
        predecessors = np.full(num_nodes, -1, dtype=int)
        
        # Set to keep track of visited nodes
        visited = set()
        
        while priority_queue:
            current_distance, current_node = heapq.heappop(priority_queue)
            
            # If we reach the end node, reconstruct the path and return
            if current_node == end:
                path = []
                while current_node != -1:
                    path.insert(0, current_node)
                    current_node = predecessors[current_node]
                return current_distance, path
            
            # Skip if the node has been visited
            if current_node in visited:
                continue
            
            # Mark the current node as visited
            visited.add(current_node)
            
            # Explore neighbors
            for neighbor in range(num_nodes):
                weight = graph[current_node][neighbor]
                if weight == np.inf or neighbor in visited:
                    continue
                
                new_distance = current_distance + weight
                # Update distance if a shorter path is found
                if new_distance < distances[neighbor]:
                    distances[neighbor] = new_distance
                    predecessors[neighbor] = current_node
                    heapq.heappush(priority_queue, (new_distance, neighbor))
        
        # If we exhaust the queue without finding the end node, return infinity and an empty path
        return np.inf, []

    def vertex_collision_check(self, point, neighbor, obstacle_stack, n):
        # placeholder for a future module
        # needs to check if the edge between two points are in collision. 
        # false means no collision
        return False

    def smooth_path(self, x, y, resolution):
        self.get_logger().info("smoothing the path")
        x_smooth=np.array([x[0]])
        y_smooth=np.array([y[0]])
        for i in range(1, len(x)):
            x_smooth=np.hstack((x_smooth, np.linspace(x_smooth[-1], x[i], resolution)))
            y_smooth=np.hstack((y_smooth, np.linspace(y_smooth[-1], y[i], resolution)))
        
        return x_smooth, y_smooth
    
    def calc_IK(self, x, y):
        L1=self.L1
        L2=self.L2
        R1=self.R1
        R2=self.R2
        E=self.E
        b=self.b

        
        try: 
            # find theta2 first
            A2=x-b
            B2=y
            C2=-1/(2*R1)*(x**2 + y**2 + b**2 + R1**2 - R2**2 -E**2 - 2*x*b - 2*R2*E)
            theta2=2*atan2( (-B2+sqrt(B2**2-(C2-A2)*(A2+C2))) , (C2-A2) ) 
        except:
            self.get_logger().info("IK Failed at theta2: Check to see if point is beyond workspace")
        
        try:
            # calculate theta4
            theta4=acos(1/(R2+E)*(x-b-R1*cos(theta2)))
        except:
            self.get_logger().info("IK Failed at theta4: Check to see if point is beyond workspace")

        try: 

            # find theta1
            A1=2*L1*E*cos(theta4)-2*x*L1
            B1=2*L1*E*sin(theta4)-2*y*L1
            C1=x**2 + y**2 + L1**2 - L2**2 + E**2 - 2*x*E*cos(theta4)-2*y*E*sin(theta4)
            theta1=2*atan2( (-B1-sqrt(B1**2-(C1-A1)*(A1+C1))) , (C1-A1) ) 
        except:
            self.get_logger().info("IK Failed at theta1: Check to see if point is beyond workspace")

        try: 
            # find theta3 for completeness
            theta3=acos(1/L2*(x-L1*cos(theta1)-E*cos(theta4)))
        except:
            self.get_logger().info("IK Failed at theta3: Check to see if point is beyond workspace")

        try:
            # return the angles
            return theta1, theta2
        except:
            self.get_logger().info("IK failed.")
    


def main(args=None):
    try: 
        rclpy.init(args=args)
        define_path_instance = Define_Path()  
        rclpy.spin(define_path_instance) 
    
    except: 
        traceback.print_exc()
    


if __name__ == '__main__':
    main()