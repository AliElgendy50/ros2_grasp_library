# ROS2 Grasp Library Docker Environment

This repository provides a Docker environment for the ROS2 Grasp Library and its dependencies, based on Ubuntu 18.04 and ROS 2 Dashing.

---

## Features

- Ubuntu 18.04 base image
- ROS 2 Dashing and all required dependencies installed via scripts
- Pre-configured for GPU, USB, and X11 GUI support (e.g., RViz)
- Ready-to-build and run ROS 2 workspaces

---

### 2. **Run the following command on your host**

```sh
xhost +local:root
```
---

### 3. **Install OpenGL Utilities in the Container**

```sh
apt update
apt install -y mesa-utils
glxinfo | grep "OpenGL"
```

### 4. **Run ROS 2 Nodes (each in a separate terminal)**

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
