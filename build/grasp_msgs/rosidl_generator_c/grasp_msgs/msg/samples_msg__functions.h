// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from grasp_msgs:msg/SamplesMsg.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__SAMPLES_MSG__FUNCTIONS_H_
#define GRASP_MSGS__MSG__SAMPLES_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "grasp_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "grasp_msgs/msg/samples_msg__struct.h"

/// Initialize msg/SamplesMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * grasp_msgs__msg__SamplesMsg
 * )) before or use
 * grasp_msgs__msg__SamplesMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
bool
grasp_msgs__msg__SamplesMsg__init(grasp_msgs__msg__SamplesMsg * msg);

/// Finalize msg/SamplesMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
void
grasp_msgs__msg__SamplesMsg__fini(grasp_msgs__msg__SamplesMsg * msg);

/// Create msg/SamplesMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * grasp_msgs__msg__SamplesMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
grasp_msgs__msg__SamplesMsg *
grasp_msgs__msg__SamplesMsg__create();

/// Destroy msg/SamplesMsg message.
/**
 * It calls
 * grasp_msgs__msg__SamplesMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
void
grasp_msgs__msg__SamplesMsg__destroy(grasp_msgs__msg__SamplesMsg * msg);


/// Initialize array of msg/SamplesMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * grasp_msgs__msg__SamplesMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
bool
grasp_msgs__msg__SamplesMsg__Sequence__init(grasp_msgs__msg__SamplesMsg__Sequence * array, size_t size);

/// Finalize array of msg/SamplesMsg messages.
/**
 * It calls
 * grasp_msgs__msg__SamplesMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
void
grasp_msgs__msg__SamplesMsg__Sequence__fini(grasp_msgs__msg__SamplesMsg__Sequence * array);

/// Create array of msg/SamplesMsg messages.
/**
 * It allocates the memory for the array and calls
 * grasp_msgs__msg__SamplesMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
grasp_msgs__msg__SamplesMsg__Sequence *
grasp_msgs__msg__SamplesMsg__Sequence__create(size_t size);

/// Destroy array of msg/SamplesMsg messages.
/**
 * It calls
 * grasp_msgs__msg__SamplesMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grasp_msgs
void
grasp_msgs__msg__SamplesMsg__Sequence__destroy(grasp_msgs__msg__SamplesMsg__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // GRASP_MSGS__MSG__SAMPLES_MSG__FUNCTIONS_H_
