#!/bin/bash

DEPS_DIR=${DEPS_PATH}
SUDO=$1
if [ "$SUDO" == "sudo" ];then
        SUDO="sudo"
else
        SUDO=""
fi

# Install OpenCV for standalone testing
$SUDO apt-get update
$SUDO apt-get install -y libopencv-dev


/workspaces/ros2_grasp_library/docker/script/13_openvino_install.sh $SUDO


# install gpd
cd $DEPS_DIR
git clone --depth 1 https://github.com/sharronliu/gpd.git -b libgpd
cd gpd/src/gpd
mkdir -p build && cd build
cmake -DUSE_OPENVINO=ON .. && make
$SUDO make install
