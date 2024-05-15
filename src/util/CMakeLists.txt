cmake_minimum_required(VERSION 3.13)
project(util)

add_library(util)
target_include_directories(util PUBLIC  "../../include" "../rendering")
target_sources(util PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/resource_manager.cpp")
message(INCPATH="${CMAKE_CURRENT_SOURCE_DIR}../../")