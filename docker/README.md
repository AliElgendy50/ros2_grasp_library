# ROS2 Grasp Library Docker Environment

This repository provides a Docker environment for the ROS2 Grasp Library and its dependencies, based on Ubuntu 18.04 and ROS 2 Dashing.

---

## Features

- Ubuntu 18.04 base image
- ROS 2 Dashing and all required dependencies installed via scripts
- Pre-configured for GPU, USB, and X11 GUI support (e.g., RViz)
- Ready-to-build and run ROS 2 workspaces

---

## Dockerfile Overview

The Dockerfile installs all dependencies and sets up the ROS 2 environment using a custom script:

```dockerfile
FROM ubuntu:bionic

MAINTAINER Liu Cong "congx.liu@intel.com"

ARG DEPS_DIR=/root/deps
WORKDIR $DEPS_DIR

COPY ./script/ $DEPS_DIR/script/
RUN apt-get update && apt-get install -y wget
RUN bash script/install_ros2_grasp_library.sh /root/deps

WORKDIR /rootand 
ENTRYPOINT ["/root/script/ros_entrypoint.sh"]
CMD ["bash"]
```

---

## Getting Started

### 1. **Build or Pull the Docker Image**

```sh
docker build -t alielgendy50/ros2_grasp_library:latest .
# or
docker pull alielgendy50/ros2_grasp_library:latest
```

---

### 2. **Run the Docker Container**

```sh
xhost +local:root
docker run --gpus all -it --rm --privileged \
  -v /tmp/.X11-unix:/tmp/.X11-unix:rw \
  -v /dev/bus/usb:/dev/bus/usb \
  -v /dev:/dev:rw \
  -e DISPLAY=$DISPLAY \
  --name ros2_grasp_library \
  --entrypoint bash \
  alielgendy50/ros2_grasp_library:latest
```

---

### 3. **Open Additional Terminals**

To open more terminals in the running container, use:

```sh
docker exec -it ros2_grasp_library bash
```

---

### 4. **Setup ROS 2 Environment in Each Terminal**

In every terminal (including those opened with `docker exec`):

```sh
cd ~/ros2_ws
source /opt/ros/dashing/setup.bash
source ~/ros2_ws/install/local_setup.bash
```

---

### 5. **Run ROS 2 Nodes (each in a separate terminal)**

**Terminal 1:**
```sh
ros2 run grasp_ros2 grasp_ros2 __params:=src/ros2_grasp_library/grasp_ros2/cfg/grasp_ros2_params.yaml
```

**Terminal 2:**
```sh
ros2 run realsense_node realsense_node
```

**Terminal 3:**
```sh
ros2 run rviz2 rviz2 -d src/ros2_grasp_library/grasp_ros2/rviz2/grasp.rviz
```

---

## Notes

- Always source both setup scripts in every terminal.
- Use `docker exec -it ros2_grasp_library bash` for additional terminals.
- The entrypoint script (`/root/script/ros_entrypoint.sh`) can be customized to automatically source ROS 2 setup files.

---

## License

[MIT](LICENSE) or your chosen license.
