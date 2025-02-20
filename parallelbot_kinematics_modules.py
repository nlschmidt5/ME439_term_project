from math import cos, sin, atan, sqrt, pi, atan2, acos, asin
from matplotlib import pyplot as plt
import numpy as np
import numpy as np
import heapq

def loadparams(selection):
    if selection==1:
        L1=1
        L2=2
        R1=2
        R2=2
        b=3
        E=1
        # x=0
        # y=2
    if selection==2:
        L1=1
        L2=3
        R1=2
        R2=sqrt(18)
        b=2
        E=sqrt(2)
        # x=0
        # y=4

    if selection ==3:
        L1=1
        L2=3
        R1=2
        R2=sqrt(18)
        b=2
        E=sqrt(2)
        # x=0.8970893496630682
        # y=4.729899099983597

    if selection ==4:
        L1=sqrt(2)
        L2=2
        R1=sqrt(2)
        R2=sqrt(8)
        b=2
        E=sqrt(8)
        # x=-1
        # y=5
    if selection ==5:
        L1=55
        L2=90
        R1=55
        R2=140
        b=90
        E=30
        # x=-1
        # y=5
    return L1,L2,R1,R2,b,E

def calc_FK(theta1, theta2, params):
    L1,L2,R1,R2,b,E=loadparams(params)
    # takes in robot parameters and joint angles (in degrees), 
    # returns links start and end locations for plotting purposes

    theta1=wrap_angle(theta1*pi/180, "rad")
    theta2=wrap_angle(theta2*pi/180, "rad")
    A=1/L2**2*(2*b*R2 + 2*R1*R2*cos(theta2) - 2*L1*R2*cos(theta1))
    B=1/L2**2*(2*R1*R2*sin(theta2) - 2*L1*R2*sin(theta1))
    C=1/L2**2*(L1**2 + R1**2 + R2**2 + b**2 + 2*b*R1*cos(theta2) - 2*b*L1*cos(theta1) - 2*L1*R1*cos(theta2-theta1))-1

    theta4=2*pi+2*atan2( (-B-sqrt(B**2-(C-A)*(A+C))) , (C-A) ) # this one is correct! not sure why this is the one that works, but it is

    xee= b + R1*cos(theta2) + R2*cos(theta4) + E*cos(theta4)
    yee= R1*sin(theta2) + R2*sin(theta4) + E*sin(theta4)


    x1=0
    x2=b
    x3=L1*cos(theta1)
    x4=b+R1*cos(theta2)
    x5=b+R1*cos(theta2)+R2*cos(theta4)
    y1=0
    y2=0
    y3=L1*sin(theta1)
    y4=R1*sin(theta2)
    y5=R1*sin(theta2)+R2*sin(theta4)

    link1x=np.array([x1, x3])
    link1y=np.array([y1, y3])
    link2x=np.array([x2, x4])
    link2y=np.array([y2, y4])
    link3x=np.array([x3, x5])
    link3y=np.array([y3, y5])
    link4x=np.array([x4, xee])
    link4y=np.array([y4, yee])
    # links=np.matrix([[link1x, link1y], 
    #                  [link2x, link2y], 
    #                  [link3x, link3y], 
    #                  [link4x, link4y]
    #                  ])
    return link1x, link1y, link2x, link2y, link3x, link3y, link4x, link4y

