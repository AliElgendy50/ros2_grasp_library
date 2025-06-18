// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from grasp_msgs:msg/GraspConfigList.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__GRASP_CONFIG_LIST__TRAITS_HPP_
#define GRASP_MSGS__MSG__GRASP_CONFIG_LIST__TRAITS_HPP_

#include "grasp_msgs/msg/grasp_config_list__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grasp_msgs::msg::GraspConfigList>()
{
  return "grasp_msgs::msg::GraspConfigList";
}

template<>
struct has_fixed_size<grasp_msgs::msg::GraspConfigList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<grasp_msgs::msg::GraspConfigList>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // GRASP_MSGS__MSG__GRASP_CONFIG_LIST__TRAITS_HPP_
