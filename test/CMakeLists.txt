add_executable(OpenClTest OpenClTest.cpp)
add_test(OpenClTest OpenClTest)

find_package(OpenCL REQUIRED)
target_link_libraries(OpenClTest OpenCL::OpenCL)