// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from grasp_msgs:msg/GraspConfig.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__GRASP_CONFIG__FUNCTIONS_H_
#define GRASP_MSGS__MSG__GRASP_CONFIG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "grasp_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "grasp_msgs/msg/grasp_config__struct.h"

/// Initialize msg/GraspConfig message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * grasp_msgs__msg__GraspConfig
 * )) before or use
 * grasp_msgs__msg__GraspConfig__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
bool
grasp_msgs__msg__GraspConfig__init(grasp_msgs__msg__GraspConfig * msg);

/// Finalize msg/GraspConfig message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
void
grasp_msgs__msg__GraspConfig__fini(grasp_msgs__msg__GraspConfig * msg);

/// Create msg/GraspConfig message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * grasp_msgs__msg__GraspConfig__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
grasp_msgs__msg__GraspConfig *
grasp_msgs__msg__GraspConfig__create();

/// Destroy msg/GraspConfig message.
/**
 * It calls
 * grasp_msgs__msg__GraspConfig__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
void
grasp_msgs__msg__GraspConfig__destroy(grasp_msgs__msg__GraspConfig * msg);


/// Initialize array of msg/GraspConfig messages.
/**
 * It allocates the memory for the number of elements and calls
 * grasp_msgs__msg__GraspConfig__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
bool
grasp_msgs__msg__GraspConfig__Sequence__init(grasp_msgs__msg__GraspConfig__Sequence * array, size_t size);

/// Finalize array of msg/GraspConfig messages.
/**
 * It calls
 * grasp_msgs__msg__GraspConfig__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
void
grasp_msgs__msg__GraspConfig__Sequence__fini(grasp_msgs__msg__GraspConfig__Sequence * array);

/// Create array of msg/GraspConfig messages.
/**
 * It allocates the memory for the array and calls
 * grasp_msgs__msg__GraspConfig__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
grasp_msgs__msg__GraspConfig__Sequence *
grasp_msgs__msg__GraspConfig__Sequence__create(size_t size);

/// Destroy array of msg/GraspConfig messages.
/**
 * It calls
 * grasp_msgs__msg__GraspConfig__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
void
grasp_msgs__msg__GraspConfig__Sequence__destroy(grasp_msgs__msg__GraspConfig__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // GRASP_MSGS__MSG__GRASP_CONFIG__FUNCTIONS_H_
