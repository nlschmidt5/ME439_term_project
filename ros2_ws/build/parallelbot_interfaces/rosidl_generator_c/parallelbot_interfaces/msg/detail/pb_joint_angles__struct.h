// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from parallelbot_interfaces:msg/PBJointAngles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "parallelbot_interfaces/msg/pb_joint_angles.h"


#ifndef PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_ANGLES__STRUCT_H_
#define PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_ANGLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'th1'
// Member 'th2'
// Member 'th3'
// Member 'th4'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PBJointAngles in the package parallelbot_interfaces.
typedef struct parallelbot_interfaces__msg__PBJointAngles
{
  rosidl_runtime_c__float__Sequence th1;
  rosidl_runtime_c__float__Sequence th2;
  rosidl_runtime_c__float__Sequence th3;
  rosidl_runtime_c__float__Sequence th4;
} parallelbot_interfaces__msg__PBJointAngles;

// Struct for a sequence of parallelbot_interfaces__msg__PBJointAngles.
typedef struct parallelbot_interfaces__msg__PBJointAngles__Sequence
{
  parallelbot_interfaces__msg__PBJointAngles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} parallelbot_interfaces__msg__PBJointAngles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_ANGLES__STRUCT_H_
