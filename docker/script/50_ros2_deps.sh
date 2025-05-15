]#!/bin/bash
set -e

SUDO=$1
if [ "$SUDO" == "sudo" ];then
        SUDO="sudo"
else
        SUDO=""
fi

$SUDO apt-get update
$SUDO apt-get install -y ros-dashing-object-msgs \
        python3-scipy \
        ros-dashing-eigen3-cmake-module \
        python3-colcon-common-extensions

DEPS_PATH=${DEPS_PATH:-/root/deps}
WORK_DIR=${DEPS_PATH}/../ros2_ws
mkdir -p $WORK_DIR/src && cd $WORK_DIR/src

if [ ! -d ros2_ur_description ]; then
    git clone --depth 1 https://github.com/RoboticsYY/ros2_ur_description.git
fi
if [ ! -d handeye ]; then
    git clone --depth 1 https://github.com/RoboticsYY/handeye
fi
if [ ! -d criutils ]; then
    git clone --depth 1 https://github.com/RoboticsYY/criutils.git
fi
if [ ! -d baldor ]; then
    git clone --depth 1 https://github.com/RoboticsYY/baldor.git
fi
if [ ! -d ros2_intel_realsense ]; then
    git clone --depth 1 https://github.com/intel/ros2_intel_realsense.git -b refactor
fi
if [ ! -d ros2_grasp_library ]; then
    git clone --depth 1 https://github.com/intel/ros2_grasp_library.git
fi

cd $WORK_DIR
source /opt/ros/dashing/setup.sh
export InferenceEngine_DIR=/opt/openvino_toolkit/openvino/inference-engine/build/
export CPU_EXTENSION_LIB=/opt/openvino_toolkit/openvino/inference-engine/bin/intel64/Release/lib/libcpu_extension.so
export GFLAGS_LIB=/opt/openvino_toolkit/openvino/inference-engine/bin/intel64/Release/lib/libgflags_nothreads.a
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$InferenceEngine_DIR/../bin/intel64/Release/lib:/usr/local/lib/mklml/lib

colcon build --symlink-install