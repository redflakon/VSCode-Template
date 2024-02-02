### FetchContent

# cmake_minimum_required(VERSION 3.12)
# 
# set(CMAKE_CXX_STANDARD 14)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# 
# include(FetchContent)
# FetchContent_Declare(
#     googletest
#     GIT_REPOSITORY https://github.com/google/googletest.git
#     GIT_TAG v1.14.0
# )
# 
# # For Windows: Prevent overriding the parent project's compiler/linker settings
# set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
# FetchContent_MakeAvailable(googletest)
# 
# enable_testing()
# 
# set(FOOTEST_SOURCE
# 	"${CMAKE_CURRENT_LIST_DIR}/FooTest.cpp"
# )
# 
# set(FOOTEST_INCLUDE
# 	"${CMAKE_CURRENT_LIST_DIR}/"
# )
# 
# add_executable(FooTest)
# 
# target_sources(FooTest PRIVATE
# 	${FOOTEST_SOURCE}
# )
# 
# target_include_directories(FooTest PRIVATE
# 	${FOOTEST_INCLUDE}
# )
# 
# target_link_libraries(FooTest PRIVATE
# 	GTest::gtest_main
# )
# 
# include(GoogleTest)
# gtest_discover_tests(FooTest)


### Git submodule

cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(googletest EXCLUDE_FROM_ALL)

enable_testing()

add_executable(FooTest)

target_sources(FooTest PRIVATE
    "${CMAKE_CURRENT_LIST_DIR}/FooTest.cpp"
)

target_include_directories(FooTest PRIVATE
    "${CMAKE_CURRENT_LIST_DIR}/googletest/googletest/include"
)

target_link_libraries(FooTest PRIVATE
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(FooTest)
