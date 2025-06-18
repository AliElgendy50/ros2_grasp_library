// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from grasp_msgs:msg/SamplesMsg.idl
// generated code does not contain a copyright notice
#include "grasp_msgs/msg/samples_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `samples`
#include "geometry_msgs/msg/point__functions.h"

bool
grasp_msgs__msg__SamplesMsg__init(grasp_msgs__msg__SamplesMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    grasp_msgs__msg__SamplesMsg__fini(msg);
    return false;
  }
  // samples
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->samples, 0)) {
    grasp_msgs__msg__SamplesMsg__fini(msg);
    return false;
  }
  return true;
}

void
grasp_msgs__msg__SamplesMsg__fini(grasp_msgs__msg__SamplesMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // samples
  geometry_msgs__msg__Point__Sequence__fini(&msg->samples);
}

grasp_msgs__msg__SamplesMsg *
grasp_msgs__msg__SamplesMsg__create()
{
  grasp_msgs__msg__SamplesMsg * msg = (grasp_msgs__msg__SamplesMsg *)malloc(sizeof(grasp_msgs__msg__SamplesMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(grasp_msgs__msg__SamplesMsg));
  bool success = grasp_msgs__msg__SamplesMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
grasp_msgs__msg__SamplesMsg__destroy(grasp_msgs__msg__SamplesMsg * msg)
{
  if (msg) {
    grasp_msgs__msg__SamplesMsg__fini(msg);
  }
  free(msg);
}


bool
grasp_msgs__msg__SamplesMsg__Sequence__init(grasp_msgs__msg__SamplesMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  grasp_msgs__msg__SamplesMsg * data = NULL;
  if (size) {
    data = (grasp_msgs__msg__SamplesMsg *)calloc(size, sizeof(grasp_msgs__msg__SamplesMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = grasp_msgs__msg__SamplesMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        grasp_msgs__msg__SamplesMsg__fini(&data[i - 1]);
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
grasp_msgs__msg__SamplesMsg__Sequence__fini(grasp_msgs__msg__SamplesMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      grasp_msgs__msg__SamplesMsg__fini(&array->data[i]);
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

grasp_msgs__msg__SamplesMsg__Sequence *
grasp_msgs__msg__SamplesMsg__Sequence__create(size_t size)
{
  grasp_msgs__msg__SamplesMsg__Sequence * array = (grasp_msgs__msg__SamplesMsg__Sequence *)malloc(sizeof(grasp_msgs__msg__SamplesMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = grasp_msgs__msg__SamplesMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
grasp_msgs__msg__SamplesMsg__Sequence__destroy(grasp_msgs__msg__SamplesMsg__Sequence * array)
{
  if (array) {
    grasp_msgs__msg__SamplesMsg__Sequence__fini(array);
  }
  free(array);
}
