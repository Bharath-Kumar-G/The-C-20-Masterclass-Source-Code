cmake_minimum_required(VERSION 3.20)

# Project name
project(rooster)

# Set C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create executable
add_executable(rooster main.cpp "src/dog.cpp" "src/dog.h")
# Include the src directory for header files since the files are not in the same directory as main.cpp
# rooster -> target
# src -> include directory
# PRIVATE -> only for this target
# CMAKE_SOURCE_DIR -> root directory of the project
target_include_directories(rooster PRIVATE ${CMAKE_SOURCE_DIR}/src)


# For multi-file projects with headers and separate .cpp files
# add_executable(rooster main.cpp dog.cpp dog.h cat.cpp cat.h)
