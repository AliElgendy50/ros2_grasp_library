#!/bin/bash

set -e

DEPS_DIR=${DEPS_PATH:-/tmp}
SUDO=$1
if [ "$SUDO" == "sudo" ]; then
    SUDO="sudo"
else
    SUDO=""
fi

# Install dependencies (if not already installed)

$SUDO apt-get update
$SUDO apt-get install -y cmake build-essential libeigen3-dev unzip wget libpcl-dev

# Install gpg
cd $DEPS_DIR
wget -t 3 -c https://github.com/atenpas/gpg/archive/3dcd656d70f095ad1bda3d2fb597a994198466ab.zip
unzip -o 3dcd656d70f095ad1bda3d2fb597a994198466ab.zip

# Patch plot.cpp for boost::this_thread
sed -i '1i#include <boost/thread/thread.hpp>' $DEPS_DIR/gpg-3dcd656d70f095ad1bda3d2fb597a994198466ab/src/gpg/plot.cpp

# Patch CMakeLists.txt to link boost_thread
sed -i '/target_link_libraries/s/$/ -lboost_thread/' $DEPS_DIR/gpg-3dcd656d70f095ad1bda3d2fb597a994198466ab/CMakeLists.txt

cd gpg-3dcd656d70f095ad1bda3d2fb597a994198466ab
mkdir -p build && cd build
cmake .. && make
$SUDO make install

ls /usr/local/lib/libgrasp_candidates_generator.so
