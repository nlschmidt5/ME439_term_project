// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from parallelbot_interfaces:msg/PBEndpoint.idl
// generated code does not contain a copyright notice
#ifndef PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "parallelbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "parallelbot_interfaces/msg/detail/pb_endpoint__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
bool cdr_serialize_parallelbot_interfaces__msg__PBEndpoint(
  const parallelbot_interfaces__msg__PBEndpoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
bool cdr_deserialize_parallelbot_interfaces__msg__PBEndpoint(
  eprosima::fastcdr::Cdr &,
  parallelbot_interfaces__msg__PBEndpoint * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
size_t get_serialized_size_parallelbot_interfaces__msg__PBEndpoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
size_t max_serialized_size_parallelbot_interfaces__msg__PBEndpoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
bool cdr_serialize_key_parallelbot_interfaces__msg__PBEndpoint(
  const parallelbot_interfaces__msg__PBEndpoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
size_t get_serialized_size_key_parallelbot_interfaces__msg__PBEndpoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
size_t max_serialized_size_key_parallelbot_interfaces__msg__PBEndpoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, parallelbot_interfaces, msg, PBEndpoint)();

#ifdef __cplusplus
}
#endif

#endif  // PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
