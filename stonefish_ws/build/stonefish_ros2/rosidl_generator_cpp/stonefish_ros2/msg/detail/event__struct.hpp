// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stonefish_ros2:msg/Event.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "stonefish_ros2/msg/event.hpp"


#ifndef STONEFISH_ROS2__MSG__DETAIL__EVENT__STRUCT_HPP_
#define STONEFISH_ROS2__MSG__DETAIL__EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ts'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__stonefish_ros2__msg__Event __attribute__((deprecated))
#else
# define DEPRECATED__stonefish_ros2__msg__Event __declspec(deprecated)
#endif

namespace stonefish_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Event_
{
  using Type = Event_<ContainerAllocator>;

  explicit Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ts(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0;
      this->y = 0;
      this->polarity = false;
    }
  }

  explicit Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ts(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0;
      this->y = 0;
      this->polarity = false;
    }
  }

  // field types and members
  using _x_type =
    uint16_t;
  _x_type x;
  using _y_type =
    uint16_t;
  _y_type y;
  using _ts_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _ts_type ts;
  using _polarity_type =
    bool;
  _polarity_type polarity;

  // setters for named parameter idiom
  Type & set__x(
    const uint16_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const uint16_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__ts(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->ts = _arg;
    return *this;
  }
  Type & set__polarity(
    const bool & _arg)
  {
    this->polarity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stonefish_ros2::msg::Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const stonefish_ros2::msg::Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stonefish_ros2::msg::Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stonefish_ros2::msg::Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stonefish_ros2::msg::Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stonefish_ros2::msg::Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stonefish_ros2::msg::Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stonefish_ros2::msg::Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stonefish_ros2::msg::Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stonefish_ros2::msg::Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stonefish_ros2__msg__Event
    std::shared_ptr<stonefish_ros2::msg::Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stonefish_ros2__msg__Event
    std::shared_ptr<stonefish_ros2::msg::Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Event_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->ts != other.ts) {
      return false;
    }
    if (this->polarity != other.polarity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Event_

// alias to use template instance with default allocator
using Event =
  stonefish_ros2::msg::Event_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stonefish_ros2

#endif  // STONEFISH_ROS2__MSG__DETAIL__EVENT__STRUCT_HPP_
