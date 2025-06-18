// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from grasp_msgs:msg/GraspConfig.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__GRASP_CONFIG__TRAITS_HPP_
#define GRASP_MSGS__MSG__GRASP_CONFIG__TRAITS_HPP_

#include "grasp_msgs/msg/grasp_config__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'bottom'
// Member 'top'
// Member 'surface'
// Member 'sample'
#include "geometry_msgs/msg/point__traits.hpp"
// Member 'approach'
// Member 'binormal'
// Member 'axis'
#include "geometry_msgs/msg/vector3__traits.hpp"
// Member 'width'
// Member 'score'
#include "std_msgs/msg/float32__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grasp_msgs::msg::GraspConfig>()
{
  return "grasp_msgs::msg::GraspConfig";
}

template<>
struct has_fixed_size<grasp_msgs::msg::GraspConfig>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Float32>::value> {};

template<>
struct has_bounded_size<grasp_msgs::msg::GraspConfig>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Float32>::value> {};

}  // namespace rosidl_generator_traits

#endif  // GRASP_MSGS__MSG__GRASP_CONFIG__TRAITS_HPP_
