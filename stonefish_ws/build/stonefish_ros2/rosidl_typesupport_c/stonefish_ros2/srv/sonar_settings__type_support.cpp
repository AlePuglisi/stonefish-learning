// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from stonefish_ros2:srv/SonarSettings.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "stonefish_ros2/srv/detail/sonar_settings__struct.h"
#include "stonefish_ros2/srv/detail/sonar_settings__type_support.h"
#include "stonefish_ros2/srv/detail/sonar_settings__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace stonefish_ros2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SonarSettings_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SonarSettings_Request_type_support_ids_t;

static const _SonarSettings_Request_type_support_ids_t _SonarSettings_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SonarSettings_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SonarSettings_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SonarSettings_Request_type_support_symbol_names_t _SonarSettings_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stonefish_ros2, srv, SonarSettings_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stonefish_ros2, srv, SonarSettings_Request)),
  }
};

typedef struct _SonarSettings_Request_type_support_data_t
{
  void * data[2];
} _SonarSettings_Request_type_support_data_t;

static _SonarSettings_Request_type_support_data_t _SonarSettings_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SonarSettings_Request_message_typesupport_map = {
  2,
  "stonefish_ros2",
  &_SonarSettings_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SonarSettings_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SonarSettings_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SonarSettings_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SonarSettings_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &stonefish_ros2__srv__SonarSettings_Request__get_type_hash,
  &stonefish_ros2__srv__SonarSettings_Request__get_type_description,
  &stonefish_ros2__srv__SonarSettings_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace stonefish_ros2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, stonefish_ros2, srv, SonarSettings_Request)() {
  return &::stonefish_ros2::srv::rosidl_typesupport_c::SonarSettings_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "stonefish_ros2/srv/detail/sonar_settings__struct.h"
// already included above
// #include "stonefish_ros2/srv/detail/sonar_settings__type_support.h"
// already included above
// #include "stonefish_ros2/srv/detail/sonar_settings__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace stonefish_ros2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SonarSettings_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SonarSettings_Response_type_support_ids_t;

static const _SonarSettings_Response_type_support_ids_t _SonarSettings_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SonarSettings_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SonarSettings_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SonarSettings_Response_type_support_symbol_names_t _SonarSettings_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stonefish_ros2, srv, SonarSettings_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stonefish_ros2, srv, SonarSettings_Response)),
  }
};

typedef struct _SonarSettings_Response_type_support_data_t
{
  void * data[2];
} _SonarSettings_Response_type_support_data_t;

static _SonarSettings_Response_type_support_data_t _SonarSettings_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SonarSettings_Response_message_typesupport_map = {
  2,
  "stonefish_ros2",
  &_SonarSettings_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SonarSettings_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SonarSettings_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SonarSettings_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SonarSettings_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &stonefish_ros2__srv__SonarSettings_Response__get_type_hash,
  &stonefish_ros2__srv__SonarSettings_Response__get_type_description,
  &stonefish_ros2__srv__SonarSettings_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace stonefish_ros2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, stonefish_ros2, srv, SonarSettings_Response)() {
  return &::stonefish_ros2::srv::rosidl_typesupport_c::SonarSettings_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "stonefish_ros2/srv/detail/sonar_settings__struct.h"
// already included above
// #include "stonefish_ros2/srv/detail/sonar_settings__type_support.h"
// already included above
// #include "stonefish_ros2/srv/detail/sonar_settings__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace stonefish_ros2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SonarSettings_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SonarSettings_Event_type_support_ids_t;

static const _SonarSettings_Event_type_support_ids_t _SonarSettings_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SonarSettings_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SonarSettings_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SonarSettings_Event_type_support_symbol_names_t _SonarSettings_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stonefish_ros2, srv, SonarSettings_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stonefish_ros2, srv, SonarSettings_Event)),
  }
};

typedef struct _SonarSettings_Event_type_support_data_t
{
  void * data[2];
} _SonarSettings_Event_type_support_data_t;

static _SonarSettings_Event_type_support_data_t _SonarSettings_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SonarSettings_Event_message_typesupport_map = {
  2,
  "stonefish_ros2",
  &_SonarSettings_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SonarSettings_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SonarSettings_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SonarSettings_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SonarSettings_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &stonefish_ros2__srv__SonarSettings_Event__get_type_hash,
  &stonefish_ros2__srv__SonarSettings_Event__get_type_description,
  &stonefish_ros2__srv__SonarSettings_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace stonefish_ros2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, stonefish_ros2, srv, SonarSettings_Event)() {
  return &::stonefish_ros2::srv::rosidl_typesupport_c::SonarSettings_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "stonefish_ros2/srv/detail/sonar_settings__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace stonefish_ros2
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SonarSettings_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SonarSettings_type_support_ids_t;

static const _SonarSettings_type_support_ids_t _SonarSettings_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SonarSettings_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SonarSettings_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SonarSettings_type_support_symbol_names_t _SonarSettings_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stonefish_ros2, srv, SonarSettings)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stonefish_ros2, srv, SonarSettings)),
  }
};

typedef struct _SonarSettings_type_support_data_t
{
  void * data[2];
} _SonarSettings_type_support_data_t;

static _SonarSettings_type_support_data_t _SonarSettings_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SonarSettings_service_typesupport_map = {
  2,
  "stonefish_ros2",
  &_SonarSettings_service_typesupport_ids.typesupport_identifier[0],
  &_SonarSettings_service_typesupport_symbol_names.symbol_name[0],
  &_SonarSettings_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SonarSettings_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SonarSettings_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SonarSettings_Request_message_type_support_handle,
  &SonarSettings_Response_message_type_support_handle,
  &SonarSettings_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    stonefish_ros2,
    srv,
    SonarSettings
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    stonefish_ros2,
    srv,
    SonarSettings
  ),
  &stonefish_ros2__srv__SonarSettings__get_type_hash,
  &stonefish_ros2__srv__SonarSettings__get_type_description,
  &stonefish_ros2__srv__SonarSettings__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace stonefish_ros2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, stonefish_ros2, srv, SonarSettings)() {
  return &::stonefish_ros2::srv::rosidl_typesupport_c::SonarSettings_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
