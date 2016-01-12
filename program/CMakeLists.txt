cmake_minimum_required(VERSION 2.8.9)
project (program)

set (PROGRAM_SRC
    src/main.c
)

include_directories("../library/include")

find_library(demo_lib libdemo.so ${CMAKE_BINARY_DIR}/../library)
find_library(demo_lib_ar libdemoar.a ${CMAKE_BINARY_DIR}/../library)

add_executable(program_shared ${PROGRAM_SRC})
target_link_libraries(program_shared ${demo_lib})

add_executable(program_static ${PROGRAM_SRC})
target_link_libraries(program_static ${demo_lib_ar} "m" "z")

