import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ale/tutorials/stonefish-learning/stonefish_ws/install/bluerov2_control'
