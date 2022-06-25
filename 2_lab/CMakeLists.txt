cmake_minimum_required(VERSION 3.23)

project(lab_2 LANGUAGES C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

add_library(mmap_src OBJECT src/mmap_linux.c) 
add_library(calloc_src OBJECT src/calloc_linux.c)

add_executable(mmap $<TARGET_OBJECTS:mmap_src>)
add_executable(calloc $<TARGET_OBJECTS:calloc_src>)

