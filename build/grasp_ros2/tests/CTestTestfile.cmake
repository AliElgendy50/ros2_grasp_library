# CMake generated Testfile for 
# Source directory: /root/ros2_ws/src/ros2_grasp_library/grasp_ros2/tests
# Build directory: /root/ros2_ws/build/grasp_ros2/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tgrasp_ros2 "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/root/ros2_ws/build/grasp_ros2/test_results/grasp_ros2/tgrasp_ros2.gtest.xml" "--package-name" "grasp_ros2" "--output-file" "/root/ros2_ws/build/grasp_ros2/ament_cmake_gtest/tgrasp_ros2.txt" "--command" "/root/ros2_ws/build/grasp_ros2/tests/tgrasp_ros2" "--gtest_output=xml:/root/ros2_ws/build/grasp_ros2/test_results/grasp_ros2/tgrasp_ros2.gtest.xml")
set_tests_properties(tgrasp_ros2 PROPERTIES  LABELS "gtest" REQUIRED_FILES "/root/ros2_ws/build/grasp_ros2/tests/tgrasp_ros2" TIMEOUT "60" WORKING_DIRECTORY "/root/ros2_ws/src/ros2_grasp_library/grasp_ros2" _BACKTRACE_TRIPLES "/opt/ros/dashing/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/dashing/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;81;ament_add_test;/opt/ros/dashing/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;88;ament_add_gtest_test;/root/ros2_ws/src/ros2_grasp_library/grasp_ros2/tests/CMakeLists.txt;9;ament_add_gtest;/root/ros2_ws/src/ros2_grasp_library/grasp_ros2/tests/CMakeLists.txt;0;")
subdirs("../gtest")
