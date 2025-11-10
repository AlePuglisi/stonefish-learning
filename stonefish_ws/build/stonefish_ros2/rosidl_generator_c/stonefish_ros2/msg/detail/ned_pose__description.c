// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from stonefish_ros2:msg/NEDPose.idl
// generated code does not contain a copyright notice

#include "stonefish_ros2/msg/detail/ned_pose__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_stonefish_ros2
const rosidl_type_hash_t *
stonefish_ros2__msg__NEDPose__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0x21, 0xab, 0x24, 0x0b, 0xb9, 0xc8, 0x33,
      0xf5, 0x51, 0xf9, 0x6e, 0x82, 0xba, 0x2b, 0xae,
      0x7b, 0x96, 0x51, 0x30, 0x69, 0x65, 0x22, 0xb5,
      0x16, 0x3c, 0x1f, 0xc8, 0xd3, 0x15, 0x50, 0x9f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char stonefish_ros2__msg__NEDPose__TYPE_NAME[] = "stonefish_ros2/msg/NEDPose";

// Define type names, field names, and default values
static char stonefish_ros2__msg__NEDPose__FIELD_NAME__north[] = "north";
static char stonefish_ros2__msg__NEDPose__FIELD_NAME__east[] = "east";
static char stonefish_ros2__msg__NEDPose__FIELD_NAME__down[] = "down";
static char stonefish_ros2__msg__NEDPose__FIELD_NAME__roll[] = "roll";
static char stonefish_ros2__msg__NEDPose__FIELD_NAME__pitch[] = "pitch";
static char stonefish_ros2__msg__NEDPose__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field stonefish_ros2__msg__NEDPose__FIELDS[] = {
  {
    {stonefish_ros2__msg__NEDPose__FIELD_NAME__north, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__NEDPose__FIELD_NAME__east, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__NEDPose__FIELD_NAME__down, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__NEDPose__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__NEDPose__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__NEDPose__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
stonefish_ros2__msg__NEDPose__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {stonefish_ros2__msg__NEDPose__TYPE_NAME, 26, 26},
      {stonefish_ros2__msg__NEDPose__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 north\n"
  "float64 east\n"
  "float64 down\n"
  "float64 roll\n"
  "float64 pitch\n"
  "float64 yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
stonefish_ros2__msg__NEDPose__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {stonefish_ros2__msg__NEDPose__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 78, 78},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
stonefish_ros2__msg__NEDPose__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *stonefish_ros2__msg__NEDPose__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
