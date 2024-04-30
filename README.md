# AWS DeepRacer Follow the Leader (FTL) Sample Project

## Overview

The AWS DeepRacer Follow the Leader (FTL) sample project is an sample application built on top of the existing AWS DeepRacer application, which uses an object-detection machine learning model through which the AWS DeepRacer device can identify and follow a person.

- FTL Project Info: [FTL Getting Started](https://github.com/summergerhart/aws-deepracer-follow-the-leader-sample-project/blob/main/getting-started.md)
- Original Setup Instructions [Follow the Leader](https://github.com/aws-deepracer/aws-deepracer-follow-the-leader-sample-project/blob/main/README.md)

## Prerequisites

1. [Getting Started](https://github.com/summergerhart/aws-deepracer-launcher/blob/main/readme.md)

1. [Download and Optimize the Object-Detection Model](./download-and-convert-object-detection-model.md)

## Downloading and Building

1. Switch to the root user:

        sudo su

1. Stop the `deepracer-core.service` that is currently running on the device:

        systemctl stop deepracer-core

1. Navigate to workspace directory:

        cd ~/deepracer_ws

1. Clone the entire FTL sample project on the AWS DeepRacer device:
 
        git clone https://github.com/summergerhart/aws-deepracer-follow-the-leader-sample-project.git
        cd ~/deepracer_ws/aws-deepracer-follow-the-leader-sample-project/deepracer_follow_the_leader_ws/

1. Clone the `async_web_server_cpp`, `web_video_server`, and `rplidar_ros dependency` packages on the AWS DeepRacer device:

        ./install_dependencies.sh

1. Fetch the unreleased dependencies:

        rosws update

1. Resolve the dependencies:

        rosdep install -i --from-path . --rosdistro foxy -y

1. Build the packages in the workspace:

        colcon build


## Using the FTL Sample Application

### Running the Node

1. Switch to the root user:

        sudo su

1. Source the setup script for the installed packages:

        source ~/deepracer_ws/aws-deepracer-follow-the-leader-sample-project/deepracer_follow_the_leader_ws/install/setup.bash

1. Stop the `deepracer-core.service` that is currently running on the device:

        systemctl stop deepracer-core

1. Launch the nodes required for the FTL sample project:

        ros2 launch ftl_launcher ftl_launcher.py

Once the FTL sample application is launched, you can access the FTL tab from the AWS DeepRacer Vehicle's Device Console.

## More Options & Info

### Enabling `followtheleader` Mode Using the CLI

Once the `ftl_launcher` has been kicked off, open a new terminal as the root user.

1. Switch to the root user before you source the ROS2 installation:

        sudo su

1. Navigate to the FTL workspace:

        cd ~/deepracer_ws/aws-deepracer-follow-the-leader-sample-project/deepracer_follow_the_leader_ws/

1. Source the setup script for the installed packages:

        source ~/deepracer_ws/aws-deepracer-follow-the-leader-sample-project/deepracer_follow_the_leader_ws/install/setup.bash

1. Set the mode of the AWS DeepRacer via `ctrl_pkg` to `followtheleader` using the following ROS 2 service call:

        ros2 service call /ctrl_pkg/vehicle_state deepracer_interfaces_pkg/srv/ActiveStateSrv "{state: 3}"

1. Enable `followtheleader` mode using the following ROS 2 service call:

        ros2 service call /ctrl_pkg/enable_state deepracer_interfaces_pkg/srv/EnableStateSrv "{is_active: True}"

### Changing the `MAX_SPEED` scale of the AWS DeepRacer:

You can modify the `MAX_SPEED` scale of the AWS DeepRacer using a ROS 2 service call in case the car isn’t moving as expected. This can occur because of the vehicle battery percentage, the surface on which the car is operating, or for other reasons.

1. Switch to the root user before you source the ROS 2 installation:

        sudo su

1. Navigate to the FTL workspace:

        cd ~/deepracer_ws/aws-deepracer-follow-the-leader-sample-project/deepracer_follow_the_leader_ws/

1. Source the setup script for the installed packages:

        source ~/deepracer_ws/aws-deepracer-follow-the-leader-sample-project/deepracer_follow_the_leader_ws/install/setup.bash

1. Change the `MAX SPEED` to % of the `MAX` Scale:

        ros2 service call /ftl_navigation_pkg/set_max_speed deepracer_interfaces_pkg/srv/SetMaxSpeedSrv "{max_speed_pct: 0.xx}"

    Example: Change the `MAX SPEED` to 75% of the `MAX` Scale:

        ros2 service call /ftl_navigation_pkg/set_max_speed deepracer_interfaces_pkg/srv/SetMaxSpeedSrv "{max_speed_pct: 0.75}"
