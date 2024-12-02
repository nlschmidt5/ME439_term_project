// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from parallelbot_interfaces:msg/PBJointAngles.idl
// generated code does not contain a copyright notice
#include "parallelbot_interfaces/msg/detail/pb_joint_angles__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "parallelbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "parallelbot_interfaces/msg/detail/pb_joint_angles__struct.h"
#include "parallelbot_interfaces/msg/detail/pb_joint_angles__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // th1, th2, th3, th4
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // th1, th2, th3, th4

// forward declare type support functions


using _PBJointAngles__ros_msg_type = parallelbot_interfaces__msg__PBJointAngles;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
bool cdr_serialize_parallelbot_interfaces__msg__PBJointAngles(
  const parallelbot_interfaces__msg__PBJointAngles * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: th1
  {
    size_t size = ros_message->th1.size;
    auto array_ptr = ros_message->th1.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: th2
  {
    size_t size = ros_message->th2.size;
    auto array_ptr = ros_message->th2.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: th3
  {
    size_t size = ros_message->th3.size;
    auto array_ptr = ros_message->th3.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: th4
  {
    size_t size = ros_message->th4.size;
    auto array_ptr = ros_message->th4.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
bool cdr_deserialize_parallelbot_interfaces__msg__PBJointAngles(
  eprosima::fastcdr::Cdr & cdr,
  parallelbot_interfaces__msg__PBJointAngles * ros_message)
{
  // Field name: th1
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->th1.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->th1);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->th1, size)) {
      fprintf(stderr, "failed to create array for field 'th1'");
      return false;
    }
    auto array_ptr = ros_message->th1.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: th2
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->th2.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->th2);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->th2, size)) {
      fprintf(stderr, "failed to create array for field 'th2'");
      return false;
    }
    auto array_ptr = ros_message->th2.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: th3
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->th3.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->th3);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->th3, size)) {
      fprintf(stderr, "failed to create array for field 'th3'");
      return false;
    }
    auto array_ptr = ros_message->th3.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: th4
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->th4.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->th4);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->th4, size)) {
      fprintf(stderr, "failed to create array for field 'th4'");
      return false;
    }
    auto array_ptr = ros_message->th4.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
size_t get_serialized_size_parallelbot_interfaces__msg__PBJointAngles(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PBJointAngles__ros_msg_type * ros_message = static_cast<const _PBJointAngles__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: th1
  {
    size_t array_size = ros_message->th1.size;
    auto array_ptr = ros_message->th1.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: th2
  {
    size_t array_size = ros_message->th2.size;
    auto array_ptr = ros_message->th2.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: th3
  {
    size_t array_size = ros_message->th3.size;
    auto array_ptr = ros_message->th3.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: th4
  {
    size_t array_size = ros_message->th4.size;
    auto array_ptr = ros_message->th4.data;
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
size_t max_serialized_size_parallelbot_interfaces__msg__PBJointAngles(
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

  // Field name: th1
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

  // Field name: th2
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

  // Field name: th3
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

  // Field name: th4
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
    using DataType = parallelbot_interfaces__msg__PBJointAngles;
    is_plain =
      (
      offsetof(DataType, th4) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
bool cdr_serialize_key_parallelbot_interfaces__msg__PBJointAngles(
  const parallelbot_interfaces__msg__PBJointAngles * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: th1
  {
    size_t size = ros_message->th1.size;
    auto array_ptr = ros_message->th1.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: th2
  {
    size_t size = ros_message->th2.size;
    auto array_ptr = ros_message->th2.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: th3
  {
    size_t size = ros_message->th3.size;
    auto array_ptr = ros_message->th3.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: th4
  {
    size_t size = ros_message->th4.size;
    auto array_ptr = ros_message->th4.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_parallelbot_interfaces
size_t get_serialized_size_key_parallelbot_interfaces__msg__PBJointAngles(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PBJointAngles__ros_msg_type * ros_message = static_cast<const _PBJointAngles__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: th1
  {
    size_t array_size = ros_message->th1.size;
    auto array_ptr = ros_message->th1.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: th2
  {
    size_t array_size = ros_message->th2.size;
    auto array_ptr = ros_message->th2.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: th3
  {
    size_t array_size = ros_message->th3.size;
    auto array_ptr = ros_message->th3.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: th4
  {
    size_t array_size = ros_message->th4.size;
    auto array_ptr = ros_message->th4.data;
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
size_t max_serialized_size_key_parallelbot_interfaces__msg__PBJointAngles(
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
  // Field name: th1
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

  // Field name: th2
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

  // Field name: th3
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

  // Field name: th4
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
    using DataType = parallelbot_interfaces__msg__PBJointAngles;
    is_plain =
      (
      offsetof(DataType, th4) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PBJointAngles__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const parallelbot_interfaces__msg__PBJointAngles * ros_message = static_cast<const parallelbot_interfaces__msg__PBJointAngles *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_parallelbot_interfaces__msg__PBJointAngles(ros_message, cdr);
}

static bool _PBJointAngles__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  parallelbot_interfaces__msg__PBJointAngles * ros_message = static_cast<parallelbot_interfaces__msg__PBJointAngles *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_parallelbot_interfaces__msg__PBJointAngles(cdr, ros_message);
}

static uint32_t _PBJointAngles__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_parallelbot_interfaces__msg__PBJointAngles(
      untyped_ros_message, 0));
}

static size_t _PBJointAngles__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_parallelbot_interfaces__msg__PBJointAngles(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PBJointAngles = {
  "parallelbot_interfaces::msg",
  "PBJointAngles",
  _PBJointAngles__cdr_serialize,
  _PBJointAngles__cdr_deserialize,
  _PBJointAngles__get_serialized_size,
  _PBJointAngles__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PBJointAngles__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PBJointAngles,
  get_message_typesupport_handle_function,
  &parallelbot_interfaces__msg__PBJointAngles__get_type_hash,
  &parallelbot_interfaces__msg__PBJointAngles__get_type_description,
  &parallelbot_interfaces__msg__PBJointAngles__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, parallelbot_interfaces, msg, PBJointAngles)() {
  return &_PBJointAngles__type_support;
}

#if defined(__cplusplus)
}
#endif
