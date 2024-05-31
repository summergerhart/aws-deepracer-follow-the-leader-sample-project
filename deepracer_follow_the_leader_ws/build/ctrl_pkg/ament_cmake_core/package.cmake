set(_AMENT_PACKAGE_NAME "ctrl_pkg")
set(ctrl_pkg_VERSION "0.0.1")
set(ctrl_pkg_MAINTAINER "AWS DeepRacer <aws-deepracer@amazon.com>")
set(ctrl_pkg_BUILD_DEPENDS "rclcpp" "deepracer_interfaces_pkg" "camera_pkg" "servo_pkg" "inference_pkg" "model_optimizer_pkg" "deepracer_navigation_pkg")
set(ctrl_pkg_BUILDTOOL_DEPENDS "ament_cmake")
set(ctrl_pkg_BUILD_EXPORT_DEPENDS "rclcpp" "deepracer_interfaces_pkg" "camera_pkg" "servo_pkg" "inference_pkg" "model_optimizer_pkg" "deepracer_navigation_pkg")
set(ctrl_pkg_BUILDTOOL_EXPORT_DEPENDS )
set(ctrl_pkg_EXEC_DEPENDS "rclcpp" "deepracer_interfaces_pkg" "camera_pkg" "servo_pkg" "inference_pkg" "model_optimizer_pkg" "deepracer_navigation_pkg")
set(ctrl_pkg_TEST_DEPENDS "ament_lint_auto" "ament_lint_common")
set(ctrl_pkg_GROUP_DEPENDS )
set(ctrl_pkg_MEMBER_OF_GROUPS )
set(ctrl_pkg_DEPRECATED "")
set(ctrl_pkg_EXPORT_TAGS)
list(APPEND ctrl_pkg_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
