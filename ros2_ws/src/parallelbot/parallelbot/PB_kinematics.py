import rclpy
from rclpy.node import Node 
import numpy as np
import traceback
from math import atan2, acos, asin, sin, cos, tan, sqrt, pi
from parallelbot_interfaces.msg import PBEndpoint, PBJointAngles
import heapq

class PB_kinematics(Node): 
    def __init__(self):
        super().__init__('PB_kinematics')
        
        # Create subscribers
        self.sub_IK = self.create_subscription(PBEndpoint, '/endpoint_desired', self.calc_IK,1)
        self.sub_FK = self.create_subscription(PBJointAngles, '/joint_angles_desired', self.calc_FK,1)
        # Create publishers
        self.pub_FK = self.create_publisher(PBEndpoint, '/endpoint',1)
        self.pub_IK = self.create_publisher(PBJointAngles, '/joint_angles',1)
        
        # define robot parameters
        self.L1 = self.declare_parameter('L1',55).value
        self.L2 = self.declare_parameter('L2',90).value
        self.R1 =self.declare_parameter('R1',55).value
        self.R2 =self.declare_parameter('R2',140).value
        self.b = self.declare_parameter('b',90).value
        self.E = self.declare_parameter('E',30).value
        
        #initialize message types
        self.theta=PBJointAngles()
        self.endpoint=PBEndpoint()

    def limit_joint_angle(self, angle, unit):
        # takes in an angle between 0 and 360, 
        # returns an angle between 0 and 180
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

    def wrap_angle(self, angle, unit):
        # returns an angle between 0 and 360, or 0 and 2pi
        if unit=="deg":
            angle_out=angle%360
            return angle_out
        if unit=="rad":
            angle_out=angle%(2*np.pi)
            return angle_out

        
    def calc_FK(self, theta):
        # takes in robot parameters and joint angles (in radians), 
        # returns an endpoint
        theta1=self.limit_joint_angle(theta.th1, "rad")
        theta2=self.limit_joint_angle(theta.th2, "rad")
        L1=self.L1
        L2=self.L2
        R1=self.R1
        R2=self.R2
        E=self.E
        b=self.b
        try: 
            A=1/L2**2*(2*b*R2 + 2*R1*R2*cos(theta2) - 2*L1*R2*cos(theta1))
            B=1/L2**2*(2*R1*R2*sin(theta2) - 2*L1*R2*sin(theta1))
            C=1/L2**2*(L1**2 + R1**2 + R2**2 + b**2 + 2*b*R1*cos(theta2) - 2*b*L1*cos(theta1) - 2*L1*R1*cos(theta2-theta1))-1

            theta4=2*pi+2*atan2( (-B-sqrt(B**2-(C-A)*(A+C))) , (C-A) )
            xee= b + R1*cos(theta2) + R2*cos(theta4) + E*cos(theta4)
            yee= R1*sin(theta2) + R2*sin(theta4) + E*sin(theta4)
            self.endpoint.xy=[xee, yee]

            self.get_logger().info("FK - publishing endpoint: x: "+ str(round(xee, 3)) +" y: "+str(round(yee, 3)))
            self.pub_FK.publish(self.endpoint)
        except: 
            self.get_logger().info("FK failed! May be beyond workspace")
            self.get_logger().error(traceback.format_exc())

    def calc_IK(self, endpoint):
        L1=self.L1
        L2=self.L2
        R1=self.R1
        R2=self.R2
        E=self.E
        b=self.b

        x=endpoint.xy[0]
        y=endpoint.xy[1]

        
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
            # wrap angles to be between 0 and 2pi
            theta1_wrapped=self.wrap_angle( theta1, "rad" )
            theta2_wrapped=self.wrap_angle( theta2, "rad" )
            # limit joint angles to between 0 and pi
            theta1_out=self.limit_joint_angle( theta1_wrapped, "rad" )
            theta2_out=self.limit_joint_angle( theta2_wrapped, "rad" )

            # package the message
            self.theta.th1=theta1_out
            self.theta.th2=theta2_out
            self.theta.th3=theta3
            self.theta.th4=theta4
            self.pub_IK.publish(self.theta)

            self.get_logger().info("IK - publishing angles: th1: "+ str(round(self.theta.th1, 3)) +" th2: "+str(round(self.theta.th2, 3)))
        except:
            self.get_logger().info("Failed to publish angles.")
            self.get_logger().error(traceback.format_exc())

    


def main(args=None):
    try: 
        rclpy.init(args=args)
        PB_kinematics_instance = PB_kinematics()  
        rclpy.spin(PB_kinematics_instance) 
    
    except: 
        traceback.print_exc()
    


if __name__ == '__main__':
    main()