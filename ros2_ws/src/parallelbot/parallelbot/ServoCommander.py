# -*- coding: utf-8 -*-
"""
Created on Wed Dec  4 16:33:51 2024

@author: gobri

need to install and start running the pigpio daemon so we can
access the gpio pins I think
sudo apt-get update
sudo apt-get install pigpio python3-pigpio

sudo pigpiod

"""

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray
from rclpy.executors import MultiThreadedExecutor
import traceback 
import pigpio
from parallelbot_interfaces.msg import PBEndpoint, PBJointAngles


class ServoCommander(Node):
    def __init__(self):
        super().__init__('ServoCommander')
        self.publisher_ = self.create_publisher(Float32MultiArray, 'servo_states', 10)
        self.subscription = self.create_subscription(PBJointAngles,'joint_angles',self.listener_callback,1)
        self.pi = pigpio.pi()
        self.servos = [17, 18]  # GPIO pins where servos are connected
        self.servo_positions = [90, 90]  # Initial positions

    def listener_callback(self, msg):
        th1 = msg.th1
        th2 = msg.th2
        self.set_servo_angle(self.servos[0], th1)
        self.set_servo_angle(self.servos[1], th2)
        self.servo_positions[0] = th1
        self.servo_positions[1] = th2
        self.publish_servo_positions()

    def set_servo_angle(self, gpio_pin, angle):
        pulse_width = 500 + (angle / 360.) * 2000  # Convert angle to pulse width
        self.pi.set_servo_pulsewidth(gpio_pin, pulse_width)

    def publish_servo_positions(self):
        msg = Float32MultiArray()
        msg.data = self.servo_positions
        self.publisher_.publish(msg)
        self.get_logger().info(f'Servo positions: {self.servo_positions}')

def main(args=None):
    rclpy.init(args=args)
    servo_commander_instance = ServoCommander()
    executor = MultiThreadedExecutor()
    
    try: 
        rclpy.spin(servo_commander_instance, executor=executor)
        
    except: 
        traceback.print_exc()

if __name__ == '__main__':
    main()