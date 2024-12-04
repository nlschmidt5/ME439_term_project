// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from parallelbot_interfaces:msg/PBEndpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "parallelbot_interfaces/msg/pb_endpoint.hpp"


#ifndef PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__TRAITS_HPP_
#define PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "parallelbot_interfaces/msg/detail/pb_endpoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace parallelbot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PBEndpoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: xy
  {
    if (msg.xy.size() == 0) {
      out << "xy: []";
    } else {
      out << "xy: [";
      size_t pending_items = msg.xy.size();
      for (auto item : msg.xy) {
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
  const PBEndpoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: xy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.xy.size() == 0) {
      out << "xy: []\n";
    } else {
      out << "xy:\n";
      for (auto item : msg.xy) {
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

inline std::string to_yaml(const PBEndpoint & msg, bool use_flow_style = false)
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
  const parallelbot_interfaces::msg::PBEndpoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  parallelbot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use parallelbot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const parallelbot_interfaces::msg::PBEndpoint & msg)
{
  return parallelbot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<parallelbot_interfaces::msg::PBEndpoint>()
{
  return "parallelbot_interfaces::msg::PBEndpoint";
}

template<>
inline const char * name<parallelbot_interfaces::msg::PBEndpoint>()
{
  return "parallelbot_interfaces/msg/PBEndpoint";
}

template<>
struct has_fixed_size<parallelbot_interfaces::msg::PBEndpoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<parallelbot_interfaces::msg::PBEndpoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<parallelbot_interfaces::msg::PBEndpoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__TRAITS_HPP_
