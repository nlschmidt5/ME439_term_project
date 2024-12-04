// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from parallelbot_interfaces:msg/PBEndpoint.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "parallelbot_interfaces/msg/detail/pb_endpoint__functions.h"
#include "parallelbot_interfaces/msg/detail/pb_endpoint__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace parallelbot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PBEndpoint_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) parallelbot_interfaces::msg::PBEndpoint(_init);
}

void PBEndpoint_fini_function(void * message_memory)
{
  auto typed_message = static_cast<parallelbot_interfaces::msg::PBEndpoint *>(message_memory);
  typed_message->~PBEndpoint();
}

size_t size_function__PBEndpoint__xy(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PBEndpoint__xy(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__PBEndpoint__xy(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__PBEndpoint__xy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__PBEndpoint__xy(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__PBEndpoint__xy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__PBEndpoint__xy(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__PBEndpoint__xy(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PBEndpoint_message_member_array[1] = {
  {
    "xy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(parallelbot_interfaces::msg::PBEndpoint, xy),  // bytes offset in struct
    nullptr,  // default value
    size_function__PBEndpoint__xy,  // size() function pointer
    get_const_function__PBEndpoint__xy,  // get_const(index) function pointer
    get_function__PBEndpoint__xy,  // get(index) function pointer
    fetch_function__PBEndpoint__xy,  // fetch(index, &value) function pointer
    assign_function__PBEndpoint__xy,  // assign(index, value) function pointer
    resize_function__PBEndpoint__xy  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PBEndpoint_message_members = {
  "parallelbot_interfaces::msg",  // message namespace
  "PBEndpoint",  // message name
  1,  // number of fields
  sizeof(parallelbot_interfaces::msg::PBEndpoint),
  false,  // has_any_key_member_
  PBEndpoint_message_member_array,  // message members
  PBEndpoint_init_function,  // function to initialize message memory (memory has to be allocated)
  PBEndpoint_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PBEndpoint_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PBEndpoint_message_members,
  get_message_typesupport_handle_function,
  &parallelbot_interfaces__msg__PBEndpoint__get_type_hash,
  &parallelbot_interfaces__msg__PBEndpoint__get_type_description,
  &parallelbot_interfaces__msg__PBEndpoint__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace parallelbot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<parallelbot_interfaces::msg::PBEndpoint>()
{
  return &::parallelbot_interfaces::msg::rosidl_typesupport_introspection_cpp::PBEndpoint_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, parallelbot_interfaces, msg, PBEndpoint)() {
  return &::parallelbot_interfaces::msg::rosidl_typesupport_introspection_cpp::PBEndpoint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
