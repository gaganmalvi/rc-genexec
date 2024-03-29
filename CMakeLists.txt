cmake_minimum_required(VERSION 3.10)

project(genexec)

set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -s")

file(GLOB SRC_FILES *.cpp)

if (UNIX)
    message(STATUS ">>> Unix environment detected")
    set(myOSOutput "unix")
elseif (WIN32)
    message(STATUS ">>> Windows environment detected")
    set(myOSOutput "windows")
else()
    message(STATUS ">>> Unknown")
    set(myOSOutput "unknown")
endif()

foreach(srcfile ${SRC_FILES})
    get_filename_component(srcname1 ${srcfile} NAME)
    string(REPLACE ".cpp" "" srcname ${srcname1})
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${myOSOutput})
    add_executable(${srcname} ${srcfile})
endforeach(srcfile ${SRC_FILES})
