// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from parallelbot_interfaces:msg/PBJointAngles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "parallelbot_interfaces/msg/pb_joint_angles.hpp"


#ifndef PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_ANGLES__STRUCT_HPP_
#define PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_ANGLES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__parallelbot_interfaces__msg__PBJointAngles __attribute__((deprecated))
#else
# define DEPRECATED__parallelbot_interfaces__msg__PBJointAngles __declspec(deprecated)
#endif

namespace parallelbot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PBJointAngles_
{
  using Type = PBJointAngles_<ContainerAllocator>;

  explicit PBJointAngles_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->th1 = 0.0f;
      this->th2 = 0.0f;
      this->th3 = 0.0f;
      this->th4 = 0.0f;
    }
  }

  explicit PBJointAngles_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->th1 = 0.0f;
      this->th2 = 0.0f;
      this->th3 = 0.0f;
      this->th4 = 0.0f;
    }
  }

  // field types and members
  using _th1_type =
    float;
  _th1_type th1;
  using _th2_type =
    float;
  _th2_type th2;
  using _th3_type =
    float;
  _th3_type th3;
  using _th4_type =
    float;
  _th4_type th4;

  // setters for named parameter idiom
  Type & set__th1(
    const float & _arg)
  {
    this->th1 = _arg;
    return *this;
  }
  Type & set__th2(
    const float & _arg)
  {
    this->th2 = _arg;
    return *this;
  }
  Type & set__th3(
    const float & _arg)
  {
    this->th3 = _arg;
    return *this;
  }
  Type & set__th4(
    const float & _arg)
  {
    this->th4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    parallelbot_interfaces::msg::PBJointAngles_<ContainerAllocator> *;
  using ConstRawPtr =
    const parallelbot_interfaces::msg::PBJointAngles_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<parallelbot_interfaces::msg::PBJointAngles_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<parallelbot_interfaces::msg::PBJointAngles_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      parallelbot_interfaces::msg::PBJointAngles_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<parallelbot_interfaces::msg::PBJointAngles_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      parallelbot_interfaces::msg::PBJointAngles_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<parallelbot_interfaces::msg::PBJointAngles_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<parallelbot_interfaces::msg::PBJointAngles_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<parallelbot_interfaces::msg::PBJointAngles_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__parallelbot_interfaces__msg__PBJointAngles
    std::shared_ptr<parallelbot_interfaces::msg::PBJointAngles_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__parallelbot_interfaces__msg__PBJointAngles
    std::shared_ptr<parallelbot_interfaces::msg::PBJointAngles_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PBJointAngles_ & other) const
  {
    if (this->th1 != other.th1) {
      return false;
    }
    if (this->th2 != other.th2) {
      return false;
    }
    if (this->th3 != other.th3) {
      return false;
    }
    if (this->th4 != other.th4) {
      return false;
    }
    return true;
  }
  bool operator!=(const PBJointAngles_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PBJointAngles_

// alias to use template instance with default allocator
using PBJointAngles =
  parallelbot_interfaces::msg::PBJointAngles_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace parallelbot_interfaces

#endif  // PARALLELBOT_INTERFACES__MSG__DETAIL__PB_JOINT_ANGLES__STRUCT_HPP_
