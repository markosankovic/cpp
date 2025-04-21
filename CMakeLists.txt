cmake_minimum_required(VERSION 3.30)

project(Cpp VERSION 0.1 LANGUAGES CXX)

find_package(loguru CONFIG REQUIRED)

# Add subdirectories
add_subdirectory(apps/cpp_for_c_programmers)
add_subdirectory(apps/playground)
