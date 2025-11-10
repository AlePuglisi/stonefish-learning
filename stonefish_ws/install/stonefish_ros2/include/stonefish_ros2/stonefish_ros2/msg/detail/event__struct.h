// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stonefish_ros2:msg/Event.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "stonefish_ros2/msg/event.h"


#ifndef STONEFISH_ROS2__MSG__DETAIL__EVENT__STRUCT_H_
#define STONEFISH_ROS2__MSG__DETAIL__EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'ts'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/Event in the package stonefish_ros2.
typedef struct stonefish_ros2__msg__Event
{
  uint16_t x;
  uint16_t y;
  builtin_interfaces__msg__Time ts;
  bool polarity;
} stonefish_ros2__msg__Event;

// Struct for a sequence of stonefish_ros2__msg__Event.
typedef struct stonefish_ros2__msg__Event__Sequence
{
  stonefish_ros2__msg__Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stonefish_ros2__msg__Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STONEFISH_ROS2__MSG__DETAIL__EVENT__STRUCT_H_