def calc_FK_limited(theta1, theta2, params):
    L1,L2,R1,R2,b,E=loadparams(params)
    # takes in robot parameters and joint angles (in degrees), 
    # returns links start and end locations for plotting purposes

    theta1=limit_joint_angle(theta1, "deg")*180/np.pi
    theta2=limit_joint_angle(theta2, "deg")*180/np.pi
    # joint angles must be in rad before doing math!
    A=1/L2**2*(2*b*R2 + 2*R1*R2*cos(theta2) - 2*L1*R2*cos(theta1))
    B=1/L2**2*(2*R1*R2*sin(theta2) - 2*L1*R2*sin(theta1))
    C=1/L2**2*(L1**2 + R1**2 + R2**2 + b**2 + 2*b*R1*cos(theta2) - 2*b*L1*cos(theta1) - 2*L1*R1*cos(theta2-theta1))-1

    theta4=2*pi+2*atan2( (-B-sqrt(B**2-(C-A)*(A+C))) , (C-A) ) # this one is correct! not sure why this is the one that works, but it is

    xee= b + R1*cos(theta2) + R2*cos(theta4) + E*cos(theta4)
    yee= R1*sin(theta2) + R2*sin(theta4) + E*sin(theta4)


    x1=0
    x2=b
    x3=L1*cos(theta1)
    x4=b+R1*cos(theta2)
    x5=b+R1*cos(theta2)+R2*cos(theta4)
    y1=0
    y2=0
    y3=L1*sin(theta1)
    y4=R1*sin(theta2)
    y5=R1*sin(theta2)+R2*sin(theta4)

    link1x=np.array([x1, x3])
    link1y=np.array([y1, y3])
    link2x=np.array([x2, x4])
    link2y=np.array([y2, y4])
    link3x=np.array([x3, x5])
    link3y=np.array([y3, y5])
    link4x=np.array([x4, xee])
    link4y=np.array([y4, yee])
    # links=np.matrix([[link1x, link1y], 
    #                  [link2x, link2y], 
    #                  [link3x, link3y], 
    #                  [link4x, link4y]
    #                  ])
    return link1x, link1y, link2x, link2y, link3x, link3y, link4x, link4y

def calc_IK(x,y,params): 
    L1,L2,R1,R2,b,E=loadparams(params)
    # find theta2 first
    A2=x-b
    B2=y
    C2=-1/(2*R1)*(x**2 + y**2 + b**2 + R1**2 - R2**2 -E**2 - 2*x*b - 2*R2*E)
    theta2=2*atan2( (-B2+sqrt(B2**2-(C2-A2)*(A2+C2))) , (C2-A2) )

    theta4=acos(1/(R2+E)*(x-b-R1*cos(theta2)))

    # find theta 1
    A1=2*L1*E*cos(theta4)-2*x*L1
    B1=2*L1*E*sin(theta4)-2*y*L1
    C1=x**2 + y**2 + L1**2 - L2**2 + E**2 - 2*x*E*cos(theta4)-2*y*E*sin(theta4)

    theta1=2*atan2( (-B1-sqrt(B1**2-(C1-A1)*(A1+C1))) , (C1-A1) )


    # find theta 3 for completeness
    theta3= acos(1/L2*(x-L1*cos(theta1)-E*cos(theta4)))
    # returns theta in degree
    theta1_out=wrap_angle(theta1*180/np.pi, "deg")
    theta2_out=wrap_angle(theta2*180/np.pi, "deg")

    return theta1_out, theta2_out

def calc_IK_limited(x,y,params): 
    L1,L2,R1,R2,b,E=loadparams(params)
    # find theta2 first
    A2=x-b
    B2=y
    C2=-1/(2*R1)*(x**2 + y**2 + b**2 + R1**2 - R2**2 -E**2 - 2*x*b - 2*R2*E)
    theta2=2*atan2( (-B2+sqrt(B2**2-(C2-A2)*(A2+C2))) , (C2-A2) )

    theta4=acos(1/(R2+E)*(x-b-R1*cos(theta2)))

    # find theta 1
    A1=2*L1*E*cos(theta4)-2*x*L1
    B1=2*L1*E*sin(theta4)-2*y*L1
    C1=x**2 + y**2 + L1**2 - L2**2 + E**2 - 2*x*E*cos(theta4)-2*y*E*sin(theta4)

    theta1=2*atan2( (-B1-sqrt(B1**2-(C1-A1)*(A1+C1))) , (C1-A1) )


    # find theta 3 for completeness
    theta3= acos(1/L2*(x-L1*cos(theta1)-E*cos(theta4)))
    # returns theta in degree
    theta1_out=limit_joint_angle( wrap_angle(theta1*180/np.pi, "deg"), "deg" )
    theta2_out=limit_joint_angle( wrap_angle(theta2*180/np.pi, "deg"), "deg" )
    return theta1_out, theta2_out

