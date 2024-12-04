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

/// Struct defined in msg/PBJointAngles in the package parallelbot_interfaces.
typedef struct parallelbot_interfaces__msg__PBJointAngles
{
  float th1;
  float th2;
  float th3;
  float th4;
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
