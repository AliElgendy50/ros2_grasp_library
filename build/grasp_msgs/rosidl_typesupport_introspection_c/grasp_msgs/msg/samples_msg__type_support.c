// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from grasp_msgs:msg/SamplesMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "grasp_msgs/msg/samples_msg__rosidl_typesupport_introspection_c.h"
#include "grasp_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "grasp_msgs/msg/samples_msg__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `samples`
#include "geometry_msgs/msg/point.h"
// Member `samples`
#include "geometry_msgs/msg/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t SamplesMsg__rosidl_typesupport_introspection_c__size_function__Point__samples(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * SamplesMsg__rosidl_typesupport_introspection_c__get_const_function__Point__samples(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SamplesMsg__rosidl_typesupport_introspection_c__get_function__Point__samples(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SamplesMsg__rosidl_typesupport_introspection_c__resize_function__Point__samples(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SamplesMsg__rosidl_typesupport_introspection_c__SamplesMsg_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasp_msgs__msg__SamplesMsg, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "samples",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasp_msgs__msg__SamplesMsg, samples),  // bytes offset in struct
    NULL,  // default value
    SamplesMsg__rosidl_typesupport_introspection_c__size_function__Point__samples,  // size() function pointer
    SamplesMsg__rosidl_typesupport_introspection_c__get_const_function__Point__samples,  // get_const(index) function pointer
    SamplesMsg__rosidl_typesupport_introspection_c__get_function__Point__samples,  // get(index) function pointer
    SamplesMsg__rosidl_typesupport_introspection_c__resize_function__Point__samples  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SamplesMsg__rosidl_typesupport_introspection_c__SamplesMsg_message_members = {
  "grasp_msgs__msg",  // message namespace
  "SamplesMsg",  // message name
  2,  // number of fields
  sizeof(grasp_msgs__msg__SamplesMsg),
  SamplesMsg__rosidl_typesupport_introspection_c__SamplesMsg_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SamplesMsg__rosidl_typesupport_introspection_c__SamplesMsg_message_type_support_handle = {
  0,
  &SamplesMsg__rosidl_typesupport_introspection_c__SamplesMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasp_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasp_msgs, msg, SamplesMsg)() {
  SamplesMsg__rosidl_typesupport_introspection_c__SamplesMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  SamplesMsg__rosidl_typesupport_introspection_c__SamplesMsg_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!SamplesMsg__rosidl_typesupport_introspection_c__SamplesMsg_message_type_support_handle.typesupport_identifier) {
    SamplesMsg__rosidl_typesupport_introspection_c__SamplesMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SamplesMsg__rosidl_typesupport_introspection_c__SamplesMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
