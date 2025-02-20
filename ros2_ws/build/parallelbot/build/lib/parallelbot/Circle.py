import rclpy
from rclpy.node import Node 
import numpy as np
import traceback
from math import atan2, acos, asin, sin, cos, tan, sqrt, pi
from parallelbot_interfaces.msg import PBEndpoint, PBJointAngles
import heapq

class Circle(Node): 
    def __init__(self):
        super().__init__('Circle')
        
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
        self.resolution=90
        self.timer = self.create_timer(1/self.timerfrequency, self.follow_path)
        self.qi=np.matrix([[-45],[40]])
        self.qg=np.matrix([[40],[140]])
        self.shortest_x=np.array([])
        self.shortest_y=np.array([])
        self.shortest_x, self.shortest_y= self.init_shortest()


    def follow_path(self):
        # quick and dirty way to define a path

        # x, y=self.line()
        
        if self.counter>=self.resolution:
            self.counter=0
        x, y=self.circle()
        self.endpoint.xy=[x, y]
        self.get_logger().info("sending x: "+ str(round(x, 2))+ " y: "+ str(round(y, 2)))
        self.pub_endpoint.publish(self.endpoint)
        self.counter+=1
        

    
    def line(self):
        x=np.hstack((np.linspace(-45, -45, int(self.resolution/2)), np.linspace(-45, -45, int(self.resolution/2)) ))
        y=np.hstack((np.linspace(40, 160, int(self.resolution/2)), np.linspace(160, 40, int(self.resolution/2)) ))
        return x[self.counter], y[self.counter]
    
    def circle(self):
        t=np.linspace(0, 2*np.pi, self.resolution)
        x=20*np.cos(t)-20
        y=20*np.sin(t)+140
        return x[self.counter], y[self.counter]
    

def main(args=None):
    try: 
        rclpy.init(args=args)
        circle_instance = Circle()  
        rclpy.spin(circle_instance) 
    
    except: 
        traceback.print_exc()
    


if __name__ == '__main__':
    main()