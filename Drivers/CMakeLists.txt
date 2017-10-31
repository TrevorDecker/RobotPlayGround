cmake_minimum_required(VERSION 3.0)
project (RobotPlayGround/Drivers)

FIND_PACKAGE(OpenGL REQUIRED)
FIND_PACKAGE(GLUT REQUIRED)

include_directories(${OpenGL_INCLUDE_DIR})
include_directories(${GLUT_INCLUDE_DIR})



add_executable(DeadReckonedRobot DeadReckonedRobot.cpp)
target_link_libraries(DeadReckonedRobot ${GLUT_LIBRARY} ${OPENGL_LIBRARY})
