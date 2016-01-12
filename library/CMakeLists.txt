cmake_minimum_required(VERSION 2.8.9)
project (library)

set (LIBRARY_SRC
    src/library.c
)

include_directories("include")

add_library(demoar STATIC ${LIBRARY_SRC})
add_library(demo SHARED ${LIBRARY_SRC})
target_link_libraries(demo "z" "m")
