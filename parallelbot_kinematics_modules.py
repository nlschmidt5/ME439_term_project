from math import cos, sin, atan, sqrt, pi, atan2, acos, asin
from matplotlib import pyplot as plt
import numpy as np


def loadconfig(selection):
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
        L1=1.5
        L2=2
        R1=1.5
        R2=2
        b=2
        E=2
        x=-1
        y=5
    return L1,L2,R1,R2,b,E

def calc_FK(theta1, theta2, L1, L2, R1, R2, E, b):
    # takes in robot parameters and joint angles (in degrees), 
    # returns links start and end locations for plotting purposes

    theta1=theta1*pi/180
    theta2=theta2*pi/180
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

def calc_IK(x,y,L1,L2,R1,R2,b,E): 
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

    theta1b=2*atan2( (-B1-sqrt(B1**2-(C1-A1)*(A1+C1))) , (C1-A1) ) 

    theta1=theta1b

    # find theta 3 for completeness
    theta3=acos(1/L2*(x-L1*cos(theta1)-E*cos(theta4)))
    return theta1, theta2