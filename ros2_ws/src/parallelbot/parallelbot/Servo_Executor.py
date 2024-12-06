#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
title: Servo Node - ME439 Intro to robotics, wisc.edu
Author: Peter Adamczyk 
Updated 2024-09-24

servo_node.py
ROS Node to set servo pulses received on input topics (e.g. "/servo_command_0"). 
"""

import rclpy
from rclpy.node import Node
import traceback 
# # Import the Servo library: 
# #from Adafruit_PWM_Servo_Driver import PWM
# import board
# from adafruit_pca9685 import PCA9685
# IMPORT the messages: 
from std_msgs.msg import Int32

# Duplicate all the functions from "servo_examples"
#from Adafruit_PWM_Servo_Driver import PWM
import board
from adafruit_pca9685 import PCA9685
import numpy as np
from parallelbot_interfaces.msg import PBEndpoint, PBJointAngles


class servos(): 
    def __init__(self): 
        # Create the I2C bus interface.
        self.i2c = board.I2C()  # uses board.SCL and board.SDA
        
        # PWM Controller set-up
        self.servo_pulse_frequency = 50
        self.servo_pulse_duration_us = 1.0e6/self.servo_pulse_frequency   # microseconds for each pulse
        self.servo_pulse_width_to_count_multiplier = 1./self.servo_pulse_duration_us*(65535)   # Counter is 12-bit, so 4096 levels (0-4095)
            
        # Initialize the PWM device using the default address
        # Create a simple PCA9685 class instance.
        self.pca = PCA9685(self.i2c)
        
        # Set the Frequency of all servo outputs
        # Set the PWM frequency to 50hz ==> 20,000 us period
        self.pca.frequency = 50
        
        # Stop them all manually
        for ii in range(16):
            self.pca.channels[0].duty_cycle = 0
    
    # Function to command any servo with a given pulse width in microseconds
    def command_servo(self, servo_number, pulse_width_us):
        pulse_width_count = int(round(pulse_width_us*self.servo_pulse_width_to_count_multiplier))
        # self.pca.channels[0].duty_cycle = pulse_width_count
        self.pca.channels[servo_number].duty_cycle = pulse_width_count

    
    def interp_servo(self, angle_range,us_range,angle):
        # just use the same function arguments to call an Interpolation function np.interp
        return np.interp(angle,angle_range,us_range)    
    
    def shutdown_servos(self):
        for ii in range(16):
            self.command_servo(ii, 0)



class Servo_Executor(Node):

    def __init__(self):
        super().__init__('Servo_Executor')
        self.subscription = self.create_subscription(Int32, 'servo_command_0', self.command_servo_0, 1)     
        self.subscription = self.create_subscription(PBJointAngles, 'joint_angles', self.command_servo, 1)     
        self.subscription = self.create_subscription(PBJointAngles, 'joint_angles_desired', self.command_servo, 1)     
        self.servos = servos()

    #   # Callback function: receives a desired joint angle
    def command_servo_0(self,msg_in): 
        # unpack the command
        cmd_0 = msg_in.data
        # setServoPulse(0,cmd_0)
        self.servos.command_servo(0,cmd_0)

    def command_servo(self,joint_angles): 
        # unpack the command
        th1 = joint_angles.th1
        th2 = joint_angles.th2
        cmd1=int(500 + (th1/ np.pi) * 2000) # convert from rad to pulse width (us)
        cmd2=int(500 + (th2/ np.pi) * 2000)
        self.servos.command_servo(0,cmd1)
        self.servos.command_servo(1,cmd2)
        self.get_logger().info("sent command to servo_0 cmd: "+ str(cmd1))
        self.get_logger().info("sent command to servo_1 cmd: "+ str(cmd2))



# =============================================================================
#   # Main function
# =============================================================================
def main(args=None):
    rclpy.init(args=args)

    servo_executor = Servo_Executor()

    try:
        # "spin" will block the program until an error occurs, e.g. keyboard break Ctrl+C. 
        rclpy.spin(servo_executor)
    except: 
        # When an error occurs, catch it with "except" and stop the motors
        servo_executor.servos.shutdown_servos() 
        servo_executor.get_logger().info('Stopping Motor') 

    rclpy.shutdown()

# =============================================================================

    
    
    
# Startup stuff. 
if __name__ == '__main__':
    try: 
        main()
    except: 
        traceback.print_exc()

    # Shut down here also, just in case. 
    s = servos()
    s.shutdown_servos()    # to shut it down