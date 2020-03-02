add_library(printer
    src/libprinter.cpp
    include/libprinter/libprinter.h
)

target_include_directories(printer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
