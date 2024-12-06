## NOT WORKING
# more advanced animation script.  
# calculate the inverse kinematics, 
# and then plot the FK results
import parallelbot_kinematics_modules as pbm
from matplotlib.animation import FuncAnimation  
import numpy as np
from matplotlib import pyplot as plt

config=5
L1,L2,R1,R2,b,E=pbm.loadconfig(config)
n=400
x=np.array([])
y=np.array([])
theta1=np.array([])
theta2=np.array([])

theta1i, theta2i, xi, yi=pbm.get_random_position((R2+E), L1,L2,R1,R2,b,E)
theta1g, theta2g, xg, yg=pbm.get_random_position((R2+E), L1,L2,R1,R2,b,E)
qi=np.matrix([[xi],[yi]])
qg=np.matrix([[xg],[yg]])
K=10
obstacle_stack=1
path,Tree,Edge,Graph=pbm.PRM(qi,qg,n,K,obstacle_stack, (R2+E), L1,L2,R1,R2,b,E)

# find theta1 and theta2 for each xy pair
x=path[0,:].A1
y=path[1,:].A1
for i in range(len(x)):
    theta1_new, theta2_new = pbm.calc_IK(x[i],y[i],L1,L2,R1,R2,b,E)
    theta1=np.hstack((theta1, theta1_new))
    theta2=np.hstack((theta2, theta2_new))

theta1=np.hstack((theta1, np.flip(theta1, 0)))
theta2=np.hstack((theta2, np.flip(theta2, 0)))
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