// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from stonefish_ros2:msg/Event.idl
// generated code does not contain a copyright notice

#include "stonefish_ros2/msg/detail/event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_stonefish_ros2
const rosidl_type_hash_t *
stonefish_ros2__msg__Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x49, 0x7c, 0xa5, 0x90, 0x73, 0x89, 0xf4, 0x4d,
      0x5d, 0x8a, 0x97, 0x04, 0xb9, 0x2a, 0xe9, 0xd2,
      0x0d, 0xe1, 0x33, 0x1b, 0xce, 0xa0, 0xfc, 0x2e,
      0x16, 0xa1, 0x98, 0x3c, 0xeb, 0xdf, 0x65, 0x9d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char stonefish_ros2__msg__Event__TYPE_NAME[] = "stonefish_ros2/msg/Event";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char stonefish_ros2__msg__Event__FIELD_NAME__x[] = "x";
static char stonefish_ros2__msg__Event__FIELD_NAME__y[] = "y";
static char stonefish_ros2__msg__Event__FIELD_NAME__ts[] = "ts";
static char stonefish_ros2__msg__Event__FIELD_NAME__polarity[] = "polarity";

static rosidl_runtime_c__type_description__Field stonefish_ros2__msg__Event__FIELDS[] = {
  {
    {stonefish_ros2__msg__Event__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__Event__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__Event__FIELD_NAME__ts, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__Event__FIELD_NAME__polarity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription stonefish_ros2__msg__Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
stonefish_ros2__msg__Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {stonefish_ros2__msg__Event__TYPE_NAME, 24, 24},
      {stonefish_ros2__msg__Event__FIELDS, 4, 4},
    },
    {stonefish_ros2__msg__Event__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16 x\n"
  "uint16 y\n"
  "builtin_interfaces/Time ts\n"
  "bool polarity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
stonefish_ros2__msg__Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {stonefish_ros2__msg__Event__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 58, 58},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
stonefish_ros2__msg__Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *stonefish_ros2__msg__Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
