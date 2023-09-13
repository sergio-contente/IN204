project(TD2_2)
include_directories(${PROJECT_SOURCE_DIR})
cmake_minimum_required(VERSION 3.0)

add_executable(td2_2 bin/main.cpp bin/basecounter.cpp bin/bidicounter.cpp bin/forwardcounter.cpp bin/reversecounter.cpp)
