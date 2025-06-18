// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from grasp_msgs:msg/GraspConfig.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__GRASP_CONFIG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define GRASP_MSGS__MSG__GRASP_CONFIG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "grasp_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "grasp_msgs/msg/grasp_config__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace grasp_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grasp_msgs
cdr_serialize(
  const grasp_msgs::msg::GraspConfig & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grasp_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  grasp_msgs::msg::GraspConfig & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grasp_msgs
get_serialized_size(
  const grasp_msgs::msg::GraspConfig & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grasp_msgs
max_serialized_size_GraspConfig(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace grasp_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grasp_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, grasp_msgs, msg, GraspConfig)();

#ifdef __cplusplus
}
#endif

#endif  // GRASP_MSGS__MSG__GRASP_CONFIG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
