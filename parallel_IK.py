from math import cos, sin, atan, sqrt, pi, atan2, acos, asin
from matplotlib import pyplot as plt

def loadconfig(selection):
    if selection==1:
        L1=1
        L2=2
        R1=2
        R2=2
        b=3
        E=1
        x=0
        y=2
    if selection==2:
        L1=1
        L2=3
        R1=2
        R2=sqrt(18)
        b=2
        E=sqrt(2)
        x=0
        y=4

    if selection ==3:
        L1=1
        L2=3
        R1=2
        R2=sqrt(18)
        b=2
        E=sqrt(2)
        x=0.8970893496630682
        y=4.729899099983597

    if selection ==4:
        L1=sqrt(2)
        L2=2
        R1=sqrt(2)
        R2=sqrt(8)
        b=2
        E=sqrt(8)
        x=-1
        y=5

    return L1,L2,R1,R2,b,E,x,y


# select a test case, otherwise, manually define values
configuration=4

L1,L2,R1,R2,b,E,x,y=loadconfig(configuration)

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
