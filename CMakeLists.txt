# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name
project(MyCppProject VERSION 1.0.0 LANGUAGES CXX)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add the main executable
# We remove add_subdirectory(src) and directly add the executable here.
add_executable(my_cpp_project src/main.cpp)

# Add test directory
enable_testing() # Enable CTest for running tests
add_subdirectory(test)