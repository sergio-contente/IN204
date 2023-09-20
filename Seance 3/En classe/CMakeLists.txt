project(TD3)
include_directories(${PROJECT_SOURCE_DIR})
cmake_minimum_required(VERSION 3.0)

add_executable(td3 bin/main.cpp bin/simple_sort.cpp )
