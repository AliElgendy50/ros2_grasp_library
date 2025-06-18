// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from grasp_msgs:msg/GraspConfig.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__GRASP_CONFIG__STRUCT_HPP_
#define GRASP_MSGS__MSG__GRASP_CONFIG__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'bottom'
// Member 'top'
// Member 'surface'
// Member 'sample'
#include "geometry_msgs/msg/point__struct.hpp"
// Member 'approach'
// Member 'binormal'
// Member 'axis'
#include "geometry_msgs/msg/vector3__struct.hpp"
// Member 'width'
// Member 'score'
#include "std_msgs/msg/float32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grasp_msgs__msg__GraspConfig __attribute__((deprecated))
#else
# define DEPRECATED__grasp_msgs__msg__GraspConfig __declspec(deprecated)
#endif

namespace grasp_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraspConfig_
{
  using Type = GraspConfig_<ContainerAllocator>;

  explicit GraspConfig_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : bottom(_init),
    top(_init),
    surface(_init),
    approach(_init),
    binormal(_init),
    axis(_init),
    sample(_init),
    width(_init),
    score(_init)
  {
    (void)_init;
  }

  explicit GraspConfig_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : bottom(_alloc, _init),
    top(_alloc, _init),
    surface(_alloc, _init),
    approach(_alloc, _init),
    binormal(_alloc, _init),
    axis(_alloc, _init),
    sample(_alloc, _init),
    width(_alloc, _init),
    score(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _bottom_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _bottom_type bottom;
  using _top_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _top_type top;
  using _surface_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _surface_type surface;
  using _approach_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _approach_type approach;
  using _binormal_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _binormal_type binormal;
  using _axis_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _axis_type axis;
  using _sample_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _sample_type sample;
  using _width_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _width_type width;
  using _score_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _score_type score;

  // setters for named parameter idiom
  Type & set__bottom(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->bottom = _arg;
    return *this;
  }
  Type & set__top(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->top = _arg;
    return *this;
  }
  Type & set__surface(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->surface = _arg;
    return *this;
  }
  Type & set__approach(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->approach = _arg;
    return *this;
  }
  Type & set__binormal(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->binormal = _arg;
    return *this;
  }
  Type & set__axis(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->axis = _arg;
    return *this;
  }
  Type & set__sample(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->sample = _arg;
    return *this;
  }
  Type & set__width(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__score(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->score = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grasp_msgs::msg::GraspConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const grasp_msgs::msg::GraspConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grasp_msgs::msg::GraspConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grasp_msgs::msg::GraspConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grasp_msgs::msg::GraspConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grasp_msgs::msg::GraspConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grasp_msgs::msg::GraspConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grasp_msgs::msg::GraspConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grasp_msgs::msg::GraspConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grasp_msgs::msg::GraspConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grasp_msgs__msg__GraspConfig
    std::shared_ptr<grasp_msgs::msg::GraspConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grasp_msgs__msg__GraspConfig
    std::shared_ptr<grasp_msgs::msg::GraspConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspConfig_ & other) const
  {
    if (this->bottom != other.bottom) {
      return false;
    }
    if (this->top != other.top) {
      return false;
    }
    if (this->surface != other.surface) {
      return false;
    }
    if (this->approach != other.approach) {
      return false;
    }
    if (this->binormal != other.binormal) {
      return false;
    }
    if (this->axis != other.axis) {
      return false;
    }
    if (this->sample != other.sample) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspConfig_

// alias to use template instance with default allocator
using GraspConfig =
  grasp_msgs::msg::GraspConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace grasp_msgs

#endif  // GRASP_MSGS__MSG__GRASP_CONFIG__STRUCT_HPP_
