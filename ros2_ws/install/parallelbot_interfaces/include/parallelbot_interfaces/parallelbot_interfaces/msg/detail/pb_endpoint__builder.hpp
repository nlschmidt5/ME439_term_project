// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from parallelbot_interfaces:msg/PBEndpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "parallelbot_interfaces/msg/pb_endpoint.hpp"


#ifndef PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__BUILDER_HPP_
#define PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "parallelbot_interfaces/msg/detail/pb_endpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace parallelbot_interfaces
{

namespace msg
{

namespace builder
{

class Init_PBEndpoint_xy
{
public:
  Init_PBEndpoint_xy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::parallelbot_interfaces::msg::PBEndpoint xy(::parallelbot_interfaces::msg::PBEndpoint::_xy_type arg)
  {
    msg_.xy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::parallelbot_interfaces::msg::PBEndpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::parallelbot_interfaces::msg::PBEndpoint>()
{
  return parallelbot_interfaces::msg::builder::Init_PBEndpoint_xy();
}

}  // namespace parallelbot_interfaces

#endif  // PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__BUILDER_HPP_
