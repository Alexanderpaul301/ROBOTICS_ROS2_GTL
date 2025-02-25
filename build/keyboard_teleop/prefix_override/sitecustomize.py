import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/GTL/pcastere/ros_hw1/ros2_hw1/install/keyboard_teleop'
