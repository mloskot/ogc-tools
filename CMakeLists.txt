cmake_minimum_required(VERSION 2.8)
project(ogc-tools)

find_package(Boost 1.44 REQUIRED)
if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
endif() 

if(MSVC)
  add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif()

add_subdirectory(wkt)
