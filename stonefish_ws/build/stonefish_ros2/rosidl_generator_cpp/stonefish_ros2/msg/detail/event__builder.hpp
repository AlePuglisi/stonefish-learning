// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stonefish_ros2:msg/Event.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "stonefish_ros2/msg/event.hpp"


#ifndef STONEFISH_ROS2__MSG__DETAIL__EVENT__BUILDER_HPP_
#define STONEFISH_ROS2__MSG__DETAIL__EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stonefish_ros2/msg/detail/event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stonefish_ros2
{

namespace msg
{

namespace builder
{

class Init_Event_polarity
{
public:
  explicit Init_Event_polarity(::stonefish_ros2::msg::Event & msg)
  : msg_(msg)
  {}
  ::stonefish_ros2::msg::Event polarity(::stonefish_ros2::msg::Event::_polarity_type arg)
  {
    msg_.polarity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stonefish_ros2::msg::Event msg_;
};

class Init_Event_ts
{
public:
  explicit Init_Event_ts(::stonefish_ros2::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_polarity ts(::stonefish_ros2::msg::Event::_ts_type arg)
  {
    msg_.ts = std::move(arg);
    return Init_Event_polarity(msg_);
  }

private:
  ::stonefish_ros2::msg::Event msg_;
};

class Init_Event_y
{
public:
  explicit Init_Event_y(::stonefish_ros2::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_ts y(::stonefish_ros2::msg::Event::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Event_ts(msg_);
  }

private:
  ::stonefish_ros2::msg::Event msg_;
};

class Init_Event_x
{
public:
  Init_Event_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Event_y x(::stonefish_ros2::msg::Event::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Event_y(msg_);
  }

private:
  ::stonefish_ros2::msg::Event msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stonefish_ros2::msg::Event>()
{
  return stonefish_ros2::msg::builder::Init_Event_x();
}

}  // namespace stonefish_ros2

#endif  // STONEFISH_ROS2__MSG__DETAIL__EVENT__BUILDER_HPP_
