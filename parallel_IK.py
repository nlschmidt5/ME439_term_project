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
configuration=2

L1,L2,R1,R2,b,E,x,y=loadconfig(configuration)
print("config: "+str(configuration))

# find theta2 first
A2=x-b
B2=y
C2=-1/(2*R1)*(x**2 + y**2 + b**2 + R1**2 - R2**2 -E**2 - 2*x*b - 2*R2*E)
print("A2: "+str(A2))
print("B2: "+str(B2))
print("C2: "+str(C2))
theta2a=2*atan2( (-B2+sqrt(B2**2-(C2-A2)*(A2+C2))) , (C2-A2) ) # first solution to quadratic eqn, this one is right sometimes
theta2b=2*atan2( (-B2-sqrt(B2**2-(C2-A2)*(A2+C2))) , (C2-A2) ) # second solution to quadratic eqn
theta2c=pi+2*atan2( (-B2+sqrt(B2**2-(C2-A2)*(A2+C2))) , (C2-A2) ) 
theta2d=pi+2*atan2( (-B2-sqrt(B2**2-(C2-A2)*(A2+C2))) , (C2-A2) ) # this one is right sometimes
print("theta2a: "+str(theta2a*180/pi))
print("theta2b: "+str(theta2b*180/pi))
print("theta2a+pi: "+str(theta2c*180/pi))
print("theta2b+pi: "+str(theta2d*180/pi))

theta2=theta2d

# find theta4
theta4a=acos(1/(R2+E)*(x-b-R1*cos(theta2)))
theta4b=asin(1/(R2+E)*(y-R1*sin(theta2))) # this one is right
print("theta4_acos: "+str(theta4a*180/pi))
print("theta4_asin: "+str(theta4b*180/pi))
theta4=theta4b

# find theta 1
A1=2*L1*E*cos(theta4)-2*x*L1
B1=2*L1*E*sin(theta4)-2*y*L1
C1=x**2 + y**2 + L1**2 - L2**2 + E**2 - 2*x*E*cos(theta4)-2*y*E*sin(theta4)
print("A1: "+str(A1))
print("B1: "+str(B1))
print("C1: "+str(C1))
theta1a=2*atan2( (-B1+sqrt(B1**2-(C1-A1)*(A1+C1))) , (C1-A1) ) # first solution to quadratic eqn
theta1b=2*atan2( (-B1-sqrt(B1**2-(C1-A1)*(A1+C1))) , (C1-A1) ) # second solution to quadratic eqn, this one is right!
theta1c=pi+2*atan2( (-B1+sqrt(B1**2-(C1-A1)*(A1+C1))) , (C1-A1) ) 
theta1d=pi+2*atan2( (-B1-sqrt(B1**2-(C1-A1)*(A1+C1))) , (C1-A1) )
print("theta1a: "+str(theta1a*180/pi))
print("theta1b: "+str(theta1b*180/pi))
print("theta1a+pi: "+str(theta1c*180/pi))
print("theta1b+pi: "+str(theta1d*180/pi))


theta1=theta1b

# find theta 3 for completeness
theta3a=acos(1/L2*(x-L1*cos(theta1)-E*cos(theta4)))
theta3b=asin(1/L2*(y-L1*sin(theta1)-E*sin(theta4)))
print("theta3_acos: "+str(theta3a*180/pi))
print("theta3_asin: "+str(theta3b*180/pi))
theta3=theta3a
