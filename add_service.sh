#!/bin/bash

# Function to convert camelCase to snake_case
camel_to_snake() {
  local input="$1"
  local result=""
  local len="${#input}"
  for ((i = 0; i < len; i++)); do
    local char="${input:i:1}"

    if [[ "$char" =~ [A-Z] ]]; then
      if [ "$i" -gt 0 ]; then
        result+="_"
      fi
      result+="${char,}"  # Convert uppercase letter to lowercase
    else
      result+="$char"
    fi
  done
  echo "$result"
}

# Check if an argument is provided
if [ $# -eq 0 ]; then
  echo "Usage: $0 <camelCaseName>"
  exit 1
fi

camel_case_name="$1"
snake_case_name=$(camel_to_snake "$camel_case_name")
echo "Converted camelCase: $camel_case_name to snake_case: $snake_case_name"

client_string="    typedef rclcpp::Client<scion_types::srv::$camel_case_name>::SharedPtr                 ${snake_case_name}_client_t;
"

service_string="    typedef rclcpp::Service<scion_types::srv::$camel_case_name>::SharedPtr                ${snake_case_name}_service_t;
"

robot_types_string="    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    typedef std::shared_ptr<scion_types::srv::$camel_case_name::Request>                     ${snake_case_name}_request_t;
    typedef std::shared_ptr<scion_types::srv::$camel_case_name::Response>                    ${snake_case_name}_response_t;
    typedef rclcpp::Client<scion_types::srv::$camel_case_name>::SharedFuture                 ${snake_case_name}_future_t;"


service_call_string="${snake_case_name}_response_t RosOperations::ServiceAPIs::$camel_case_name(const node_t node, const ${snake_case_name}_client_t client, const std::string& requester_name)
{
    return makeServiceCall<${snake_case_name}_response_t, ${snake_case_name}_future_t>(node, client, [&]() {
        auto ${snake_case_name}_request = std::make_shared<scion_types::srv::$camel_case_name::Request>();
        ${snake_case_name}_request->requester_name = requester_name;
        return client->async_send_request(${snake_case_name}_request).share();
    });
}"

header_file_changes="        RTL::${snake_case_name}_response_t $camel_case_name(RTL::node_t node, RTL::${snake_case_name}_client_t, const std::string& requester_name);"

# Create a file with the snake_case name
sudo touch "scion_types/srv/$camel_case_name.srv"

# Use awk to replace text in CMakeLists.txt
awk -v camel_case_name="$camel_case_name" '/srv\/Boolean.srv/ { print; print "  \"srv/" camel_case_name ".srv\""; next }1' scion_types/CMakeLists.txt > temp.txt
mv temp.txt scion_types/CMakeLists.txt

awk -v robot_types_string="$robot_types_string" '/typedef std::shared_ptr<std_srvs::srv::Trigger::Response>/ { print; print   robot_types_string ; next }1' robot_types/include/custom_ros_types.hpp >> temp.txt 
mv temp.txt robot_types/include/custom_ros_types.hpp

awk -v client_string="$client_string" '/typedef rclcpp::Client<scion_types::srv::ChangeDesiredState>::SharedPtr/ { print; print   client_string ; next }1' robot_types/include/custom_ros_types.hpp >> temp.txt
mv temp.txt robot_types/include/custom_ros_types.hpp

awk -v service_string="$service_string" '/rclcpp::Service<scion_types::srv::ChangeDesiredState>::SharedPtr/ { print; print   service_string ; next }1' robot_types/include/custom_ros_types.hpp >> temp.txt
mv temp.txt robot_types/include/custom_ros_types.hpp

awk -v service_call_string="$service_call_string" '/auto-gen/ { print; print   service_call_string ; next }1' ros_library/public_service_apis/src/public_service_apis.cpp >> temp.txt
mv temp.txt ros_library/public_service_apis/src/public_service_apis.cpp

awk -v header_file_changes="$header_file_changes" '/auto-gen/ { print; print   header_file_changes ; next }1' ros_library/public_service_apis/include/public_service_apis.hpp >> temp.txt
mv temp.txt ros_library/public_service_apis/include/public_service_apis.hpp