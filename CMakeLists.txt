cmake_minimum_required(VERSION 3.14)

project(WIZARD)

set(WIZARD_VERSION_MAJOR 0)
set(WIZARD_VERSION_MINOR 1)

#set(WIZARD_DIR "${CMAKE_BINARY_DIR}")

#set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

set (CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

# export the PREFERENCES_EDITOR package
#export(PACKAGE WIZARD)
