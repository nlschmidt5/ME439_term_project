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
    if (msg.th1.size() == 0) {
      out << "th1: []";
    } else {
      out << "th1: [";
      size_t pending_items = msg.th1.size();
      for (auto item : msg.th1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: th2
  {
    if (msg.th2.size() == 0) {
      out << "th2: []";
    } else {
      out << "th2: [";
      size_t pending_items = msg.th2.size();
      for (auto item : msg.th2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: th3
  {
    if (msg.th3.size() == 0) {
      out << "th3: []";
    } else {
      out << "th3: [";
      size_t pending_items = msg.th3.size();
      for (auto item : msg.th3) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: th4
  {
    if (msg.th4.size() == 0) {
      out << "th4: []";
    } else {
      out << "th4: [";
      size_t pending_items = msg.th4.size();
      for (auto item : msg.th4) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
    if (msg.th1.size() == 0) {
      out << "th1: []\n";
    } else {
      out << "th1:\n";
      for (auto item : msg.th1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: th2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.th2.size() == 0) {
      out << "th2: []\n";
    } else {
      out << "th2:\n";
      for (auto item : msg.th2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: th3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.th3.size() == 0) {
      out << "th3: []\n";
    } else {
      out << "th3:\n";
      for (auto item : msg.th3) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: th4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.th4.size() == 0) {
      out << "th4: []\n";
    } else {
      out << "th4:\n";
      for (auto item : msg.th4) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<parallelbot_interfaces::msg::PBJointAngles>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<parallelbot_interfaces::msg::PBJointAngles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_ANGLES__TRAITS_HPP_
