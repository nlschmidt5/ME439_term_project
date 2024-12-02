// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from parallelbot_interfaces:msg/PBJointCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "parallelbot_interfaces/msg/pb_joint_command.hpp"


#ifndef PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_COMMAND__BUILDER_HPP_
#define PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "parallelbot_interfaces/msg/detail/pb_joint_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace parallelbot_interfaces
{

namespace msg
{

namespace builder
{

class Init_PBJointCommand_enable
{
public:
  explicit Init_PBJointCommand_enable(::parallelbot_interfaces::msg::PBJointCommand & msg)
  : msg_(msg)
  {}
  ::parallelbot_interfaces::msg::PBJointCommand enable(::parallelbot_interfaces::msg::PBJointCommand::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::parallelbot_interfaces::msg::PBJointCommand msg_;
};

class Init_PBJointCommand_command
{
public:
  explicit Init_PBJointCommand_command(::parallelbot_interfaces::msg::PBJointCommand & msg)
  : msg_(msg)
  {}
  Init_PBJointCommand_enable command(::parallelbot_interfaces::msg::PBJointCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_PBJointCommand_enable(msg_);
  }

private:
  ::parallelbot_interfaces::msg::PBJointCommand msg_;
};

class Init_PBJointCommand_name
{
public:
  explicit Init_PBJointCommand_name(::parallelbot_interfaces::msg::PBJointCommand & msg)
  : msg_(msg)
  {}
  Init_PBJointCommand_command name(::parallelbot_interfaces::msg::PBJointCommand::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_PBJointCommand_command(msg_);
  }

private:
  ::parallelbot_interfaces::msg::PBJointCommand msg_;
};

class Init_PBJointCommand_header
{
public:
  Init_PBJointCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PBJointCommand_name header(::parallelbot_interfaces::msg::PBJointCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PBJointCommand_name(msg_);
  }

private:
  ::parallelbot_interfaces::msg::PBJointCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::parallelbot_interfaces::msg::PBJointCommand>()
{
  return parallelbot_interfaces::msg::builder::Init_PBJointCommand_header();
}

}  // namespace parallelbot_interfaces

#endif  // PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_COMMAND__BUILDER_HPP_
