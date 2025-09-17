import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/anudeep/Desktop/git/Robotics-work/hw/ros2_ws/install/veve3725_hw2'
