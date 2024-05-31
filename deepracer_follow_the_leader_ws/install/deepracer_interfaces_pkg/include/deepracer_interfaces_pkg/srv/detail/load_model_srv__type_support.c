// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deepracer_interfaces_pkg:srv/LoadModelSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deepracer_interfaces_pkg/srv/detail/load_model_srv__rosidl_typesupport_introspection_c.h"
#include "deepracer_interfaces_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deepracer_interfaces_pkg/srv/detail/load_model_srv__functions.h"
#include "deepracer_interfaces_pkg/srv/detail/load_model_srv__struct.h"


// Include directives for member types
// Member `artifact_path`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LoadModelSrv_Request__rosidl_typesupport_introspection_c__LoadModelSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deepracer_interfaces_pkg__srv__LoadModelSrv_Request__init(message_memory);
}

void LoadModelSrv_Request__rosidl_typesupport_introspection_c__LoadModelSrv_Request_fini_function(void * message_memory)
{
  deepracer_interfaces_pkg__srv__LoadModelSrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LoadModelSrv_Request__rosidl_typesupport_introspection_c__LoadModelSrv_Request_message_member_array[4] = {
  {
    "artifact_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deepracer_interfaces_pkg__srv__LoadModelSrv_Request, artifact_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deepracer_interfaces_pkg__srv__LoadModelSrv_Request, task_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pre_process_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deepracer_interfaces_pkg__srv__LoadModelSrv_Request, pre_process_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action_space_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deepracer_interfaces_pkg__srv__LoadModelSrv_Request, action_space_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LoadModelSrv_Request__rosidl_typesupport_introspection_c__LoadModelSrv_Request_message_members = {
  "deepracer_interfaces_pkg__srv",  // message namespace
  "LoadModelSrv_Request",  // message name
  4,  // number of fields
  sizeof(deepracer_interfaces_pkg__srv__LoadModelSrv_Request),
  LoadModelSrv_Request__rosidl_typesupport_introspection_c__LoadModelSrv_Request_message_member_array,  // message members
  LoadModelSrv_Request__rosidl_typesupport_introspection_c__LoadModelSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  LoadModelSrv_Request__rosidl_typesupport_introspection_c__LoadModelSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LoadModelSrv_Request__rosidl_typesupport_introspection_c__LoadModelSrv_Request_message_type_support_handle = {
  0,
  &LoadModelSrv_Request__rosidl_typesupport_introspection_c__LoadModelSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deepracer_interfaces_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, LoadModelSrv_Request)() {
  if (!LoadModelSrv_Request__rosidl_typesupport_introspection_c__LoadModelSrv_Request_message_type_support_handle.typesupport_identifier) {
    LoadModelSrv_Request__rosidl_typesupport_introspection_c__LoadModelSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LoadModelSrv_Request__rosidl_typesupport_introspection_c__LoadModelSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "deepracer_interfaces_pkg/srv/detail/load_model_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "deepracer_interfaces_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "deepracer_interfaces_pkg/srv/detail/load_model_srv__functions.h"
// already included above
// #include "deepracer_interfaces_pkg/srv/detail/load_model_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LoadModelSrv_Response__rosidl_typesupport_introspection_c__LoadModelSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deepracer_interfaces_pkg__srv__LoadModelSrv_Response__init(message_memory);
}

void LoadModelSrv_Response__rosidl_typesupport_introspection_c__LoadModelSrv_Response_fini_function(void * message_memory)
{
  deepracer_interfaces_pkg__srv__LoadModelSrv_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LoadModelSrv_Response__rosidl_typesupport_introspection_c__LoadModelSrv_Response_message_member_array[1] = {
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deepracer_interfaces_pkg__srv__LoadModelSrv_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LoadModelSrv_Response__rosidl_typesupport_introspection_c__LoadModelSrv_Response_message_members = {
  "deepracer_interfaces_pkg__srv",  // message namespace
  "LoadModelSrv_Response",  // message name
  1,  // number of fields
  sizeof(deepracer_interfaces_pkg__srv__LoadModelSrv_Response),
  LoadModelSrv_Response__rosidl_typesupport_introspection_c__LoadModelSrv_Response_message_member_array,  // message members
  LoadModelSrv_Response__rosidl_typesupport_introspection_c__LoadModelSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  LoadModelSrv_Response__rosidl_typesupport_introspection_c__LoadModelSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LoadModelSrv_Response__rosidl_typesupport_introspection_c__LoadModelSrv_Response_message_type_support_handle = {
  0,
  &LoadModelSrv_Response__rosidl_typesupport_introspection_c__LoadModelSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deepracer_interfaces_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, LoadModelSrv_Response)() {
  if (!LoadModelSrv_Response__rosidl_typesupport_introspection_c__LoadModelSrv_Response_message_type_support_handle.typesupport_identifier) {
    LoadModelSrv_Response__rosidl_typesupport_introspection_c__LoadModelSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LoadModelSrv_Response__rosidl_typesupport_introspection_c__LoadModelSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "deepracer_interfaces_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "deepracer_interfaces_pkg/srv/detail/load_model_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers deepracer_interfaces_pkg__srv__detail__load_model_srv__rosidl_typesupport_introspection_c__LoadModelSrv_service_members = {
  "deepracer_interfaces_pkg__srv",  // service namespace
  "LoadModelSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // deepracer_interfaces_pkg__srv__detail__load_model_srv__rosidl_typesupport_introspection_c__LoadModelSrv_Request_message_type_support_handle,
  NULL  // response message
  // deepracer_interfaces_pkg__srv__detail__load_model_srv__rosidl_typesupport_introspection_c__LoadModelSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t deepracer_interfaces_pkg__srv__detail__load_model_srv__rosidl_typesupport_introspection_c__LoadModelSrv_service_type_support_handle = {
  0,
  &deepracer_interfaces_pkg__srv__detail__load_model_srv__rosidl_typesupport_introspection_c__LoadModelSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, LoadModelSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, LoadModelSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deepracer_interfaces_pkg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, LoadModelSrv)() {
  if (!deepracer_interfaces_pkg__srv__detail__load_model_srv__rosidl_typesupport_introspection_c__LoadModelSrv_service_type_support_handle.typesupport_identifier) {
    deepracer_interfaces_pkg__srv__detail__load_model_srv__rosidl_typesupport_introspection_c__LoadModelSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)deepracer_interfaces_pkg__srv__detail__load_model_srv__rosidl_typesupport_introspection_c__LoadModelSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, LoadModelSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deepracer_interfaces_pkg, srv, LoadModelSrv_Response)()->data;
  }

  return &deepracer_interfaces_pkg__srv__detail__load_model_srv__rosidl_typesupport_introspection_c__LoadModelSrv_service_type_support_handle;
}
