// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from parallelbot_interfaces:msg/PBEndpoint.idl
// generated code does not contain a copyright notice
#include "parallelbot_interfaces/msg/detail/pb_endpoint__rosidl_typesupport_fastrtps_cpp.hpp"
#include "parallelbot_interfaces/msg/detail/pb_endpoint__functions.h"
#include "parallelbot_interfaces/msg/detail/pb_endpoint__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace parallelbot_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_parallelbot_interfaces
cdr_serialize(
  const parallelbot_interfaces::msg::PBEndpoint & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: xy
  {
    cdr << ros_message.xy;
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_parallelbot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  parallelbot_interfaces::msg::PBEndpoint & ros_message)
{
  // Member: xy
  {
    cdr >> ros_message.xy;
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_parallelbot_interfaces
get_serialized_size(
  const parallelbot_interfaces::msg::PBEndpoint & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: xy
  {
    size_t array_size = ros_message.xy.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.xy[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_parallelbot_interfaces
max_serialized_size_PBEndpoint(
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

  // Member: xy
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
    using DataType = parallelbot_interfaces::msg::PBEndpoint;
    is_plain =
      (
      offsetof(DataType, xy) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_parallelbot_interfaces
cdr_serialize_key(
  const parallelbot_interfaces::msg::PBEndpoint & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: xy
  {
    cdr << ros_message.xy;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_parallelbot_interfaces
get_serialized_size_key(
  const parallelbot_interfaces::msg::PBEndpoint & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: xy
  {
    size_t array_size = ros_message.xy.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.xy[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_parallelbot_interfaces
max_serialized_size_key_PBEndpoint(
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

  // Member: xy
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
    using DataType = parallelbot_interfaces::msg::PBEndpoint;
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
  auto typed_message =
    static_cast<const parallelbot_interfaces::msg::PBEndpoint *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PBEndpoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<parallelbot_interfaces::msg::PBEndpoint *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PBEndpoint__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const parallelbot_interfaces::msg::PBEndpoint *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PBEndpoint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PBEndpoint(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PBEndpoint__callbacks = {
  "parallelbot_interfaces::msg",
  "PBEndpoint",
  _PBEndpoint__cdr_serialize,
  _PBEndpoint__cdr_deserialize,
  _PBEndpoint__get_serialized_size,
  _PBEndpoint__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PBEndpoint__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PBEndpoint__callbacks,
  get_message_typesupport_handle_function,
  &parallelbot_interfaces__msg__PBEndpoint__get_type_hash,
  &parallelbot_interfaces__msg__PBEndpoint__get_type_description,
  &parallelbot_interfaces__msg__PBEndpoint__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace parallelbot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_parallelbot_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<parallelbot_interfaces::msg::PBEndpoint>()
{
  return &parallelbot_interfaces::msg::typesupport_fastrtps_cpp::_PBEndpoint__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, parallelbot_interfaces, msg, PBEndpoint)() {
  return &parallelbot_interfaces::msg::typesupport_fastrtps_cpp::_PBEndpoint__handle;
}

#ifdef __cplusplus
}
#endif
