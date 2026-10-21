import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/user/my_rUBot_mecanum/install_normal/my_robot_driver'
