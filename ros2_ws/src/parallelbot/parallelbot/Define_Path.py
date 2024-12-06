import rclpy
from rclpy.node import Node 
import numpy as np
import traceback
from parallelbot_interfaces.msg import PBEndpoint, PBJointAngles

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


    def follow_path(self):
        # quick and dirty way to define a path
        x, y=self.line()
        #x, y=self.cirlce(self)
        self.endpoint.xy=[x, y]
        self.counter=self.counter+1
        if self.counter>self.resolution:
            self.timer=0
        self.pub_endpoint.publish(self.endpoint)
        

    
    def line(self):
        x=np.hstack((np.linspace(-45, -45, int(self.resolution/2)), np.linspace(-45, -45, int(self.resolution/2)) ))
        y=np.hstack((np.linspace(40, 160, int(self.resolution/2)), np.linspace(160, 40, int(self.resolution/2)) ))
        return x[self.counter], y[self.counter]
    
    def circle(self):
        t=np.linspace(0, 2*np.pi, 90)
        x=20*np.cos(t)-20
        y=20*np.sin(t)+140
        return x[self.counter], y[self.counter]




def main(args=None):
    try: 
        rclpy.init(args=args)
        define_path_instance = Define_Path()  
        rclpy.spin(define_path_instance) 
    
    except: 
        traceback.print_exc()
    


if __name__ == '__main__':
    main()