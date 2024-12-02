from math import cos, sin, atan, sqrt, pi, atan2
from matplotlib import pyplot as plt
from matplotlib.animation import FuncAnimation  
import numpy as np

# test case 1
#  ________
#     |    | 
#   __|    |

# test case 2
#  \
#   \ 
#   |\
#   | \
#   |  \
#  _| __\

# select 1 or 2 for test case, otherwise, manually define values
configuration=4


def loadconfig(selection):
    if selection==1:
        L1=1
        L2=2
        R1=2
        R2=2
        b=3
        E=1
        # theta1=0
        # theta2=90
    if selection==2:
        L1=1
        L2=3
        R1=2
        R2=sqrt(18)
        b=2
        E=sqrt(2)
        # theta1=0
        # theta2=0
    if selection ==3:
        L1=1
        L2=3
        R1=2
        R2=sqrt(18)
        b=2
        E=sqrt(2)
        # theta1=45
        # theta2=0
    if selection ==4:
        L1=sqrt(2)
        L2=2
        R1=sqrt(2)
        R2=sqrt(8)
        b=2
        E=sqrt(8)
        # theta1=45
        # theta2=45
    if selection ==5:
        L1=3
        L2=4
        R1=4
        R2=5
        b=4
        E=3
        # theta1=27
        # theta2=72


    return L1,L2,R1,R2,b,E

L1,L2,R1,R2,b,E=loadconfig(configuration)
# L1=
# L2=
# R1=
# R2=
# b=
# E=
# theta1=
# theta2=

def calc_FK(theta1, theta2, L1, L2, R1, R2, E, b):
    # takes in robot parameters and joint angles (in degrees), 
    # returns links start and end locations for plotting purposes

    theta1=theta1*pi/180
    theta2=theta2*pi/180
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

# first theta1 moves from 0 to 90, then theta2 moves from 0 to 90
theta1=np.hstack((np.linspace(0, 180, 90), np.linspace(180, 180, 90) ))
theta2=np.hstack((np.linspace(0, 0, 90), np.linspace(0, 120, 90) ))



fig, ax = plt.subplots()
ax.set(xlim=[-5, 5], ylim=[-2, 8], xlabel='x (m)', ylabel='y (m)')

# initialize the links and lines
link1x, link1y, link2x, link2y, link3x, link3y, link4x, link4y=calc_FK(theta1[0], theta2[0], L1, L2, R1, R2, E, b)
link1=ax.plot(link1x[0], link1y[0])[0]
link2=ax.plot(link2x[0], link2y[0])[0]
link3=ax.plot(link3x[0], link3y[0])[0]
link4=ax.plot(link4x[0], link4y[0])[0]

def animate_arm(frame):
    link1x, link1y, link2x, link2y, link3x, link3y, link4x, link4y=calc_FK(theta1[frame], theta2[frame], L1, L2, R1, R2, E, b)
    link1.set_xdata(link1x)
    link1.set_ydata(link1y)
    link2.set_xdata(link2x)
    link2.set_ydata(link2y)
    link3.set_xdata(link3x)
    link3.set_ydata(link3y)
    link4.set_xdata(link4x)
    link4.set_ydata(link4y)
    
    return (link1, link2, link3, link4)

ani = FuncAnimation(fig=fig, func=animate_arm, frames=len(theta1), interval=30)
plt.show()