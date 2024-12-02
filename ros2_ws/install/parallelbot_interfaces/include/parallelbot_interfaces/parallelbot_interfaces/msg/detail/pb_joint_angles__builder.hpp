// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from parallelbot_interfaces:msg/PBJointAngles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "parallelbot_interfaces/msg/pb_joint_angles.hpp"


#ifndef PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_ANGLES__BUILDER_HPP_
#define PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_ANGLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "parallelbot_interfaces/msg/detail/pb_joint_angles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace parallelbot_interfaces
{

namespace msg
{

namespace builder
{

class Init_PBJointAngles_th4
{
public:
  explicit Init_PBJointAngles_th4(::parallelbot_interfaces::msg::PBJointAngles & msg)
  : msg_(msg)
  {}
  ::parallelbot_interfaces::msg::PBJointAngles th4(::parallelbot_interfaces::msg::PBJointAngles::_th4_type arg)
  {
    msg_.th4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::parallelbot_interfaces::msg::PBJointAngles msg_;
};

class Init_PBJointAngles_th3
{
public:
  explicit Init_PBJointAngles_th3(::parallelbot_interfaces::msg::PBJointAngles & msg)
  : msg_(msg)
  {}
  Init_PBJointAngles_th4 th3(::parallelbot_interfaces::msg::PBJointAngles::_th3_type arg)
  {
    msg_.th3 = std::move(arg);
    return Init_PBJointAngles_th4(msg_);
  }

private:
  ::parallelbot_interfaces::msg::PBJointAngles msg_;
};

class Init_PBJointAngles_th2
{
public:
  explicit Init_PBJointAngles_th2(::parallelbot_interfaces::msg::PBJointAngles & msg)
  : msg_(msg)
  {}
  Init_PBJointAngles_th3 th2(::parallelbot_interfaces::msg::PBJointAngles::_th2_type arg)
  {
    msg_.th2 = std::move(arg);
    return Init_PBJointAngles_th3(msg_);
  }

private:
  ::parallelbot_interfaces::msg::PBJointAngles msg_;
};

class Init_PBJointAngles_th1
{
public:
  Init_PBJointAngles_th1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PBJointAngles_th2 th1(::parallelbot_interfaces::msg::PBJointAngles::_th1_type arg)
  {
    msg_.th1 = std::move(arg);
    return Init_PBJointAngles_th2(msg_);
  }

private:
  ::parallelbot_interfaces::msg::PBJointAngles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::parallelbot_interfaces::msg::PBJointAngles>()
{
  return parallelbot_interfaces::msg::builder::Init_PBJointAngles_th1();
}

}  // namespace parallelbot_interfaces

#endif  // PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_ANGLES__BUILDER_HPP_
