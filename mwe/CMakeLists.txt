cmake_minimum_required(VERSION 3.16)

project(nanobind_mwe LANGUAGES CXX)

# add_library(mwe)


find_package(Python COMPONENTS Interpreter Development.Module REQUIRED)
find_package(nanobind CONFIG REQUIRED)

nanobind_add_module(mwe_py
    src/nanobind.cpp
)

if (SKBUILD)
    install(
        TARGETS mwe_py
        LIBRARY DESTINATION mwe_py
    )
endif()