import rclpy
from rclpy.node import Node 
import numpy as np
import traceback
from math import atan2, acos, asin, sin, cos, tan, sqrt, pi
from parallelbot_interfaces.msg import PB_endpoint, joint_angles

class PB_kinematics(Node): 
    def __init__(self):
        super().__init__('PB_kinematics')
        
        # Create subscribers
        self.sub_IK = self.create_subscription(PB_endpoint, '/endpoint_desired', self.calc_IK,1)
        self.sub_FK = self.create_subscription(joint_angles, '/joint_angles_desired', self.calc_FK,1)
        # Create publishers
        self.pub_FK = self.create_publisher(PB_endpoint, '/endpoint',1)
        self.pub_IK = self.create_publisher(joint_angles, '/joint_angles_desired',1)

        # define robot parameters
        self.L1 = self.declare_parameter('L1',1.414).value
        self.L2 = self.declare_parameter('L2',2).value
        self.R1 =self.declare_parameter('R1',1.414).value
        self.R2 =self.declare_parameter('R2',2.828).value
        self.E = self.declare_parameter('E',2.828).value
        self.b = self.declare_parameter('b',2).value
   

def calc_FK(self, theta):

    # takes in robot parameters and joint angles (in degrees), 
    # returns links start and end locations for plotting purposes
    theta1=theta[0]
    theta2=theta[1]
    L1=self.L1
    L2=self.L2
    R1=self.R1
    R2=self.R2
    E=self.E
    b=self.b
    
    A=1/L2**2*(2*b*R2 + 2*R1*R2*cos(theta2) - 2*L1*R2*cos(theta1))
    B=1/L2**2*(2*R1*R2*sin(theta2) - 2*L1*R2*sin(theta1))
    C=1/L2**2*(L1**2 + R1**2 + R2**2 + b**2 + 2*b*R1*cos(theta2) - 2*b*L1*cos(theta1) - 2*L1*R1*cos(theta2-theta1))-1

    theta4a=2*atan2( (-B+sqrt(B**2-(C-A)*(A+C))) , (C-A) ) # first solution to quadratic eqn
    theta4b=2*atan2( (-B-sqrt(B**2-(C-A)*(A+C))) , (C-A) ) # second solution to quadratic eqn
    theta4c=2*pi+2*atan2( (-B+sqrt(B**2-(C-A)*(A+C))) , (C-A) ) 
    theta4d=2*pi+2*atan2( (-B-sqrt(B**2-(C-A)*(A+C))) , (C-A) ) # this one is correct! not sure why this is the one that works, but it is

    theta4=theta4d
    xee= b + R1*cos(theta2) + R2*cos(theta4) + E*cos(theta4)
    yee= R1*sin(theta2) + R2*sin(theta4) + E*sin(theta4)


    


def calc_IK(self, theta):
    L1=self.L1
    L2=self.L2
    R1=self.R1
    R2=self.R2
    E=self.E
    b=self.b

    self.pub_IK.publish()