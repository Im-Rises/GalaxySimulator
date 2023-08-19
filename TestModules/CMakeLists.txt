cmake_minimum_required(VERSION 3.26)

project(modules CXX)

add_library(foo STATIC)
target_sources(
        foo PRIVATE
        FILE_SET cxx_modules TYPE CXX_MODULES FILES
        foo.cppm
)
target_compile_features(foo PUBLIC cxx_std_20)

add_executable(hello main.cpp)
target_link_libraries(hello PRIVATE foo)
target_compile_features(hello PRIVATE cxx_std_20)
