// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from parallelbot_interfaces:msg/PBJointCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "parallelbot_interfaces/msg/detail/pb_joint_command__rosidl_typesupport_introspection_c.h"
#include "parallelbot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "parallelbot_interfaces/msg/detail/pb_joint_command__functions.h"
#include "parallelbot_interfaces/msg/detail/pb_joint_command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `command`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__PBJointCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  parallelbot_interfaces__msg__PBJointCommand__init(message_memory);
}

void parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__PBJointCommand_fini_function(void * message_memory)
{
  parallelbot_interfaces__msg__PBJointCommand__fini(message_memory);
}

size_t parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__size_function__PBJointCommand__name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__get_const_function__PBJointCommand__name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__get_function__PBJointCommand__name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__fetch_function__PBJointCommand__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__get_const_function__PBJointCommand__name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__assign_function__PBJointCommand__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__get_function__PBJointCommand__name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__resize_function__PBJointCommand__name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__size_function__PBJointCommand__command(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__get_const_function__PBJointCommand__command(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__get_function__PBJointCommand__command(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__fetch_function__PBJointCommand__command(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__get_const_function__PBJointCommand__command(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__assign_function__PBJointCommand__command(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__get_function__PBJointCommand__command(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__resize_function__PBJointCommand__command(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__PBJointCommand_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(parallelbot_interfaces__msg__PBJointCommand, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(parallelbot_interfaces__msg__PBJointCommand, name),  // bytes offset in struct
    NULL,  // default value
    parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__size_function__PBJointCommand__name,  // size() function pointer
    parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__get_const_function__PBJointCommand__name,  // get_const(index) function pointer
    parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__get_function__PBJointCommand__name,  // get(index) function pointer
    parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__fetch_function__PBJointCommand__name,  // fetch(index, &value) function pointer
    parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__assign_function__PBJointCommand__name,  // assign(index, value) function pointer
    parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__resize_function__PBJointCommand__name  // resize(index) function pointer
  },
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(parallelbot_interfaces__msg__PBJointCommand, command),  // bytes offset in struct
    NULL,  // default value
    parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__size_function__PBJointCommand__command,  // size() function pointer
    parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__get_const_function__PBJointCommand__command,  // get_const(index) function pointer
    parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__get_function__PBJointCommand__command,  // get(index) function pointer
    parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__fetch_function__PBJointCommand__command,  // fetch(index, &value) function pointer
    parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__assign_function__PBJointCommand__command,  // assign(index, value) function pointer
    parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__resize_function__PBJointCommand__command  // resize(index) function pointer
  },
  {
    "enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(parallelbot_interfaces__msg__PBJointCommand, enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__PBJointCommand_message_members = {
  "parallelbot_interfaces__msg",  // message namespace
  "PBJointCommand",  // message name
  4,  // number of fields
  sizeof(parallelbot_interfaces__msg__PBJointCommand),
  false,  // has_any_key_member_
  parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__PBJointCommand_message_member_array,  // message members
  parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__PBJointCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__PBJointCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__PBJointCommand_message_type_support_handle = {
  0,
  &parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__PBJointCommand_message_members,
  get_message_typesupport_handle_function,
  &parallelbot_interfaces__msg__PBJointCommand__get_type_hash,
  &parallelbot_interfaces__msg__PBJointCommand__get_type_description,
  &parallelbot_interfaces__msg__PBJointCommand__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_parallelbot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, parallelbot_interfaces, msg, PBJointCommand)() {
  parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__PBJointCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__PBJointCommand_message_type_support_handle.typesupport_identifier) {
    parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__PBJointCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &parallelbot_interfaces__msg__PBJointCommand__rosidl_typesupport_introspection_c__PBJointCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
