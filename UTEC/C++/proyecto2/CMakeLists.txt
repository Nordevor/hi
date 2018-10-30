cmake_minimum_required(VERSION 3.12)
project(proyecto2)

set(CMAKE_CXX_STANDARD 14)

add_executable(proyecto2
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/Makefile
        cmake-build-debug/proyecto2
        cmake-build-debug/proyecto2.cbp
        CMakeLists.txt
        main.cpp)
