from math import cos, sin, atan, sqrt, pi, atan2
from matplotlib import pyplot as plt
from matplotlib.animation import FuncAnimation  
import parallelbot_kinematics_modules as pbm
import numpy as np

configuration=5


theta1=0
theta2=0

# initialize the links and lines
link1x, link1y, link2x, link2y, link3x, link3y, link4x, link4y=pbm.calc_FK(theta1, theta2, configuration)
link1=plt.plot(link1x, link1y)
link2=plt.plot(link2x, link2y)
link3=plt.plot(link3x, link3y)
link4=plt.plot(link4x, link4y)

plt.show()