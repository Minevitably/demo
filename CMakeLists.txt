cmake_minimum_required(VERSION 3.26)
project(demo C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(${PROJECT_SOURCE_DIR}/src)
add_subdirectory(${PROJECT_SOURCE_DIR}/queue)
#add_subdirectory(${PROJECT_SOURCE_DIR}/stack)
