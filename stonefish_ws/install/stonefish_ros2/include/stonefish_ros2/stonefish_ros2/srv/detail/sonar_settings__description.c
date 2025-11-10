// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from stonefish_ros2:srv/SonarSettings.idl
// generated code does not contain a copyright notice

#include "stonefish_ros2/srv/detail/sonar_settings__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_stonefish_ros2
const rosidl_type_hash_t *
stonefish_ros2__srv__SonarSettings__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x21, 0xb1, 0xbf, 0x3c, 0x4f, 0xce, 0x6b, 0xe1,
      0x39, 0xb6, 0x7d, 0x49, 0x51, 0x53, 0x8c, 0xd0,
      0x10, 0x47, 0xef, 0xed, 0x6a, 0xbf, 0xa7, 0x8c,
      0xe4, 0x75, 0xdd, 0xf3, 0x9a, 0x7e, 0xf5, 0xcb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_stonefish_ros2
const rosidl_type_hash_t *
stonefish_ros2__srv__SonarSettings_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcf, 0xd8, 0x0f, 0x23, 0x79, 0xf5, 0xb1, 0x91,
      0x9c, 0xf3, 0x4d, 0x18, 0x59, 0x8f, 0x16, 0x6a,
      0x7a, 0x7a, 0xf0, 0xc4, 0x4d, 0x95, 0xdd, 0x28,
      0x5d, 0x11, 0x51, 0xb4, 0xd6, 0x59, 0x2c, 0x72,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_stonefish_ros2
const rosidl_type_hash_t *
stonefish_ros2__srv__SonarSettings_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0x6c, 0x86, 0xbf, 0x0c, 0xa0, 0x0c, 0xfe,
      0x54, 0x1a, 0xec, 0x74, 0x7e, 0x86, 0x2f, 0xc4,
      0x41, 0x0a, 0xfd, 0x18, 0xd4, 0x2f, 0xc8, 0x47,
      0x6c, 0xe7, 0x35, 0x63, 0x1a, 0x22, 0xa0, 0xa7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_stonefish_ros2
const rosidl_type_hash_t *
stonefish_ros2__srv__SonarSettings_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x15, 0x9d, 0xbe, 0x9b, 0xa4, 0x16, 0xe9, 0xe1,
      0xf3, 0x90, 0x9a, 0xd0, 0x1f, 0x08, 0x27, 0xb5,
      0x7b, 0xc9, 0xd1, 0xb0, 0x6c, 0xab, 0x3e, 0xcf,
      0x42, 0x40, 0x68, 0x50, 0xc2, 0x87, 0x03, 0x71,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char stonefish_ros2__srv__SonarSettings__TYPE_NAME[] = "stonefish_ros2/srv/SonarSettings";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char stonefish_ros2__srv__SonarSettings_Event__TYPE_NAME[] = "stonefish_ros2/srv/SonarSettings_Event";
static char stonefish_ros2__srv__SonarSettings_Request__TYPE_NAME[] = "stonefish_ros2/srv/SonarSettings_Request";
static char stonefish_ros2__srv__SonarSettings_Response__TYPE_NAME[] = "stonefish_ros2/srv/SonarSettings_Response";

