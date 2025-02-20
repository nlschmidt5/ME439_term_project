##
# basic animation script for Fk only. 
# manipulate the theta value inputs and watch the output motion. 

from matplotlib import pyplot as plt
from matplotlib.animation import FuncAnimation  
import numpy as np
import parallelbot_kinematics_modules as pbm

configuration=5
# first theta1 moves from 0 to 90, then theta2 moves from 0 to 90
theta1=np.hstack((np.linspace(0, 90, 60), np.linspace(90, 90, 60) ))
theta2=np.hstack((np.linspace(0, 0, 60), np.linspace(0, 90, 60) ))

# initialize the links and lines
def init_animation(theta1, theta2, params):
    fig, ax = plt.subplots()
    # make sure limits are set to see the whole robot.
    ax.set(xlim=[-100, 150], ylim=[-50, 200], xlabel='x (mm)', ylabel='y (mm)')
    ax.set_aspect(1)
    link1x, link1y, link2x, link2y, link3x, link3y, link4x, link4y=pbm.calc_FK(theta1[0], theta2[0], params)
    link1=ax.plot(link1x[0], link1y[0])[0]
    link2=ax.plot(link2x[0], link2y[0])[0]
    link3=ax.plot(link3x[0], link3y[0])[0]
    link4=ax.plot(link4x[0], link4y[0])[0]
    return fig, ax, link1, link2, link3, link4

def animate_fun(frame):
    link1x, link1y, link2x, link2y, link3x, link3y, link4x, link4y=pbm.calc_FK(theta1[frame], theta2[frame], configuration)
    link1.set_xdata(link1x)
    link1.set_ydata(link1y)
    link2.set_xdata(link2x)
    link2.set_ydata(link2y)
    link3.set_xdata(link3x)
    link3.set_ydata(link3y)
    link4.set_xdata(link4x)
    link4.set_ydata(link4y)
    
    return (link1, link2, link3, link4)

def animate_arm(fig, animate_fun, theta1):
    ani = FuncAnimation(fig=fig, func=animate_fun, frames=len(theta1), interval=30)
    # plt.show()
    return ani

fig, ax, link1, link2, link3, link4 = init_animation(theta1, theta2, configuration)
ani=animate_arm(fig, animate_fun, theta1)
ani.save(filename="fwd_kin.gif", writer="pillow")    

