// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from grasp_msgs:msg/GraspConfig.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__GRASP_CONFIG__STRUCT_H_
#define GRASP_MSGS__MSG__GRASP_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bottom'
// Member 'top'
// Member 'surface'
// Member 'sample'
#include "geometry_msgs/msg/point__struct.h"
// Member 'approach'
// Member 'binormal'
// Member 'axis'
#include "geometry_msgs/msg/vector3__struct.h"
// Member 'width'
// Member 'score'
#include "std_msgs/msg/float32__struct.h"

// Struct defined in msg/GraspConfig in the package grasp_msgs.
typedef struct grasp_msgs__msg__GraspConfig
{
  geometry_msgs__msg__Point bottom;
  geometry_msgs__msg__Point top;
  geometry_msgs__msg__Point surface;
  geometry_msgs__msg__Vector3 approach;
  geometry_msgs__msg__Vector3 binormal;
  geometry_msgs__msg__Vector3 axis;
  geometry_msgs__msg__Point sample;
  std_msgs__msg__Float32 width;
  std_msgs__msg__Float32 score;
} grasp_msgs__msg__GraspConfig;

// Struct for a sequence of grasp_msgs__msg__GraspConfig.
typedef struct grasp_msgs__msg__GraspConfig__Sequence
{
  grasp_msgs__msg__GraspConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grasp_msgs__msg__GraspConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRASP_MSGS__MSG__GRASP_CONFIG__STRUCT_H_
