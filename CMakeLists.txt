cmake_minimum_required (VERSION 3.10)
project (cmakedemo CXX)

SET(MAJOR_VERSION "1")
SET(MINOR_VERSION "0")
SET(PATCH_VERSION "0")

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-long-long -pedantic")

add_subdirectory(libprinter)
add_subdirectory(libhello)
add_subdirectory(app1)
add_subdirectory(app2)

