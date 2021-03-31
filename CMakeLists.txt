cmake_minimum_required(VERSION 3.17)
project(lab_2_4)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab_2_4 Source/main.cpp Source/peripheral_device.cpp Header/peripheral_device.h Source/keyboard.cpp Header/keyboard.h Source/scanner.cpp Header/scanner.h)