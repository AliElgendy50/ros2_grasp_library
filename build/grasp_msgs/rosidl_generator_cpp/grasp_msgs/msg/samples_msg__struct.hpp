// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from grasp_msgs:msg/SamplesMsg.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__SAMPLES_MSG__STRUCT_HPP_
#define GRASP_MSGS__MSG__SAMPLES_MSG__STRUCT_HPP_

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
// Member 'header'
#include "std_msgs/msg/header__struct.hpp"
// Member 'samples'
#include "geometry_msgs/msg/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grasp_msgs__msg__SamplesMsg __attribute__((deprecated))
#else
# define DEPRECATED__grasp_msgs__msg__SamplesMsg __declspec(deprecated)
#endif

namespace grasp_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SamplesMsg_
{
  using Type = SamplesMsg_<ContainerAllocator>;

  explicit SamplesMsg_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit SamplesMsg_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _samples_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other>;
  _samples_type samples;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__samples(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other> & _arg)
  {
    this->samples = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grasp_msgs::msg::SamplesMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const grasp_msgs::msg::SamplesMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grasp_msgs::msg::SamplesMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grasp_msgs::msg::SamplesMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grasp_msgs::msg::SamplesMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grasp_msgs::msg::SamplesMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grasp_msgs::msg::SamplesMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grasp_msgs::msg::SamplesMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grasp_msgs::msg::SamplesMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grasp_msgs::msg::SamplesMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grasp_msgs__msg__SamplesMsg
    std::shared_ptr<grasp_msgs::msg::SamplesMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grasp_msgs__msg__SamplesMsg
    std::shared_ptr<grasp_msgs::msg::SamplesMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SamplesMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->samples != other.samples) {
      return false;
    }
    return true;
  }
  bool operator!=(const SamplesMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SamplesMsg_

// alias to use template instance with default allocator
using SamplesMsg =
  grasp_msgs::msg::SamplesMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace grasp_msgs

#endif  // GRASP_MSGS__MSG__SAMPLES_MSG__STRUCT_HPP_
