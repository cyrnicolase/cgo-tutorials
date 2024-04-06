cmake_minimum_required(VERSION 3.4.1)

macro(use_cxx11)
    if (CMAKE_VERSION VERSION_LESS "3.1")
        if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
            set (CMAKE_CXX_FLAGS "--std=gnu++11 ${CMAKE_CXX_FLAGS}")
        endif ()
    else ()
        set (CMAKE_CXX_STANDARD 11)
    endif ()
endmacro(use_cxx11)

use_cxx11()

project(box-volume)

add_library(cgo_box 
    cgo_box.cpp
    box.cpp
)
set_target_properties(cgo_box PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(cgo_box ${CMAKE_THREAD_LIBS_INIT})
