// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from stonefish_ros2:msg/DebugPhysics.idl
// generated code does not contain a copyright notice
#include "stonefish_ros2/msg/detail/debug_physics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "stonefish_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "stonefish_ros2/msg/detail/debug_physics__struct.h"
#include "stonefish_ros2/msg/detail/debug_physics__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/twist__functions.h"  // velocity
#include "geometry_msgs/msg/detail/vector3__functions.h"  // cob, cog, damping_coeff, inertia, skin_friction_coeff
#include "geometry_msgs/msg/detail/wrench__functions.h"  // buoyancy, damping, skin_friction
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
bool cdr_serialize_geometry_msgs__msg__Twist(
  const geometry_msgs__msg__Twist * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
bool cdr_deserialize_geometry_msgs__msg__Twist(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Twist * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t get_serialized_size_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t max_serialized_size_geometry_msgs__msg__Twist(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
bool cdr_serialize_key_geometry_msgs__msg__Twist(
  const geometry_msgs__msg__Twist * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t get_serialized_size_key_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t max_serialized_size_key_geometry_msgs__msg__Twist(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
bool cdr_serialize_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
bool cdr_deserialize_geometry_msgs__msg__Vector3(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Vector3 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
bool cdr_serialize_key_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t get_serialized_size_key_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t max_serialized_size_key_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
bool cdr_serialize_geometry_msgs__msg__Wrench(
  const geometry_msgs__msg__Wrench * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
bool cdr_deserialize_geometry_msgs__msg__Wrench(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Wrench * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t get_serialized_size_geometry_msgs__msg__Wrench(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t max_serialized_size_geometry_msgs__msg__Wrench(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
bool cdr_serialize_key_geometry_msgs__msg__Wrench(
  const geometry_msgs__msg__Wrench * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t get_serialized_size_key_geometry_msgs__msg__Wrench(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t max_serialized_size_key_geometry_msgs__msg__Wrench(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Wrench)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _DebugPhysics__ros_msg_type = stonefish_ros2__msg__DebugPhysics;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stonefish_ros2
bool cdr_serialize_stonefish_ros2__msg__DebugPhysics(
  const stonefish_ros2__msg__DebugPhysics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: mass
  {
    cdr << ros_message->mass;
  }

  // Field name: volume
  {
    cdr << ros_message->volume;
  }

  // Field name: surface
  {
    cdr << ros_message->surface;
  }

  // Field name: cog
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->cog, cdr);
  }

  // Field name: cob
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->cob, cdr);
  }

  // Field name: inertia
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->inertia, cdr);
  }

  // Field name: damping_coeff
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->damping_coeff, cdr);
  }

  // Field name: skin_friction_coeff
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->skin_friction_coeff, cdr);
  }

  // Field name: velocity
  {
    cdr_serialize_geometry_msgs__msg__Twist(
      &ros_message->velocity, cdr);
  }

  // Field name: buoyancy
  {
    cdr_serialize_geometry_msgs__msg__Wrench(
      &ros_message->buoyancy, cdr);
  }

  // Field name: damping
  {
    cdr_serialize_geometry_msgs__msg__Wrench(
      &ros_message->damping, cdr);
  }

  // Field name: skin_friction
  {
    cdr_serialize_geometry_msgs__msg__Wrench(
      &ros_message->skin_friction, cdr);
  }

  // Field name: wetted_surface
  {
    cdr << ros_message->wetted_surface;
  }

  // Field name: submerged_volume
  {
    cdr << ros_message->submerged_volume;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stonefish_ros2
bool cdr_deserialize_stonefish_ros2__msg__DebugPhysics(
  eprosima::fastcdr::Cdr & cdr,
  stonefish_ros2__msg__DebugPhysics * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: mass
  {
    cdr >> ros_message->mass;
  }

  // Field name: volume
  {
    cdr >> ros_message->volume;
  }

  // Field name: surface
  {
    cdr >> ros_message->surface;
  }

  // Field name: cog
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->cog);
  }

  // Field name: cob
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->cob);
  }

  // Field name: inertia
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->inertia);
  }

  // Field name: damping_coeff
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->damping_coeff);
  }

  // Field name: skin_friction_coeff
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->skin_friction_coeff);
  }

  // Field name: velocity
  {
    cdr_deserialize_geometry_msgs__msg__Twist(cdr, &ros_message->velocity);
  }

  // Field name: buoyancy
  {
    cdr_deserialize_geometry_msgs__msg__Wrench(cdr, &ros_message->buoyancy);
  }

  // Field name: damping
  {
    cdr_deserialize_geometry_msgs__msg__Wrench(cdr, &ros_message->damping);
  }

  // Field name: skin_friction
  {
    cdr_deserialize_geometry_msgs__msg__Wrench(cdr, &ros_message->skin_friction);
  }

  // Field name: wetted_surface
  {
    cdr >> ros_message->wetted_surface;
  }

  // Field name: submerged_volume
  {
    cdr >> ros_message->submerged_volume;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stonefish_ros2
size_t get_serialized_size_stonefish_ros2__msg__DebugPhysics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DebugPhysics__ros_msg_type * ros_message = static_cast<const _DebugPhysics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: mass
  {
    size_t item_size = sizeof(ros_message->mass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: volume
  {
    size_t item_size = sizeof(ros_message->volume);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: surface
  {
    size_t item_size = sizeof(ros_message->surface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cog
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->cog), current_alignment);

  // Field name: cob
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->cob), current_alignment);

  // Field name: inertia
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->inertia), current_alignment);

  // Field name: damping_coeff
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->damping_coeff), current_alignment);

  // Field name: skin_friction_coeff
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->skin_friction_coeff), current_alignment);

  // Field name: velocity
  current_alignment += get_serialized_size_geometry_msgs__msg__Twist(
    &(ros_message->velocity), current_alignment);

  // Field name: buoyancy
  current_alignment += get_serialized_size_geometry_msgs__msg__Wrench(
    &(ros_message->buoyancy), current_alignment);

  // Field name: damping
  current_alignment += get_serialized_size_geometry_msgs__msg__Wrench(
    &(ros_message->damping), current_alignment);

  // Field name: skin_friction
  current_alignment += get_serialized_size_geometry_msgs__msg__Wrench(
    &(ros_message->skin_friction), current_alignment);

  // Field name: wetted_surface
  {
    size_t item_size = sizeof(ros_message->wetted_surface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: submerged_volume
  {
    size_t item_size = sizeof(ros_message->submerged_volume);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stonefish_ros2
size_t max_serialized_size_stonefish_ros2__msg__DebugPhysics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: mass
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: volume
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: surface
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: cog
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: cob
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: inertia
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: damping_coeff
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: skin_friction_coeff
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Twist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: buoyancy
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Wrench(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: damping
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Wrench(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: skin_friction
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Wrench(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: wetted_surface
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: submerged_volume
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = stonefish_ros2__msg__DebugPhysics;
    is_plain =
      (
      offsetof(DataType, submerged_volume) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stonefish_ros2
bool cdr_serialize_key_stonefish_ros2__msg__DebugPhysics(
  const stonefish_ros2__msg__DebugPhysics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: mass
  {
    cdr << ros_message->mass;
  }

  // Field name: volume
  {
    cdr << ros_message->volume;
  }

  // Field name: surface
  {
    cdr << ros_message->surface;
  }

  // Field name: cog
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->cog, cdr);
  }

  // Field name: cob
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->cob, cdr);
  }

  // Field name: inertia
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->inertia, cdr);
  }

  // Field name: damping_coeff
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->damping_coeff, cdr);
  }

  // Field name: skin_friction_coeff
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->skin_friction_coeff, cdr);
  }

  // Field name: velocity
  {
    cdr_serialize_key_geometry_msgs__msg__Twist(
      &ros_message->velocity, cdr);
  }

  // Field name: buoyancy
  {
    cdr_serialize_key_geometry_msgs__msg__Wrench(
      &ros_message->buoyancy, cdr);
  }

  // Field name: damping
  {
    cdr_serialize_key_geometry_msgs__msg__Wrench(
      &ros_message->damping, cdr);
  }

  // Field name: skin_friction
  {
    cdr_serialize_key_geometry_msgs__msg__Wrench(
      &ros_message->skin_friction, cdr);
  }

  // Field name: wetted_surface
  {
    cdr << ros_message->wetted_surface;
  }

  // Field name: submerged_volume
  {
    cdr << ros_message->submerged_volume;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stonefish_ros2
size_t get_serialized_size_key_stonefish_ros2__msg__DebugPhysics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DebugPhysics__ros_msg_type * ros_message = static_cast<const _DebugPhysics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: mass
  {
    size_t item_size = sizeof(ros_message->mass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: volume
  {
    size_t item_size = sizeof(ros_message->volume);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: surface
  {
    size_t item_size = sizeof(ros_message->surface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cog
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->cog), current_alignment);

  // Field name: cob
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->cob), current_alignment);

  // Field name: inertia
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->inertia), current_alignment);

  // Field name: damping_coeff
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->damping_coeff), current_alignment);

  // Field name: skin_friction_coeff
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->skin_friction_coeff), current_alignment);

  // Field name: velocity
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Twist(
    &(ros_message->velocity), current_alignment);

  // Field name: buoyancy
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Wrench(
    &(ros_message->buoyancy), current_alignment);

  // Field name: damping
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Wrench(
    &(ros_message->damping), current_alignment);

  // Field name: skin_friction
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Wrench(
    &(ros_message->skin_friction), current_alignment);

  // Field name: wetted_surface
  {
    size_t item_size = sizeof(ros_message->wetted_surface);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: submerged_volume
  {
    size_t item_size = sizeof(ros_message->submerged_volume);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stonefish_ros2
size_t max_serialized_size_key_stonefish_ros2__msg__DebugPhysics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: mass
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: volume
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: surface
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: cog
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: cob
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: inertia
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: damping_coeff
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: skin_friction_coeff
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Twist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: buoyancy
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Wrench(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: damping
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Wrench(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: skin_friction
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Wrench(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: wetted_surface
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: submerged_volume
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = stonefish_ros2__msg__DebugPhysics;
    is_plain =
      (
      offsetof(DataType, submerged_volume) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DebugPhysics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const stonefish_ros2__msg__DebugPhysics * ros_message = static_cast<const stonefish_ros2__msg__DebugPhysics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_stonefish_ros2__msg__DebugPhysics(ros_message, cdr);
}

static bool _DebugPhysics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  stonefish_ros2__msg__DebugPhysics * ros_message = static_cast<stonefish_ros2__msg__DebugPhysics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_stonefish_ros2__msg__DebugPhysics(cdr, ros_message);
}

static uint32_t _DebugPhysics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_stonefish_ros2__msg__DebugPhysics(
      untyped_ros_message, 0));
}

static size_t _DebugPhysics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_stonefish_ros2__msg__DebugPhysics(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DebugPhysics = {
  "stonefish_ros2::msg",
  "DebugPhysics",
  _DebugPhysics__cdr_serialize,
  _DebugPhysics__cdr_deserialize,
  _DebugPhysics__get_serialized_size,
  _DebugPhysics__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DebugPhysics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DebugPhysics,
  get_message_typesupport_handle_function,
  &stonefish_ros2__msg__DebugPhysics__get_type_hash,
  &stonefish_ros2__msg__DebugPhysics__get_type_description,
  &stonefish_ros2__msg__DebugPhysics__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stonefish_ros2, msg, DebugPhysics)() {
  return &_DebugPhysics__type_support;
}

#if defined(__cplusplus)
}
#endif
