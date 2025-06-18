// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from grasp_msgs:msg/GraspConfig.idl
// generated code does not contain a copyright notice
#include "grasp_msgs/msg/grasp_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `bottom`
// Member `top`
// Member `surface`
// Member `sample`
#include "geometry_msgs/msg/point__functions.h"
// Member `approach`
// Member `binormal`
// Member `axis`
#include "geometry_msgs/msg/vector3__functions.h"
// Member `width`
// Member `score`
#include "std_msgs/msg/float32__functions.h"

bool
grasp_msgs__msg__GraspConfig__init(grasp_msgs__msg__GraspConfig * msg)
{
  if (!msg) {
    return false;
  }
  // bottom
  if (!geometry_msgs__msg__Point__init(&msg->bottom)) {
    grasp_msgs__msg__GraspConfig__fini(msg);
    return false;
  }
  // top
  if (!geometry_msgs__msg__Point__init(&msg->top)) {
    grasp_msgs__msg__GraspConfig__fini(msg);
    return false;
  }
  // surface
  if (!geometry_msgs__msg__Point__init(&msg->surface)) {
    grasp_msgs__msg__GraspConfig__fini(msg);
    return false;
  }
  // approach
  if (!geometry_msgs__msg__Vector3__init(&msg->approach)) {
    grasp_msgs__msg__GraspConfig__fini(msg);
    return false;
  }
  // binormal
  if (!geometry_msgs__msg__Vector3__init(&msg->binormal)) {
    grasp_msgs__msg__GraspConfig__fini(msg);
    return false;
  }
  // axis
  if (!geometry_msgs__msg__Vector3__init(&msg->axis)) {
    grasp_msgs__msg__GraspConfig__fini(msg);
    return false;
  }
  // sample
  if (!geometry_msgs__msg__Point__init(&msg->sample)) {
    grasp_msgs__msg__GraspConfig__fini(msg);
    return false;
  }
  // width
  if (!std_msgs__msg__Float32__init(&msg->width)) {
    grasp_msgs__msg__GraspConfig__fini(msg);
    return false;
  }
  // score
  if (!std_msgs__msg__Float32__init(&msg->score)) {
    grasp_msgs__msg__GraspConfig__fini(msg);
    return false;
  }
  return true;
}

void
grasp_msgs__msg__GraspConfig__fini(grasp_msgs__msg__GraspConfig * msg)
{
  if (!msg) {
    return;
  }
  // bottom
  geometry_msgs__msg__Point__fini(&msg->bottom);
  // top
  geometry_msgs__msg__Point__fini(&msg->top);
  // surface
  geometry_msgs__msg__Point__fini(&msg->surface);
  // approach
  geometry_msgs__msg__Vector3__fini(&msg->approach);
  // binormal
  geometry_msgs__msg__Vector3__fini(&msg->binormal);
  // axis
  geometry_msgs__msg__Vector3__fini(&msg->axis);
  // sample
  geometry_msgs__msg__Point__fini(&msg->sample);
  // width
  std_msgs__msg__Float32__fini(&msg->width);
  // score
  std_msgs__msg__Float32__fini(&msg->score);
}

grasp_msgs__msg__GraspConfig *
grasp_msgs__msg__GraspConfig__create()
{
  grasp_msgs__msg__GraspConfig * msg = (grasp_msgs__msg__GraspConfig *)malloc(sizeof(grasp_msgs__msg__GraspConfig));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(grasp_msgs__msg__GraspConfig));
  bool success = grasp_msgs__msg__GraspConfig__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
grasp_msgs__msg__GraspConfig__destroy(grasp_msgs__msg__GraspConfig * msg)
{
  if (msg) {
    grasp_msgs__msg__GraspConfig__fini(msg);
  }
  free(msg);
}


bool
grasp_msgs__msg__GraspConfig__Sequence__init(grasp_msgs__msg__GraspConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  grasp_msgs__msg__GraspConfig * data = NULL;
  if (size) {
    data = (grasp_msgs__msg__GraspConfig *)calloc(size, sizeof(grasp_msgs__msg__GraspConfig));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = grasp_msgs__msg__GraspConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        grasp_msgs__msg__GraspConfig__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
grasp_msgs__msg__GraspConfig__Sequence__fini(grasp_msgs__msg__GraspConfig__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      grasp_msgs__msg__GraspConfig__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

grasp_msgs__msg__GraspConfig__Sequence *
grasp_msgs__msg__GraspConfig__Sequence__create(size_t size)
{
  grasp_msgs__msg__GraspConfig__Sequence * array = (grasp_msgs__msg__GraspConfig__Sequence *)malloc(sizeof(grasp_msgs__msg__GraspConfig__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = grasp_msgs__msg__GraspConfig__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
grasp_msgs__msg__GraspConfig__Sequence__destroy(grasp_msgs__msg__GraspConfig__Sequence * array)
{
  if (array) {
    grasp_msgs__msg__GraspConfig__Sequence__fini(array);
  }
  free(array);
}
