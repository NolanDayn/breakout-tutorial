cmake_minimum_required(VERSION 3.9.1)
set(CMAKE_CXX_STANDARD 14)

project(breakout)
add_executable(breakout "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/src/glad.c")

add_subdirectory(src/rendering)
add_subdirectory(src/game-logic)
add_subdirectory(src/util)

target_include_directories(breakout PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" "${CMAKE_CURRENT_SOURCE_DIR}/src/rendering" "${CMAKE_CURRENT_SOURCE_DIR}/src/game-logic" "${CMAKE_CURRENT_SOURCE_DIR}/src/util")
target_link_directories(breakout PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/lib")
TARGET_LINK_LIBRARIES(breakout glfw3dll rendering gameLogic util)

set(EXECUTABLE_OUTPUT_PATH "${CMAKE_CURRENT_SOURCE_DIR}/out")
