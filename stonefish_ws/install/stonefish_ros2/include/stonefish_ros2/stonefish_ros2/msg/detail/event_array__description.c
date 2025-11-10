// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from stonefish_ros2:msg/EventArray.idl
// generated code does not contain a copyright notice

#include "stonefish_ros2/msg/detail/event_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_stonefish_ros2
const rosidl_type_hash_t *
stonefish_ros2__msg__EventArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe0, 0xf6, 0x15, 0xa3, 0x8b, 0x97, 0xa9, 0x52,
      0x5e, 0x97, 0x18, 0xa8, 0x37, 0xbe, 0xad, 0x2b,
      0x5e, 0x24, 0x7c, 0xe5, 0x30, 0x9f, 0x89, 0x6c,
      0x15, 0xbe, 0xa5, 0x1c, 0x31, 0xb7, 0x47, 0xaa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "stonefish_ros2/msg/detail/event__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
static const rosidl_type_hash_t stonefish_ros2__msg__Event__EXPECTED_HASH = {1, {
    0x49, 0x7c, 0xa5, 0x90, 0x73, 0x89, 0xf4, 0x4d,
    0x5d, 0x8a, 0x97, 0x04, 0xb9, 0x2a, 0xe9, 0xd2,
    0x0d, 0xe1, 0x33, 0x1b, 0xce, 0xa0, 0xfc, 0x2e,
    0x16, 0xa1, 0x98, 0x3c, 0xeb, 0xdf, 0x65, 0x9d,
  }};
#endif

static char stonefish_ros2__msg__EventArray__TYPE_NAME[] = "stonefish_ros2/msg/EventArray";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char stonefish_ros2__msg__Event__TYPE_NAME[] = "stonefish_ros2/msg/Event";

// Define type names, field names, and default values
static char stonefish_ros2__msg__EventArray__FIELD_NAME__header[] = "header";
static char stonefish_ros2__msg__EventArray__FIELD_NAME__height[] = "height";
static char stonefish_ros2__msg__EventArray__FIELD_NAME__width[] = "width";
static char stonefish_ros2__msg__EventArray__FIELD_NAME__events[] = "events";

static rosidl_runtime_c__type_description__Field stonefish_ros2__msg__EventArray__FIELDS[] = {
  {
    {stonefish_ros2__msg__EventArray__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__EventArray__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__EventArray__FIELD_NAME__width, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__EventArray__FIELD_NAME__events, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {stonefish_ros2__msg__Event__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription stonefish_ros2__msg__EventArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__Event__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
stonefish_ros2__msg__EventArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {stonefish_ros2__msg__EventArray__TYPE_NAME, 29, 29},
      {stonefish_ros2__msg__EventArray__FIELDS, 4, 4},
    },
    {stonefish_ros2__msg__EventArray__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&stonefish_ros2__msg__Event__EXPECTED_HASH, stonefish_ros2__msg__Event__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = stonefish_ros2__msg__Event__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "uint32 height\n"
  "uint32 width\n"
  "stonefish_ros2/Event[] events";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
stonefish_ros2__msg__EventArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {stonefish_ros2__msg__EventArray__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 79, 79},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
stonefish_ros2__msg__EventArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *stonefish_ros2__msg__EventArray__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[3] = *stonefish_ros2__msg__Event__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
