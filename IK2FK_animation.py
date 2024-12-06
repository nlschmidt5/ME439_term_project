##
# more advanced animation script. construct a time dependent x and y array, 
# calculate the inverse kinematics, 
# and then plot the FK results
import parallelbot_kinematics_modules as pbm
from matplotlib.animation import FuncAnimation  
import numpy as np
from matplotlib import pyplot as plt

config=5
L1,L2,R1,R2,b,E=pbm.loadconfig(config)

# draw a circle
t=np.linspace(0, 2*np.pi, 90)
# x=20*np.cos(t)-20
# y=20*np.sin(t)+140


x=np.hstack((np.linspace(-45, -45, 20), np.linspace(-45, -45, 20) ))
y=np.hstack((np.linspace(40, 160, 20), np.linspace(160, 40, 20) ))
# x=np.hstack((np.linspace(-45, 100, 60), np.linspace(100, -45, 60) ))
# y=np.hstack((np.linspace(100, 100, 60), np.linspace(100, 100, 60) ))


# find theta1 and theta2 for each xy pair
theta1=np.array([])
theta2=np.array([])
theta1_limit=np.array([])
theta2_limit=np.array([])
for i in range(len(x)):
    theta1_new, theta2_new = pbm.calc_IK_limited(x[i],y[i],L1,L2,R1,R2,b,E)
    theta1=np.hstack((theta1, theta1_new))
    theta2=np.hstack((theta2, theta2_new))


# animation functions
def init_animation(theta1, theta2, L1, L2, R1, R2, E, b):
    fig, ax = plt.subplots()
    # make sure limits are set to see the whole robot.
    ax.set(xlim=[-100, 150], ylim=[-50, 200], xlabel='x (mm)', ylabel='y (mm)')
    link1x, link1y, link2x, link2y, link3x, link3y, link4x, link4y=pbm.calc_FK(theta1[0], theta2[0], L1, L2, R1, R2, E, b)
    link1=ax.plot(link1x[0], link1y[0])[0]
    link2=ax.plot(link2x[0], link2y[0])[0]
    link3=ax.plot(link3x[0], link3y[0])[0]
    link4=ax.plot(link4x[0], link4y[0])[0]
    return fig, ax, link1, link2, link3, link4
def animate_fun(frame):
    link1x, link1y, link2x, link2y, link3x, link3y, link4x, link4y=pbm.calc_FK(theta1[frame], theta2[frame], L1, L2, R1, R2, E, b)
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
    plt.show()
    return ani

# initialize the animation, and animate
fig, ax, link1, link2, link3, link4 = init_animation(theta1, theta2, L1, L2, R1, R2, E, b)
ani=animate_arm(fig, animate_fun, theta1)
# ani.save(filename="line.gif", writer="pillow")