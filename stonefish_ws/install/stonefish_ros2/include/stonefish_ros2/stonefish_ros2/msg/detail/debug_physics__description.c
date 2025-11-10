// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from stonefish_ros2:msg/DebugPhysics.idl
// generated code does not contain a copyright notice

#include "stonefish_ros2/msg/detail/debug_physics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_stonefish_ros2
const rosidl_type_hash_t *
stonefish_ros2__msg__DebugPhysics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x19, 0x98, 0x8e, 0x12, 0xf2, 0x0d, 0xcc, 0x03,
      0xd3, 0x2e, 0x7d, 0x72, 0xc1, 0x62, 0xf4, 0xf6,
      0x59, 0x95, 0x8a, 0x1b, 0x23, 0x9a, 0x00, 0xaf,
      0x05, 0xd6, 0x9c, 0x69, 0x0f, 0xa9, 0xd2, 0x27,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/wrench__functions.h"
#include "geometry_msgs/msg/detail/twist__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Twist__EXPECTED_HASH = {1, {
    0x9c, 0x45, 0xbf, 0x16, 0xfe, 0x09, 0x83, 0xd8,
    0x0e, 0x3c, 0xfe, 0x75, 0x0d, 0x68, 0x35, 0x84,
    0x3d, 0x26, 0x5a, 0x9a, 0x6c, 0x46, 0xbd, 0x2e,
    0x60, 0x9f, 0xcd, 0xdd, 0xe6, 0xfb, 0x8d, 0x2a,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Wrench__EXPECTED_HASH = {1, {
    0x01, 0x8e, 0x85, 0x19, 0xd5, 0x7c, 0x16, 0xad,
    0xbe, 0x97, 0xc9, 0xfe, 0x14, 0x60, 0xef, 0x21,
    0xfe, 0xc7, 0xe3, 0x1b, 0xc5, 0x41, 0xde, 0x3d,
    0x65, 0x3a, 0x35, 0x89, 0x56, 0x77, 0xce, 0x52,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char stonefish_ros2__msg__DebugPhysics__TYPE_NAME[] = "stonefish_ros2/msg/DebugPhysics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Twist__TYPE_NAME[] = "geometry_msgs/msg/Twist";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char geometry_msgs__msg__Wrench__TYPE_NAME[] = "geometry_msgs/msg/Wrench";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char stonefish_ros2__msg__DebugPhysics__FIELD_NAME__header[] = "header";
static char stonefish_ros2__msg__DebugPhysics__FIELD_NAME__mass[] = "mass";
static char stonefish_ros2__msg__DebugPhysics__FIELD_NAME__volume[] = "volume";
static char stonefish_ros2__msg__DebugPhysics__FIELD_NAME__surface[] = "surface";
static char stonefish_ros2__msg__DebugPhysics__FIELD_NAME__cog[] = "cog";
static char stonefish_ros2__msg__DebugPhysics__FIELD_NAME__cob[] = "cob";
static char stonefish_ros2__msg__DebugPhysics__FIELD_NAME__inertia[] = "inertia";
static char stonefish_ros2__msg__DebugPhysics__FIELD_NAME__damping_coeff[] = "damping_coeff";
static char stonefish_ros2__msg__DebugPhysics__FIELD_NAME__skin_friction_coeff[] = "skin_friction_coeff";
static char stonefish_ros2__msg__DebugPhysics__FIELD_NAME__velocity[] = "velocity";
static char stonefish_ros2__msg__DebugPhysics__FIELD_NAME__buoyancy[] = "buoyancy";
static char stonefish_ros2__msg__DebugPhysics__FIELD_NAME__damping[] = "damping";
static char stonefish_ros2__msg__DebugPhysics__FIELD_NAME__skin_friction[] = "skin_friction";
static char stonefish_ros2__msg__DebugPhysics__FIELD_NAME__wetted_surface[] = "wetted_surface";
static char stonefish_ros2__msg__DebugPhysics__FIELD_NAME__submerged_volume[] = "submerged_volume";

static rosidl_runtime_c__type_description__Field stonefish_ros2__msg__DebugPhysics__FIELDS[] = {
  {
    {stonefish_ros2__msg__DebugPhysics__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__DebugPhysics__FIELD_NAME__mass, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__DebugPhysics__FIELD_NAME__volume, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__DebugPhysics__FIELD_NAME__surface, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__DebugPhysics__FIELD_NAME__cog, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__DebugPhysics__FIELD_NAME__cob, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__DebugPhysics__FIELD_NAME__inertia, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__DebugPhysics__FIELD_NAME__damping_coeff, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__DebugPhysics__FIELD_NAME__skin_friction_coeff, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__DebugPhysics__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Twist__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__DebugPhysics__FIELD_NAME__buoyancy, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Wrench__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__DebugPhysics__FIELD_NAME__damping, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Wrench__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__DebugPhysics__FIELD_NAME__skin_friction, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Wrench__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__DebugPhysics__FIELD_NAME__wetted_surface, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__msg__DebugPhysics__FIELD_NAME__submerged_volume, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription stonefish_ros2__msg__DebugPhysics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Twist__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Wrench__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
stonefish_ros2__msg__DebugPhysics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {stonefish_ros2__msg__DebugPhysics__TYPE_NAME, 31, 31},
      {stonefish_ros2__msg__DebugPhysics__FIELDS, 15, 15},
    },
    {stonefish_ros2__msg__DebugPhysics__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Twist__EXPECTED_HASH, geometry_msgs__msg__Twist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Twist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Wrench__EXPECTED_HASH, geometry_msgs__msg__Wrench__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Wrench__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "float64 mass\n"
  "float64 volume\n"
  "float64 surface\n"
  "\n"
  "# In local frame (origin)\n"
  "geometry_msgs/Vector3 cog\n"
  "geometry_msgs/Vector3 cob\n"
  "geometry_msgs/Vector3 inertia\n"
  "geometry_msgs/Vector3 damping_coeff\n"
  "geometry_msgs/Vector3 skin_friction_coeff\n"
  "\n"
  "geometry_msgs/Twist velocity\n"
  "\n"
  "geometry_msgs/Wrench buoyancy\n"
  "geometry_msgs/Wrench damping\n"
  "geometry_msgs/Wrench skin_friction\n"
  "\n"
  "float64 wetted_surface\n"
  "float64 submerged_volume";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
stonefish_ros2__msg__DebugPhysics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {stonefish_ros2__msg__DebugPhysics__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 428, 428},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
stonefish_ros2__msg__DebugPhysics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *stonefish_ros2__msg__DebugPhysics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Twist__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Wrench__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
