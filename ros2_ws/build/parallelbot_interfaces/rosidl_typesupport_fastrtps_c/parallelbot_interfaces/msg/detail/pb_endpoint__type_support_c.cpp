// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from parallelbot_interfaces:msg/PBEndpoint.idl
// generated code does not contain a copyright notice
#include "parallelbot_interfaces/msg/detail/pb_endpoint__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "parallelbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "parallelbot_interfaces/msg/detail/pb_endpoint__struct.h"
#include "parallelbot_interfaces/msg/detail/pb_endpoint__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // xy
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // xy

// forward declare type support functions


using _PBEndpoint__ros_msg_type = parallelbot_interfaces__msg__PBEndpoint;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
bool cdr_serialize_parallelbot_interfaces__msg__PBEndpoint(
  const parallelbot_interfaces__msg__PBEndpoint * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: xy
  {
    size_t size = ros_message->xy.size;
    auto array_ptr = ros_message->xy.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
bool cdr_deserialize_parallelbot_interfaces__msg__PBEndpoint(
  eprosima::fastcdr::Cdr & cdr,
  parallelbot_interfaces__msg__PBEndpoint * ros_message)
{
  // Field name: xy
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->xy.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->xy);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->xy, size)) {
      fprintf(stderr, "failed to create array for field 'xy'");
      return false;
    }
    auto array_ptr = ros_message->xy.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
size_t get_serialized_size_parallelbot_interfaces__msg__PBEndpoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PBEndpoint__ros_msg_type * ros_message = static_cast<const _PBEndpoint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: xy
  {
    size_t array_size = ros_message->xy.size;
    auto array_ptr = ros_message->xy.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
size_t max_serialized_size_parallelbot_interfaces__msg__PBEndpoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: xy
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = parallelbot_interfaces__msg__PBEndpoint;
    is_plain =
      (
      offsetof(DataType, xy) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
bool cdr_serialize_key_parallelbot_interfaces__msg__PBEndpoint(
  const parallelbot_interfaces__msg__PBEndpoint * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: xy
  {
    size_t size = ros_message->xy.size;
    auto array_ptr = ros_message->xy.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
size_t get_serialized_size_key_parallelbot_interfaces__msg__PBEndpoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PBEndpoint__ros_msg_type * ros_message = static_cast<const _PBEndpoint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: xy
  {
    size_t array_size = ros_message->xy.size;
    auto array_ptr = ros_message->xy.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
size_t max_serialized_size_key_parallelbot_interfaces__msg__PBEndpoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: xy
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = parallelbot_interfaces__msg__PBEndpoint;
    is_plain =
      (
      offsetof(DataType, xy) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PBEndpoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const parallelbot_interfaces__msg__PBEndpoint * ros_message = static_cast<const parallelbot_interfaces__msg__PBEndpoint *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_parallelbot_interfaces__msg__PBEndpoint(ros_message, cdr);
}

static bool _PBEndpoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  parallelbot_interfaces__msg__PBEndpoint * ros_message = static_cast<parallelbot_interfaces__msg__PBEndpoint *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_parallelbot_interfaces__msg__PBEndpoint(cdr, ros_message);
}

static uint32_t _PBEndpoint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_parallelbot_interfaces__msg__PBEndpoint(
      untyped_ros_message, 0));
}

static size_t _PBEndpoint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_parallelbot_interfaces__msg__PBEndpoint(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PBEndpoint = {
  "parallelbot_interfaces::msg",
  "PBEndpoint",
  _PBEndpoint__cdr_serialize,
  _PBEndpoint__cdr_deserialize,
  _PBEndpoint__get_serialized_size,
  _PBEndpoint__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PBEndpoint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PBEndpoint,
  get_message_typesupport_handle_function,
  &parallelbot_interfaces__msg__PBEndpoint__get_type_hash,
  &parallelbot_interfaces__msg__PBEndpoint__get_type_description,
  &parallelbot_interfaces__msg__PBEndpoint__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, parallelbot_interfaces, msg, PBEndpoint)() {
  return &_PBEndpoint__type_support;
}

#if defined(__cplusplus)
}
#endif
