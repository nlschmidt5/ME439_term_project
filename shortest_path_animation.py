## NOT WORKING
# more advanced animation script.  
# calculate the inverse kinematics, 
# and then plot the FK results
import parallelbot_kinematics_modules as pbm
from matplotlib.animation import FuncAnimation  
import numpy as np
from matplotlib import pyplot as plt

config=5
n=400
x=np.array([])
y=np.array([])


# xi, yi=pbm.get_random_position((R2+E), L1,L2,R1,R2,b,E)
# xg, yg=pbm.get_random_position((R2+E), L1,L2,R1,R2,b,E)
# qi=np.matrix([[xi],[yi]])
# qg=np.matrix([[xg],[yg]])

qi=np.matrix([[-45],[40]])
qg=np.matrix([[40],[140]])

K=10
obstacle_stack=1 #placeholder
path,Tree,Edge,Graph=pbm.PRM(qi,qg,n,K,obstacle_stack, config)

# find theta1 and theta2 for each xy pair
x=path[0,:].A1
y=path[1,:].A1
resolution=10
x_smooth, y_smooth=pbm.smooth_path(x, y, resolution)

theta1, theta2 =pbm.IK_array(x_smooth, y_smooth, config)



theta1=np.hstack((theta1, np.flip(theta1, 0)))
theta2=np.hstack((theta2, np.flip(theta2, 0)))
print("x: "+str(x_smooth))
print("y: "+str(y_smooth))
print("th1: "+str(theta1))
print("th2: "+str(theta2))

# animation functions
def init_animation(theta1, theta2, config):
    fig, ax = plt.subplots()
    # make sure limits are set to see the whole robot.
    ax.set(xlim=[-100, 150], ylim=[-50, 200], xlabel='x (mm)', ylabel='y (mm)')
    ax.set_aspect(1)
    link1x, link1y, link2x, link2y, link3x, link3y, link4x, link4y=pbm.calc_FK(theta1[0], theta2[0], config)
    link1=ax.plot(link1x[0], link1y[0])[0]
    link2=ax.plot(link2x[0], link2y[0])[0]
    link3=ax.plot(link3x[0], link3y[0])[0]
    link4=ax.plot(link4x[0], link4y[0])[0]
    return fig, ax, link1, link2, link3, link4
def animate_fun(frame):
    link1x, link1y, link2x, link2y, link3x, link3y, link4x, link4y=pbm.calc_FK(theta1[frame], theta2[frame], config)
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
    plt.plot(x_smooth, y_smooth)
    return ani

# initialize the animation, and animate
fig, ax, link1, link2, link3, link4 = init_animation(theta1, theta2, config)
ani=animate_arm(fig, animate_fun, theta1)
ani.save(filename="short_path.gif", writer="pillow")    

# plots for debugging
# # plt.plot( y_smooth)
# # plt.plot( x_smooth)
# plt.plot( theta1)
# plt.plot( theta2)
# plt.show()