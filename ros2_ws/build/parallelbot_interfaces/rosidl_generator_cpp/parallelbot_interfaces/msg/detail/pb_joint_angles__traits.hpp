// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from parallelbot_interfaces:msg/PBJointAngles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "parallelbot_interfaces/msg/pb_joint_angles.hpp"


#ifndef PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_ANGLES__TRAITS_HPP_
#define PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_ANGLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "parallelbot_interfaces/msg/detail/pb_joint_angles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace parallelbot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PBJointAngles & msg,
  std::ostream & out)
{
  out << "{";
  // member: th1
  {
    out << "th1: ";
    rosidl_generator_traits::value_to_yaml(msg.th1, out);
    out << ", ";
  }

  // member: th2
  {
    out << "th2: ";
    rosidl_generator_traits::value_to_yaml(msg.th2, out);
    out << ", ";
  }

  // member: th3
  {
    out << "th3: ";
    rosidl_generator_traits::value_to_yaml(msg.th3, out);
    out << ", ";
  }

  // member: th4
  {
    out << "th4: ";
    rosidl_generator_traits::value_to_yaml(msg.th4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PBJointAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: th1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "th1: ";
    rosidl_generator_traits::value_to_yaml(msg.th1, out);
    out << "\n";
  }

  // member: th2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "th2: ";
    rosidl_generator_traits::value_to_yaml(msg.th2, out);
    out << "\n";
  }

  // member: th3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "th3: ";
    rosidl_generator_traits::value_to_yaml(msg.th3, out);
    out << "\n";
  }

  // member: th4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "th4: ";
    rosidl_generator_traits::value_to_yaml(msg.th4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PBJointAngles & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace parallelbot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use parallelbot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const parallelbot_interfaces::msg::PBJointAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  parallelbot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use parallelbot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const parallelbot_interfaces::msg::PBJointAngles & msg)
{
  return parallelbot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<parallelbot_interfaces::msg::PBJointAngles>()
{
  return "parallelbot_interfaces::msg::PBJointAngles";
}

template<>
inline const char * name<parallelbot_interfaces::msg::PBJointAngles>()
{
  return "parallelbot_interfaces/msg/PBJointAngles";
}

template<>
struct has_fixed_size<parallelbot_interfaces::msg::PBJointAngles>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<parallelbot_interfaces::msg::PBJointAngles>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<parallelbot_interfaces::msg::PBJointAngles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_ANGLES__TRAITS_HPP_
