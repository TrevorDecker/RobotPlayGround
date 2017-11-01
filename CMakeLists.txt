# top level Robot Play Ground CMakeLists.txt
# Written by Trevor Decker

cmake_minimum_required(VERSION 3.1)
set (CMAKE_CXX_STANDARD 11)
add_subdirectory(Control)
add_subdirectory(Estimation)
add_subdirectory(Planning)
add_subdirectory(Perception)
add_subdirectory(Simulation)
add_subdirectory(Drivers)
