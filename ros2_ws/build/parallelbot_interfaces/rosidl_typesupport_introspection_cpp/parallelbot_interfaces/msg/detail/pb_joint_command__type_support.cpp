// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from parallelbot_interfaces:msg/PBJointCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "parallelbot_interfaces/msg/detail/pb_joint_command__functions.h"
#include "parallelbot_interfaces/msg/detail/pb_joint_command__struct.hpp"
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

void PBJointCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) parallelbot_interfaces::msg::PBJointCommand(_init);
}

void PBJointCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<parallelbot_interfaces::msg::PBJointCommand *>(message_memory);
  typed_message->~PBJointCommand();
}

size_t size_function__PBJointCommand__name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PBJointCommand__name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__PBJointCommand__name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__PBJointCommand__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__PBJointCommand__name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__PBJointCommand__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__PBJointCommand__name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__PBJointCommand__name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PBJointCommand__command(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PBJointCommand__command(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PBJointCommand__command(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PBJointCommand__command(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__PBJointCommand__command(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__PBJointCommand__command(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__PBJointCommand__command(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__PBJointCommand__command(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PBJointCommand_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(parallelbot_interfaces::msg::PBJointCommand, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(parallelbot_interfaces::msg::PBJointCommand, name),  // bytes offset in struct
    nullptr,  // default value
    size_function__PBJointCommand__name,  // size() function pointer
    get_const_function__PBJointCommand__name,  // get_const(index) function pointer
    get_function__PBJointCommand__name,  // get(index) function pointer
    fetch_function__PBJointCommand__name,  // fetch(index, &value) function pointer
    assign_function__PBJointCommand__name,  // assign(index, value) function pointer
    resize_function__PBJointCommand__name  // resize(index) function pointer
  },
  {
    "command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(parallelbot_interfaces::msg::PBJointCommand, command),  // bytes offset in struct
    nullptr,  // default value
    size_function__PBJointCommand__command,  // size() function pointer
    get_const_function__PBJointCommand__command,  // get_const(index) function pointer
    get_function__PBJointCommand__command,  // get(index) function pointer
    fetch_function__PBJointCommand__command,  // fetch(index, &value) function pointer
    assign_function__PBJointCommand__command,  // assign(index, value) function pointer
    resize_function__PBJointCommand__command  // resize(index) function pointer
  },
  {
    "enable",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(parallelbot_interfaces::msg::PBJointCommand, enable),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PBJointCommand_message_members = {
  "parallelbot_interfaces::msg",  // message namespace
  "PBJointCommand",  // message name
  4,  // number of fields
  sizeof(parallelbot_interfaces::msg::PBJointCommand),
  false,  // has_any_key_member_
  PBJointCommand_message_member_array,  // message members
  PBJointCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  PBJointCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PBJointCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PBJointCommand_message_members,
  get_message_typesupport_handle_function,
  &parallelbot_interfaces__msg__PBJointCommand__get_type_hash,
  &parallelbot_interfaces__msg__PBJointCommand__get_type_description,
  &parallelbot_interfaces__msg__PBJointCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace parallelbot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<parallelbot_interfaces::msg::PBJointCommand>()
{
  return &::parallelbot_interfaces::msg::rosidl_typesupport_introspection_cpp::PBJointCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, parallelbot_interfaces, msg, PBJointCommand)() {
  return &::parallelbot_interfaces::msg::rosidl_typesupport_introspection_cpp::PBJointCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
