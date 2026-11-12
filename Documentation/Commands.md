Signs

ros2 topic pub --once /reset_odom std_msgs/msg/Bool "{data: true}"

ros2 launch my_robot_navigation2 navigation2_robot.launch.py   use_sim_time:=false   map_file:=my_lab_map.yaml   params_file:=rubot_real_lidar_nav.yaml

ros2 launch my_robot_ai_navigation traffic_sign_navigation.launch.py   config_file:=traffic_sign_navigation_real.yaml

ros2 topic pub --once /traffic_sign std_msgs/msg/String "{data: left}"

YOLO

ros2 topic pub --once /reset_odom std_msgs/msg/Bool "{data: true}"

ros2 launch my_robot_navigation2 navigation2_robot.launch.py   use_sim_time:=false   map_file:=my_lab_map.yaml   params_file:=rubot_real_lidar_nav.yaml

ros2 launch my_robot_ai_perception traffic_sign_classifier.launch.py   config_file:=traffic_sign_classifier_real.yaml

ros2 launch my_robot_ai_navigation traffic_sign_navigation.launch.py   config_file:=traffic_sign_navigation_real.yaml