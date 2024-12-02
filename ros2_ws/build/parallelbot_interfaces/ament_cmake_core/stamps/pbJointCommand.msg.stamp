# This is a message that holds data to describe the commands to a set of bus servo joints.
#
# Each joint is uniquely identified by its name.
# The header specifies the time at which the commands were recorded. All the commands
# in one message have to be recorded at the same time.
#
# The command of each joint (revolute or prismatic) is defined by:
# the command of the joint (int, 0 to 1000),
#
# The message has a boolean to determine whether it is enabled or not. 
#
# Match the order of the names and the commands to uniquely associate the joint
# names with the correct commands.

std_msgs/Header header
string[] name
int16[] command
bool enable
