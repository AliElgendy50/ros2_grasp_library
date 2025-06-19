#!/bin/bash

DEPS_DIR=${DEPS_PATH}
SUDO=$1
if [ "$SUDO" == "sudo" ];then
        SUDO="sudo"
else
        SUDO=""
fi

# Install ur_modern_driver
cd $DEPS_DIR
git clone --depth 1 https://github.com/RoboticsYY/ur_modern_driver.git -b libur_modern_driver
cd ur_modern_driver/libur_modern_driver
mkdir -p build && cd build
cmake -DCMAKE_BUILD_TYPE=Release .. && make
$SUDO make install

# Install Universal_Robots_ROS_Driver
cd $DEPS_DIR
git clone https://github.com/UniversalRobots/Universal_Robots_ROS_Driver.git

# --- Build instructions for Universal_Robots_ROS_Driver ---
# For ROS1 (catkin):
# cd Universal_Robots_ROS_Driver
# catkin_make

# For ROS2 (colcon):
# cd Universal_Robots_ROS_Driver
# colcon build
