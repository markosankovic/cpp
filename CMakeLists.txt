cmake_minimum_required(VERSION 3.30)

project(Cpp VERSION 0.1 LANGUAGES CXX)

# Require at least C++20, allow higher if compiler supports it
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

# Enable compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add subdirectories
add_subdirectory(apps/cpp_for_c_programmers)
add_subdirectory(apps/playground)
