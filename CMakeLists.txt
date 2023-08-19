cmake_minimum_required(VERSION 3.26)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API 2182bf5c-ef0d-489a-91da-49dbc3090d2a)
set(CMAKE_EXPERIMENTAL_CXX_MODULE_DYNDEP 1)

project("TestOpenCL")
add_subdirectory(${PROJECT_NAME})

project("GalaxySimulator")
add_subdirectory(${PROJECT_NAME})

project("TestModules")
add_subdirectory(${PROJECT_NAME})
