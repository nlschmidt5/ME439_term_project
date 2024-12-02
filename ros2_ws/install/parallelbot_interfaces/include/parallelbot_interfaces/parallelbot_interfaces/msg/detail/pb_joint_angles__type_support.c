// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from parallelbot_interfaces:msg/PBJointAngles.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "parallelbot_interfaces/msg/detail/pb_joint_angles__rosidl_typesupport_introspection_c.h"
#include "parallelbot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "parallelbot_interfaces/msg/detail/pb_joint_angles__functions.h"
#include "parallelbot_interfaces/msg/detail/pb_joint_angles__struct.h"


// Include directives for member types
// Member `th1`
// Member `th2`
// Member `th3`
// Member `th4`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__PBJointAngles_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  parallelbot_interfaces__msg__PBJointAngles__init(message_memory);
}

void parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__PBJointAngles_fini_function(void * message_memory)
{
  parallelbot_interfaces__msg__PBJointAngles__fini(message_memory);
}

size_t parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__size_function__PBJointAngles__th1(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_const_function__PBJointAngles__th1(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_function__PBJointAngles__th1(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__fetch_function__PBJointAngles__th1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_const_function__PBJointAngles__th1(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__assign_function__PBJointAngles__th1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_function__PBJointAngles__th1(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__resize_function__PBJointAngles__th1(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__size_function__PBJointAngles__th2(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_const_function__PBJointAngles__th2(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_function__PBJointAngles__th2(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__fetch_function__PBJointAngles__th2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_const_function__PBJointAngles__th2(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__assign_function__PBJointAngles__th2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_function__PBJointAngles__th2(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__resize_function__PBJointAngles__th2(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__size_function__PBJointAngles__th3(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_const_function__PBJointAngles__th3(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_function__PBJointAngles__th3(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__fetch_function__PBJointAngles__th3(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_const_function__PBJointAngles__th3(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__assign_function__PBJointAngles__th3(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_function__PBJointAngles__th3(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__resize_function__PBJointAngles__th3(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__size_function__PBJointAngles__th4(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_const_function__PBJointAngles__th4(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_function__PBJointAngles__th4(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__fetch_function__PBJointAngles__th4(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_const_function__PBJointAngles__th4(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__assign_function__PBJointAngles__th4(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_function__PBJointAngles__th4(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__resize_function__PBJointAngles__th4(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__PBJointAngles_message_member_array[4] = {
  {
    "th1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(parallelbot_interfaces__msg__PBJointAngles, th1),  // bytes offset in struct
    NULL,  // default value
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__size_function__PBJointAngles__th1,  // size() function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_const_function__PBJointAngles__th1,  // get_const(index) function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_function__PBJointAngles__th1,  // get(index) function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__fetch_function__PBJointAngles__th1,  // fetch(index, &value) function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__assign_function__PBJointAngles__th1,  // assign(index, value) function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__resize_function__PBJointAngles__th1  // resize(index) function pointer
  },
  {
    "th2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(parallelbot_interfaces__msg__PBJointAngles, th2),  // bytes offset in struct
    NULL,  // default value
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__size_function__PBJointAngles__th2,  // size() function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_const_function__PBJointAngles__th2,  // get_const(index) function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_function__PBJointAngles__th2,  // get(index) function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__fetch_function__PBJointAngles__th2,  // fetch(index, &value) function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__assign_function__PBJointAngles__th2,  // assign(index, value) function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__resize_function__PBJointAngles__th2  // resize(index) function pointer
  },
  {
    "th3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(parallelbot_interfaces__msg__PBJointAngles, th3),  // bytes offset in struct
    NULL,  // default value
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__size_function__PBJointAngles__th3,  // size() function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_const_function__PBJointAngles__th3,  // get_const(index) function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_function__PBJointAngles__th3,  // get(index) function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__fetch_function__PBJointAngles__th3,  // fetch(index, &value) function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__assign_function__PBJointAngles__th3,  // assign(index, value) function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__resize_function__PBJointAngles__th3  // resize(index) function pointer
  },
  {
    "th4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(parallelbot_interfaces__msg__PBJointAngles, th4),  // bytes offset in struct
    NULL,  // default value
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__size_function__PBJointAngles__th4,  // size() function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_const_function__PBJointAngles__th4,  // get_const(index) function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__get_function__PBJointAngles__th4,  // get(index) function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__fetch_function__PBJointAngles__th4,  // fetch(index, &value) function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__assign_function__PBJointAngles__th4,  // assign(index, value) function pointer
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__resize_function__PBJointAngles__th4  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__PBJointAngles_message_members = {
  "parallelbot_interfaces__msg",  // message namespace
  "PBJointAngles",  // message name
  4,  // number of fields
  sizeof(parallelbot_interfaces__msg__PBJointAngles),
  false,  // has_any_key_member_
  parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__PBJointAngles_message_member_array,  // message members
  parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__PBJointAngles_init_function,  // function to initialize message memory (memory has to be allocated)
  parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__PBJointAngles_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__PBJointAngles_message_type_support_handle = {
  0,
  &parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__PBJointAngles_message_members,
  get_message_typesupport_handle_function,
  &parallelbot_interfaces__msg__PBJointAngles__get_type_hash,
  &parallelbot_interfaces__msg__PBJointAngles__get_type_description,
  &parallelbot_interfaces__msg__PBJointAngles__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_parallelbot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, parallelbot_interfaces, msg, PBJointAngles)() {
  if (!parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__PBJointAngles_message_type_support_handle.typesupport_identifier) {
    parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__PBJointAngles_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &parallelbot_interfaces__msg__PBJointAngles__rosidl_typesupport_introspection_c__PBJointAngles_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
