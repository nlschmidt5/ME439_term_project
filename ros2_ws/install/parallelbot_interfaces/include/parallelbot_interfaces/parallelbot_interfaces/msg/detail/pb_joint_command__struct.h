// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from parallelbot_interfaces:msg/PBJointCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "parallelbot_interfaces/msg/pb_joint_command.h"


#ifndef PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_COMMAND__STRUCT_H_
#define PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'command'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PBJointCommand in the package parallelbot_interfaces.
/**
  * This is a message that holds data to describe the commands to a set of bus servo joints.
  *
  * Each joint is uniquely identified by its name.
  * The header specifies the time at which the commands were recorded. All the commands
  * in one message have to be recorded at the same time.
  *
  * The command of each joint (revolute or prismatic) is defined by:
  * the command of the joint (int, 0 to 1000),
  *
  * The message has a boolean to determine whether it is enabled or not. 
  *
  * Match the order of the names and the commands to uniquely associate the joint
  * names with the correct commands.
 */
typedef struct parallelbot_interfaces__msg__PBJointCommand
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence name;
  rosidl_runtime_c__int16__Sequence command;
  bool enable;
} parallelbot_interfaces__msg__PBJointCommand;

// Struct for a sequence of parallelbot_interfaces__msg__PBJointCommand.
typedef struct parallelbot_interfaces__msg__PBJointCommand__Sequence
{
  parallelbot_interfaces__msg__PBJointCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} parallelbot_interfaces__msg__PBJointCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_COMMAND__STRUCT_H_
