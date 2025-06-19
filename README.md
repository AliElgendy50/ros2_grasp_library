# ROS2 Grasp Library Docker Environment

This repository provides a Docker environment for the ROS2 Grasp Library and its dependencies, based on Ubuntu 18.04 and ROS 2 Dashing.

---

## Features

- Ubuntu 18.04 base image
- ROS 2 Dashing and all required dependencies installed via scripts
- Pre-configured for GPU, USB, and X11 GUI support (e.g., RViz)
- Ready-to-build and run ROS 2 workspaces

---

### 1. **Run the following command on your host**

```sh
xhost +local:root
```
---

### 2. **clone the working branch**

```sh
git clone -b dev-container-outside https://github.com/AliElgendy50/ros2_grasp_library.git
cd ros2_grasp_library
```

---

### 3. Open in VS Code as Dev Container

-Open Visual Studio Code.

-Open the ros2_grasp_library folder.

-When prompted, click “Reopen in Container”.

-If not prompted, manually run:

-Open Command Palette (Ctrl+Shift+P or Cmd+Shift+P)

Select:
(Dev Containers: Reopen in Container)

VS Code will now build and attach to the container defined by .devcontainer/devcontainer.json.

---


### 4. ROS 2 Workspace Location (Inside Container)
Once the container is running, the ROS 2 workspace is available at:

```sh
cd ~/ros2_ws
```


--

### 5. **Install OpenGL Utilities in the Container**

```sh
apt update
apt install -y mesa-utils
glxinfo | grep "OpenGL"
```

### 6. **Run ROS 2 Nodes (each in a separate terminal)**

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
