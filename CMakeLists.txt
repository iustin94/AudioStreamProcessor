cmake_minimum_required(VERSION 3.7)


set(CMAKE_CXX_STANDARD 11)


#Version number.
set (Arduino-Audio-Driver_VERSION_MAJOR 1)
set (Arduion-Audio-Driver_VERSION_MINOR 0)

#
set (PROJECT_NAME Arduino-Audio-Driver)
project(${PROJECT_NAME})

# configure a header file to pass some of the CMake settings
# to the source code

configure_file(
        "${PROJECT_SOURCE_DIR}/Arduino-Audio-Driver.h"
        "${PROJECT_BINARY_DIR}/Arduino-Audio-Driver.h"
)

# add the binary tree to the search path for include files
# so that we will find Arduino-Audio-Driver.h
include_directories("${PROJECT_BINARY_DIR}")

set(SOURCE_FILES Arduino-Audio-Driver.cpp Arduino-Audio-Driver.h)

add_executable(Arduino-Audio-Driver ${SOURCE_FILES})

target_link_libraries(Arduino-Audio-Driver libsfml-audio)
