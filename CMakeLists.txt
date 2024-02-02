cmake_minimum_required(VERSION 3.12)

project(Template)

enable_testing()

add_executable(Template)

target_sources(Template PRIVATE
    "${CMAKE_CURRENT_LIST_DIR}/source/main.cpp"
)

target_include_directories(Template PRIVATE
    "${CMAKE_CURRENT_LIST_DIR}/include"
)

add_subdirectory(tests)
