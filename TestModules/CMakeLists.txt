add_library(foo STATIC)
target_sources(
        foo PRIVATE
        FILE_SET cxx_modules TYPE CXX_MODULES FILES
        "foo.ixx"
)
target_compile_features(foo PUBLIC cxx_std_20)

add_executable(${PROJECT_NAME} "main.cpp" "foo.cpp")

target_link_libraries(${PROJECT_NAME} PRIVATE foo)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)
