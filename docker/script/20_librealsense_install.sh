#!/bin/bash

set -e

SUDO=$1
if [ "$SUDO" == "" ]; then
    SUDO="sudo"
fi

LIBREALSENSE_VERSION=v2.34.0

# Install dependencies (extended for full compatibility)
$SUDO apt-get update
$SUDO apt-get install -y \
    git cmake build-essential libssl-dev libusb-1.0-0-dev pkg-config \
    libgtk-3-dev libglfw3-dev libgl1-mesa-dev libglu1-mesa-dev

# Clone the specified version
cd /tmp
rm -rf librealsense   # <-- Add this line
git clone https://github.com/IntelRealSense/librealsense.git -b ${LIBREALSENSE_VERSION}
cd librealsense

# Build and install
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
make -j$(nproc)
$SUDO make install


# Install udev rules for device access
$SUDO mkdir -p /etc/udev/rules.d/
$SUDO cp ../config/99-realsense-libusb.rules /etc/udev/rules.d/
$SUDO udevadm control --reload-rules && $SUDO udevadm trigger

# Clean up
cd /
rm -rf /tmp/librealsense