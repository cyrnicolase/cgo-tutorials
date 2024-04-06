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

# 这里指定变异静态库的方法
# cgo_box 为库的名字
# cgo_box.cpp 为库的源文件 (这个就是c对c++的封装调用实现)
# box.cpp 为库的依赖文件 (这个是c++的实现，被依赖了所以要导入)
# ${CMAKE_THREAD_LIBS_INIT} 为库的依赖库
# set_target_properties(cgo_box PROPERTIES LINKER_LANGUAGE CXX) 为指定链接库的语言为C++
# target_link_libraries(cgo_box ${CMAKE_THREAD_LIBS_INIT}) 为指定链接库的依赖库
add_library(cgo_box 
    cgo_box.cpp
    box.cpp
)
set_target_properties(cgo_box PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(cgo_box ${CMAKE_THREAD_LIBS_INIT})
