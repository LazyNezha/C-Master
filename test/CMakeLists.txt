cmake_minimum_required(VERSION 3.22)
project(test C)

set(CMAKE_C_STANDARD 99)

add_executable(test main.c add.c)
target_link_libraries(test m)
