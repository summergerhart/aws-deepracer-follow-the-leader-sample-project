// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deepracer_interfaces_pkg:srv/ConsoleModelActionSrv.idl
// generated code does not contain a copyright notice

#ifndef DEEPRACER_INTERFACES_PKG__SRV__DETAIL__CONSOLE_MODEL_ACTION_SRV__STRUCT_H_
#define DEEPRACER_INTERFACES_PKG__SRV__DETAIL__CONSOLE_MODEL_ACTION_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'model_path'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/ConsoleModelActionSrv in the package deepracer_interfaces_pkg.
typedef struct deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request
{
  rosidl_runtime_c__String model_path;
  int32_t action;
} deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request;

// Struct for a sequence of deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request.
typedef struct deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__Sequence
{
  deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/ConsoleModelActionSrv in the package deepracer_interfaces_pkg.
typedef struct deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response
{
  rosidl_runtime_c__String status;
} deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response;

// Struct for a sequence of deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response.
typedef struct deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__Sequence
{
  deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEEPRACER_INTERFACES_PKG__SRV__DETAIL__CONSOLE_MODEL_ACTION_SRV__STRUCT_H_
