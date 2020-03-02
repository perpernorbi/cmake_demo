add_library(hello
    src/hello.cpp
    src/hello.h
    src/world.cpp
    src/world.h
    src/libhello.cpp
    include/libhello/libhello.h
)

target_include_directories(hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
target_link_libraries(hello PUBLIC printer)
