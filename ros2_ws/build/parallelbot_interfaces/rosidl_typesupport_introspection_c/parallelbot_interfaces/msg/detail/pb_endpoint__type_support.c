// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from parallelbot_interfaces:msg/PBEndpoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "parallelbot_interfaces/msg/detail/pb_endpoint__rosidl_typesupport_introspection_c.h"
#include "parallelbot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "parallelbot_interfaces/msg/detail/pb_endpoint__functions.h"
#include "parallelbot_interfaces/msg/detail/pb_endpoint__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__PBEndpoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  parallelbot_interfaces__msg__PBEndpoint__init(message_memory);
}

void parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__PBEndpoint_fini_function(void * message_memory)
{
  parallelbot_interfaces__msg__PBEndpoint__fini(message_memory);
}

size_t parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__size_function__PBEndpoint__xy(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__get_const_function__PBEndpoint__xy(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__get_function__PBEndpoint__xy(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__fetch_function__PBEndpoint__xy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__get_const_function__PBEndpoint__xy(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__assign_function__PBEndpoint__xy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__get_function__PBEndpoint__xy(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__PBEndpoint_message_member_array[1] = {
  {
    "xy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(parallelbot_interfaces__msg__PBEndpoint, xy),  // bytes offset in struct
    NULL,  // default value
    parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__size_function__PBEndpoint__xy,  // size() function pointer
    parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__get_const_function__PBEndpoint__xy,  // get_const(index) function pointer
    parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__get_function__PBEndpoint__xy,  // get(index) function pointer
    parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__fetch_function__PBEndpoint__xy,  // fetch(index, &value) function pointer
    parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__assign_function__PBEndpoint__xy,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__PBEndpoint_message_members = {
  "parallelbot_interfaces__msg",  // message namespace
  "PBEndpoint",  // message name
  1,  // number of fields
  sizeof(parallelbot_interfaces__msg__PBEndpoint),
  false,  // has_any_key_member_
  parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__PBEndpoint_message_member_array,  // message members
  parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__PBEndpoint_init_function,  // function to initialize message memory (memory has to be allocated)
  parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__PBEndpoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__PBEndpoint_message_type_support_handle = {
  0,
  &parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__PBEndpoint_message_members,
  get_message_typesupport_handle_function,
  &parallelbot_interfaces__msg__PBEndpoint__get_type_hash,
  &parallelbot_interfaces__msg__PBEndpoint__get_type_description,
  &parallelbot_interfaces__msg__PBEndpoint__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_parallelbot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, parallelbot_interfaces, msg, PBEndpoint)() {
  if (!parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__PBEndpoint_message_type_support_handle.typesupport_identifier) {
    parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__PBEndpoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &parallelbot_interfaces__msg__PBEndpoint__rosidl_typesupport_introspection_c__PBEndpoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
