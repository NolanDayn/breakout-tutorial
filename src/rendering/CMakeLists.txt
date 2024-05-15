cmake_minimum_required(VERSION 3.13)
project(rendering)

add_library(rendering)
target_include_directories(rendering PUBLIC  "../../include")
target_sources(rendering PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/shader.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/texture.cpp")
message(INCPATH="${CMAKE_CURRENT_SOURCE_DIR}../../")