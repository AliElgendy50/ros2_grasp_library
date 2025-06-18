// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from realsense_msgs:msg/IMUInfo.idl
// generated code does not contain a copyright notice

#ifndef REALSENSE_MSGS__MSG__IMU_INFO__TRAITS_HPP_
#define REALSENSE_MSGS__MSG__IMU_INFO__TRAITS_HPP_

#include "realsense_msgs/msg/imu_info__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<realsense_msgs::msg::IMUInfo>()
{
  return "realsense_msgs::msg::IMUInfo";
}

template<>
struct has_fixed_size<realsense_msgs::msg::IMUInfo>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<realsense_msgs::msg::IMUInfo>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

}  // namespace rosidl_generator_traits

#endif  // REALSENSE_MSGS__MSG__IMU_INFO__TRAITS_HPP_