// Define type names, field names, and default values
static char stonefish_ros2__srv__SonarSettings__FIELD_NAME__request_message[] = "request_message";
static char stonefish_ros2__srv__SonarSettings__FIELD_NAME__response_message[] = "response_message";
static char stonefish_ros2__srv__SonarSettings__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field stonefish_ros2__srv__SonarSettings__FIELDS[] = {
  {
    {stonefish_ros2__srv__SonarSettings__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {stonefish_ros2__srv__SonarSettings_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__srv__SonarSettings__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {stonefish_ros2__srv__SonarSettings_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__srv__SonarSettings__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {stonefish_ros2__srv__SonarSettings_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription stonefish_ros2__srv__SonarSettings__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__srv__SonarSettings_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__srv__SonarSettings_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__srv__SonarSettings_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
stonefish_ros2__srv__SonarSettings__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {stonefish_ros2__srv__SonarSettings__TYPE_NAME, 32, 32},
      {stonefish_ros2__srv__SonarSettings__FIELDS, 3, 3},
    },
    {stonefish_ros2__srv__SonarSettings__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = stonefish_ros2__srv__SonarSettings_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = stonefish_ros2__srv__SonarSettings_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = stonefish_ros2__srv__SonarSettings_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char stonefish_ros2__srv__SonarSettings_Request__FIELD_NAME__range_min[] = "range_min";
static char stonefish_ros2__srv__SonarSettings_Request__FIELD_NAME__range_max[] = "range_max";
static char stonefish_ros2__srv__SonarSettings_Request__FIELD_NAME__gain[] = "gain";

static rosidl_runtime_c__type_description__Field stonefish_ros2__srv__SonarSettings_Request__FIELDS[] = {
  {
    {stonefish_ros2__srv__SonarSettings_Request__FIELD_NAME__range_min, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__srv__SonarSettings_Request__FIELD_NAME__range_max, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__srv__SonarSettings_Request__FIELD_NAME__gain, 4, 4},
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
stonefish_ros2__srv__SonarSettings_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {stonefish_ros2__srv__SonarSettings_Request__TYPE_NAME, 40, 40},
      {stonefish_ros2__srv__SonarSettings_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char stonefish_ros2__srv__SonarSettings_Response__FIELD_NAME__success[] = "success";
static char stonefish_ros2__srv__SonarSettings_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field stonefish_ros2__srv__SonarSettings_Response__FIELDS[] = {
  {
    {stonefish_ros2__srv__SonarSettings_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__srv__SonarSettings_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
stonefish_ros2__srv__SonarSettings_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {stonefish_ros2__srv__SonarSettings_Response__TYPE_NAME, 41, 41},
      {stonefish_ros2__srv__SonarSettings_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char stonefish_ros2__srv__SonarSettings_Event__FIELD_NAME__info[] = "info";
static char stonefish_ros2__srv__SonarSettings_Event__FIELD_NAME__request[] = "request";
static char stonefish_ros2__srv__SonarSettings_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field stonefish_ros2__srv__SonarSettings_Event__FIELDS[] = {
  {
    {stonefish_ros2__srv__SonarSettings_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__srv__SonarSettings_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {stonefish_ros2__srv__SonarSettings_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__srv__SonarSettings_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {stonefish_ros2__srv__SonarSettings_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription stonefish_ros2__srv__SonarSettings_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__srv__SonarSettings_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {stonefish_ros2__srv__SonarSettings_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
stonefish_ros2__srv__SonarSettings_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {stonefish_ros2__srv__SonarSettings_Event__TYPE_NAME, 38, 38},
      {stonefish_ros2__srv__SonarSettings_Event__FIELDS, 3, 3},
    },
    {stonefish_ros2__srv__SonarSettings_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = stonefish_ros2__srv__SonarSettings_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = stonefish_ros2__srv__SonarSettings_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 range_min\n"
  "float64 range_max\n"
  "float64 gain\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
stonefish_ros2__srv__SonarSettings__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {stonefish_ros2__srv__SonarSettings__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 80, 80},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
stonefish_ros2__srv__SonarSettings_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {stonefish_ros2__srv__SonarSettings_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
stonefish_ros2__srv__SonarSettings_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {stonefish_ros2__srv__SonarSettings_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
stonefish_ros2__srv__SonarSettings_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {stonefish_ros2__srv__SonarSettings_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
stonefish_ros2__srv__SonarSettings__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *stonefish_ros2__srv__SonarSettings__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *stonefish_ros2__srv__SonarSettings_Event__get_individual_type_description_source(NULL);
    sources[4] = *stonefish_ros2__srv__SonarSettings_Request__get_individual_type_description_source(NULL);
    sources[5] = *stonefish_ros2__srv__SonarSettings_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
stonefish_ros2__srv__SonarSettings_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *stonefish_ros2__srv__SonarSettings_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
stonefish_ros2__srv__SonarSettings_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *stonefish_ros2__srv__SonarSettings_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
stonefish_ros2__srv__SonarSettings_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *stonefish_ros2__srv__SonarSettings_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *stonefish_ros2__srv__SonarSettings_Request__get_individual_type_description_source(NULL);
    sources[4] = *stonefish_ros2__srv__SonarSettings_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