def limit_joint_angle(angle, unit):
    if unit=="deg":
        if angle>180 and angle<270:
            angle_out=180.
        elif angle<0 or angle>270:
            angle_out=0.
        else:
            angle_out=angle
    if unit=="rad":
        if angle>np.pi and angle<3*np.pi/2:
            angle_out=np.pi
        elif angle<0 or angle>3*np.pi/2:
            angle_out=0.
        else:
            angle_out=angle
    return angle_out

def wrap_angle(angle, unit):
    if unit=="deg":
        angle_out=angle%360
        return angle_out
    if unit=="rad":
        angle_out=angle%(2*np.pi)
        return angle_out

def PRM(qI,qG,num_sample,K,obstacle_stack, params):
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
        xrand, yrand=get_random_position(params)
        random_config=np.matrix([[xrand], [yrand]])
        Vertex=np.hstack((Vertex, random_config))

    # add the goal to the end of Vertex
    Vertex=np.hstack((Vertex, qG))
    # initialize the graph
    Graph=np.tile(np.inf, (num_sample, num_sample))

    for i in range(np.size(Vertex, 1)):
        # find the K nearest neighbors for each point, and the distances to said points
        neighbors,neighbors_idx, neighbors_dis=find_nearest_vertex(Vertex[:,i], Vertex, K)
        for j in range(K):
            collision=vertex_collision_check(Vertex[:,i], neighbors[:,j], obstacle_stack, n)
            if not(collision):
                new_edge=np.matrix([[j], [neighbors_idx[j]], [neighbors_dis[j]]])
                Edge=np.hstack(( Edge, new_edge))
                Graph[i, int(neighbors_idx[j])]=neighbors_dis[j]
                Graph[int(neighbors_idx[j]), i]=neighbors_dis[j]

    init_idx = 0
    target_idx = np.size(Vertex, 1)-1

    shortest_distance, path = dijkstra(Graph, init_idx, target_idx)

    path_out = Vertex[:,path]
    Tree_out = Vertex
    Edge_out = Edge
    Graph_out = Graph

    return path_out,Tree_out,Edge_out,Graph_out

def get_random_position(params):
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
            theta1, theta2=calc_IK(x,y,params)
            validpoint=True
            print("successful point found")
        except: 
            validpoint=False
            print("point invalid, trying another point" + str(i))
    return x, y

def calculate_distance(x1, y1, x2, y2):
    dis=np.sqrt((x2-x1)**2+(y2-y1)**2)
    return dis

def find_nearest_vertex(q, Tree, K):
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

def dijkstra(graph, start, end):
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


def vertex_collision_check(point, neighbor, obstacle_stack, n):
    # placeholder for a future module
    # needs to check if the edge between two points is collision free
    return False

def smooth_path(x, y, resolution):
    x_smooth=np.array([x[0]])
    y_smooth=np.array([y[0]])
    for i in range(1, len(x)):
        x_smooth=np.hstack((x_smooth, np.linspace(x_smooth[-1], x[i], resolution)))
        y_smooth=np.hstack((y_smooth, np.linspace(y_smooth[-1], y[i], resolution)))
    return x_smooth, y_smooth

def IK_array(x, y, params):
    theta1=np.array([])
    theta2=np.array([])
    for i in range(len(x)):
        theta1_new, theta2_new= calc_IK(x[i],y[i], params)
        theta1=np.hstack((theta1, theta1_new))
        theta2=np.hstack((theta2, theta2_new))

    return theta1, theta2