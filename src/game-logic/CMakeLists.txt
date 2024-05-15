cmake_minimum_required(VERSION 3.13)
project(gameLogic)

add_library(gameLogic)
target_include_directories(gameLogic PUBLIC  "../../include" "../rendering")
target_sources(gameLogic PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/game.cpp")
message(INCPATH="${CMAKE_CURRENT_SOURCE_DIR}../../")