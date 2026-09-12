cmake_minimum_required(VERSION 3.20)

project(
    cpp_study,
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(cppstudy
    src/vec2.cpp
)

target_include_directories(cppstudy
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

target_compile_options(cppstudy
    PRIVATE
        -Wall
        -Wextra
        -Wpedantic
)

add_executable(cpp-study
    src/main.cpp
)

target_link_libraries(cpp-study
    PRIVATE
        cppstudy
)

enable_testing()

add_executable(vec2-test
    tests/vec2_test.cpp
)

target_link_libraries(vec2-test
    PRIVATE
        cppstudy
)

add_test(
    NAME vec2-test
    COMMAND vec2-test
)