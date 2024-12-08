import numpy as np
import parallelbot_kinematics_modules as pbm

xy=np.matrix([[1],[1]])
Tree=np.matrix([[1,2,3,4],[5,6,7,8]])
dist=np.array([])

neighbors,neighbors_id, distances=pbm.find_nearest_vertex(xy, Tree, 2)
print(neighbors)
print(neighbors_id)
print(distances)