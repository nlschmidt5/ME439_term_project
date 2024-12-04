// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from parallelbot_interfaces:msg/PBEndpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "parallelbot_interfaces/msg/pb_endpoint.h"


#ifndef PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__STRUCT_H_
#define PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'xy'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PBEndpoint in the package parallelbot_interfaces.
typedef struct parallelbot_interfaces__msg__PBEndpoint
{
  rosidl_runtime_c__float__Sequence xy;
} parallelbot_interfaces__msg__PBEndpoint;

// Struct for a sequence of parallelbot_interfaces__msg__PBEndpoint.
typedef struct parallelbot_interfaces__msg__PBEndpoint__Sequence
{
  parallelbot_interfaces__msg__PBEndpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} parallelbot_interfaces__msg__PBEndpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__STRUCT_H_
