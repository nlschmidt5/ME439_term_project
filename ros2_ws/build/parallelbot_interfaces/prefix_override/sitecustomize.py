import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/noah/Documents/Grad/Coursework/RoboticsProject/ME439_term_project/ros2_ws/install/parallelbot_interfaces'
