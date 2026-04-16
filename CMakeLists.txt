cmake_minimum_required(VERSION 3.10)
project(StudentManagementSystem)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(StudentManagementSystem main.cpp student.cpp student_manager.cpp)

include_directories(${PROJECT_SOURCE_DIR})