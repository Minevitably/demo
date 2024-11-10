cmake_minimum_required(VERSION 3.26)
project(queue C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(${PROJECT_SOURCE_DIR}/main)
add_subdirectory(${PROJECT_SOURCE_DIR}/static)
add_subdirectory(${PROJECT_SOURCE_DIR}/test)