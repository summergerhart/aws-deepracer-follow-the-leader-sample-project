// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deepracer_interfaces_pkg:srv/SetMaxSpeedSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deepracer_interfaces_pkg/srv/detail/set_max_speed_srv__rosidl_typesupport_introspection_c.h"
#include "deepracer_interfaces_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deepracer_interfaces_pkg/srv/detail/set_max_speed_srv__functions.h"
#include "deepracer_interfaces_pkg/srv/detail/set_max_speed_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetMaxSpeedSrv_Request__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deepracer_interfaces_pkg__srv__SetMaxSpeedSrv_Request__init(message_memory);
}

void SetMaxSpeedSrv_Request__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Request_fini_function(void * message_memory)
{
  deepracer_interfaces_pkg__srv__SetMaxSpeedSrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetMaxSpeedSrv_Request__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Request_message_member_array[1] = {
  {
    "max_speed_pct",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deepracer_interfaces_pkg__srv__SetMaxSpeedSrv_Request, max_speed_pct),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetMaxSpeedSrv_Request__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Request_message_members = {
  "deepracer_interfaces_pkg__srv",  // message namespace
  "SetMaxSpeedSrv_Request",  // message name
  1,  // number of fields
  sizeof(deepracer_interfaces_pkg__srv__SetMaxSpeedSrv_Request),
  SetMaxSpeedSrv_Request__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Request_message_member_array,  // message members
  SetMaxSpeedSrv_Request__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetMaxSpeedSrv_Request__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetMaxSpeedSrv_Request__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Request_message_type_support_handle = {
  0,
  &SetMaxSpeedSrv_Request__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deepracer_interfaces_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, SetMaxSpeedSrv_Request)() {
  if (!SetMaxSpeedSrv_Request__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Request_message_type_support_handle.typesupport_identifier) {
    SetMaxSpeedSrv_Request__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetMaxSpeedSrv_Request__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "deepracer_interfaces_pkg/srv/detail/set_max_speed_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "deepracer_interfaces_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "deepracer_interfaces_pkg/srv/detail/set_max_speed_srv__functions.h"
// already included above
// #include "deepracer_interfaces_pkg/srv/detail/set_max_speed_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetMaxSpeedSrv_Response__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deepracer_interfaces_pkg__srv__SetMaxSpeedSrv_Response__init(message_memory);
}

void SetMaxSpeedSrv_Response__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Response_fini_function(void * message_memory)
{
  deepracer_interfaces_pkg__srv__SetMaxSpeedSrv_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetMaxSpeedSrv_Response__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Response_message_member_array[1] = {
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deepracer_interfaces_pkg__srv__SetMaxSpeedSrv_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetMaxSpeedSrv_Response__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Response_message_members = {
  "deepracer_interfaces_pkg__srv",  // message namespace
  "SetMaxSpeedSrv_Response",  // message name
  1,  // number of fields
  sizeof(deepracer_interfaces_pkg__srv__SetMaxSpeedSrv_Response),
  SetMaxSpeedSrv_Response__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Response_message_member_array,  // message members
  SetMaxSpeedSrv_Response__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetMaxSpeedSrv_Response__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetMaxSpeedSrv_Response__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Response_message_type_support_handle = {
  0,
  &SetMaxSpeedSrv_Response__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deepracer_interfaces_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, SetMaxSpeedSrv_Response)() {
  if (!SetMaxSpeedSrv_Response__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Response_message_type_support_handle.typesupport_identifier) {
    SetMaxSpeedSrv_Response__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetMaxSpeedSrv_Response__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "deepracer_interfaces_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "deepracer_interfaces_pkg/srv/detail/set_max_speed_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers deepracer_interfaces_pkg__srv__detail__set_max_speed_srv__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_service_members = {
  "deepracer_interfaces_pkg__srv",  // service namespace
  "SetMaxSpeedSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // deepracer_interfaces_pkg__srv__detail__set_max_speed_srv__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Request_message_type_support_handle,
  NULL  // response message
  // deepracer_interfaces_pkg__srv__detail__set_max_speed_srv__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t deepracer_interfaces_pkg__srv__detail__set_max_speed_srv__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_service_type_support_handle = {
  0,
  &deepracer_interfaces_pkg__srv__detail__set_max_speed_srv__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, SetMaxSpeedSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, SetMaxSpeedSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deepracer_interfaces_pkg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, SetMaxSpeedSrv)() {
  if (!deepracer_interfaces_pkg__srv__detail__set_max_speed_srv__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_service_type_support_handle.typesupport_identifier) {
    deepracer_interfaces_pkg__srv__detail__set_max_speed_srv__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)deepracer_interfaces_pkg__srv__detail__set_max_speed_srv__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, SetMaxSpeedSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, SetMaxSpeedSrv_Response)()->data;
  }

  return &deepracer_interfaces_pkg__srv__detail__set_max_speed_srv__rosidl_typesupport_introspection_c__SetMaxSpeedSrv_service_type_support_handle;
}
