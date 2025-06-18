// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from grasp_msgs:msg/GraspConfigList.idl
// generated code does not contain a copyright notice

#ifndef GRASP_MSGS__MSG__GRASP_CONFIG_LIST__STRUCT_HPP_
#define GRASP_MSGS__MSG__GRASP_CONFIG_LIST__STRUCT_HPP_

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
// Member 'grasps'
#include "grasp_msgs/msg/grasp_config__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grasp_msgs__msg__GraspConfigList __attribute__((deprecated))
#else
# define DEPRECATED__grasp_msgs__msg__GraspConfigList __declspec(deprecated)
#endif

namespace grasp_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraspConfigList_
{
  using Type = GraspConfigList_<ContainerAllocator>;

  explicit GraspConfigList_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_name = "";
    }
  }

  explicit GraspConfigList_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    object_name(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_name = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _grasps_type =
    std::vector<grasp_msgs::msg::GraspConfig_<ContainerAllocator>, typename ContainerAllocator::template rebind<grasp_msgs::msg::GraspConfig_<ContainerAllocator>>::other>;
  _grasps_type grasps;
  using _object_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _object_name_type object_name;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__grasps(
    const std::vector<grasp_msgs::msg::GraspConfig_<ContainerAllocator>, typename ContainerAllocator::template rebind<grasp_msgs::msg::GraspConfig_<ContainerAllocator>>::other> & _arg)
  {
    this->grasps = _arg;
    return *this;
  }
  Type & set__object_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->object_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grasp_msgs::msg::GraspConfigList_<ContainerAllocator> *;
  using ConstRawPtr =
    const grasp_msgs::msg::GraspConfigList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grasp_msgs::msg::GraspConfigList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grasp_msgs::msg::GraspConfigList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grasp_msgs::msg::GraspConfigList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grasp_msgs::msg::GraspConfigList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grasp_msgs::msg::GraspConfigList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grasp_msgs::msg::GraspConfigList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grasp_msgs::msg::GraspConfigList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grasp_msgs::msg::GraspConfigList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grasp_msgs__msg__GraspConfigList
    std::shared_ptr<grasp_msgs::msg::GraspConfigList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grasp_msgs__msg__GraspConfigList
    std::shared_ptr<grasp_msgs::msg::GraspConfigList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspConfigList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->grasps != other.grasps) {
      return false;
    }
    if (this->object_name != other.object_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspConfigList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspConfigList_

// alias to use template instance with default allocator
using GraspConfigList =
  grasp_msgs::msg::GraspConfigList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace grasp_msgs

#endif  // GRASP_MSGS__MSG__GRASP_CONFIG_LIST__STRUCT_HPP_
