// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from grasp_msgs:msg/GraspConfigList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "grasp_msgs/msg/grasp_config_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grasp_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__GraspConfigList__grasps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<grasp_msgs::msg::GraspConfig> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GraspConfigList__grasps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<grasp_msgs::msg::GraspConfig> *>(untyped_member);
  return &member[index];
}

void * get_function__GraspConfigList__grasps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<grasp_msgs::msg::GraspConfig> *>(untyped_member);
  return &member[index];
}

void resize_function__GraspConfigList__grasps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<grasp_msgs::msg::GraspConfig> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GraspConfigList_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasp_msgs::msg::GraspConfigList, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grasps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<grasp_msgs::msg::GraspConfig>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasp_msgs::msg::GraspConfigList, grasps),  // bytes offset in struct
    nullptr,  // default value
    size_function__GraspConfigList__grasps,  // size() function pointer
    get_const_function__GraspConfigList__grasps,  // get_const(index) function pointer
    get_function__GraspConfigList__grasps,  // get(index) function pointer
    resize_function__GraspConfigList__grasps  // resize(index) function pointer
  },
  {
    "object_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasp_msgs::msg::GraspConfigList, object_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GraspConfigList_message_members = {
  "grasp_msgs::msg",  // message namespace
  "GraspConfigList",  // message name
  3,  // number of fields
  sizeof(grasp_msgs::msg::GraspConfigList),
  GraspConfigList_message_member_array  // message members
};

static const rosidl_message_type_support_t GraspConfigList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GraspConfigList_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace grasp_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasp_msgs::msg::GraspConfigList>()
{
  return &::grasp_msgs::msg::rosidl_typesupport_introspection_cpp::GraspConfigList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasp_msgs, msg, GraspConfigList)() {
  return &::grasp_msgs::msg::rosidl_typesupport_introspection_cpp::GraspConfigList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
