cmake_minimum_required(VERSION 3.17)
project(abstract_data_types C)

set(CMAKE_C_STANDARD 99)

add_executable(abstract_data_types lib/main.c lib/point.h lib/point.c lib/route.h lib/route.c)