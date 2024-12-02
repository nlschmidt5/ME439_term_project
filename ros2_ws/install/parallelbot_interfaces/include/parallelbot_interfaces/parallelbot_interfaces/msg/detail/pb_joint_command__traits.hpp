// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from parallelbot_interfaces:msg/PBJointCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "parallelbot_interfaces/msg/pb_joint_command.hpp"


#ifndef PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_COMMAND__TRAITS_HPP_
#define PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "parallelbot_interfaces/msg/detail/pb_joint_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace parallelbot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PBJointCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: name
  {
    if (msg.name.size() == 0) {
      out << "name: []";
    } else {
      out << "name: [";
      size_t pending_items = msg.name.size();
      for (auto item : msg.name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: command
  {
    if (msg.command.size() == 0) {
      out << "command: []";
    } else {
      out << "command: [";
      size_t pending_items = msg.command.size();
      for (auto item : msg.command) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PBJointCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.name.size() == 0) {
      out << "name: []\n";
    } else {
      out << "name:\n";
      for (auto item : msg.name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.command.size() == 0) {
      out << "command: []\n";
    } else {
      out << "command:\n";
      for (auto item : msg.command) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PBJointCommand & msg, bool use_flow_style = false)
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
  const parallelbot_interfaces::msg::PBJointCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  parallelbot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use parallelbot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const parallelbot_interfaces::msg::PBJointCommand & msg)
{
  return parallelbot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<parallelbot_interfaces::msg::PBJointCommand>()
{
  return "parallelbot_interfaces::msg::PBJointCommand";
}

template<>
inline const char * name<parallelbot_interfaces::msg::PBJointCommand>()
{
  return "parallelbot_interfaces/msg/PBJointCommand";
}

template<>
struct has_fixed_size<parallelbot_interfaces::msg::PBJointCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<parallelbot_interfaces::msg::PBJointCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<parallelbot_interfaces::msg::PBJointCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_COMMAND__TRAITS_HPP_
