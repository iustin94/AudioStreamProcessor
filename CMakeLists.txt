cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_STANDARD 14)

set (Arduino-Audio-Driver_VERSION_MAJOR 1)
set (Arduion-Audio-Driver_VERSION_MINOR 0)

set (PROJECT_NAME Arduino-Audio-Driver)
project(${PROJECT_NAME})

set(SOURCE_FILES Arduino-Audio-Driver.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} sfml-audio)
