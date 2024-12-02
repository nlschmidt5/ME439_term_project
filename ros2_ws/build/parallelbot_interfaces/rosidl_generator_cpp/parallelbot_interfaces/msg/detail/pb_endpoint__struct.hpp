// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from parallelbot_interfaces:msg/PBEndpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "parallelbot_interfaces/msg/pb_endpoint.hpp"


#ifndef PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__STRUCT_HPP_
#define PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__parallelbot_interfaces__msg__PBEndpoint __attribute__((deprecated))
#else
# define DEPRECATED__parallelbot_interfaces__msg__PBEndpoint __declspec(deprecated)
#endif

namespace parallelbot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PBEndpoint_
{
  using Type = PBEndpoint_<ContainerAllocator>;

  explicit PBEndpoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 2>::iterator, float>(this->xy.begin(), this->xy.end(), 0.0f);
    }
  }

  explicit PBEndpoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : xy(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 2>::iterator, float>(this->xy.begin(), this->xy.end(), 0.0f);
    }
  }

  // field types and members
  using _xy_type =
    std::array<float, 2>;
  _xy_type xy;

  // setters for named parameter idiom
  Type & set__xy(
    const std::array<float, 2> & _arg)
  {
    this->xy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    parallelbot_interfaces::msg::PBEndpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const parallelbot_interfaces::msg::PBEndpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<parallelbot_interfaces::msg::PBEndpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<parallelbot_interfaces::msg::PBEndpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      parallelbot_interfaces::msg::PBEndpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<parallelbot_interfaces::msg::PBEndpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      parallelbot_interfaces::msg::PBEndpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<parallelbot_interfaces::msg::PBEndpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<parallelbot_interfaces::msg::PBEndpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<parallelbot_interfaces::msg::PBEndpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__parallelbot_interfaces__msg__PBEndpoint
    std::shared_ptr<parallelbot_interfaces::msg::PBEndpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__parallelbot_interfaces__msg__PBEndpoint
    std::shared_ptr<parallelbot_interfaces::msg::PBEndpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PBEndpoint_ & other) const
  {
    if (this->xy != other.xy) {
      return false;
    }
    return true;
  }
  bool operator!=(const PBEndpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PBEndpoint_

// alias to use template instance with default allocator
using PBEndpoint =
  parallelbot_interfaces::msg::PBEndpoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace parallelbot_interfaces

#endif  // PARALLELBOT_INTERFACES__MSG__DETAIL__PB_ENDPOINT__STRUCT_HPP_
