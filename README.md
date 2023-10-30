# Core Dependencies

This package houses the custom ROS2 types and serves as a public interface between packages of Mechatronics

## Description

This package can be thought of as a glue package between independent Mechatronics modules. A modular design is great but can lead to duplicate code when the same functionality is required in various modules (think ROS custom types or API functions like service calls that may need to be made from many different packages to another (a good example is the CAN service, that will have to be called from many different packages)). This package can house "glue" code and be imported/linked to all modules so that common functionality can be used.

## Usage

If you make a new ROS2 Service, place the client side function here so other people don't have to figure out how to call the service. You can make use of the add.service.sh script to do so easily.

Similarly for a new message type we would want to place the publishing/subscription methods here so we don't have ROS2 boilerplate littering all our other code.

## Linking/Building

Clone this repository and run 

    cmake .. && sudo make install

This will place the appropriate headers into robot_libraries directory where you can include the headers into your project 

[@Strix Elixel](https://github.com/Repo-Factory/) Github
