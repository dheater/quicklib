cmake_minimum_required(VERSION 3.18)
project(MyLib)

set(CMAKE_CXX_STANDARD 17)

if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
else()
    message(WARNING "The file conanbuildinfo.cmake doesn't exist, you have to run conan install first")
endif()

add_library(MyLib src/library.cpp src/library.hpp)

enable_testing()

add_library(test_main OBJECT src/main_ut.cpp)
target_link_libraries(test_main ${CONAN_LIBS})

add_executable(demo_test $<TARGET_OBJECTS:test_main> src/demo_ut.cpp)
target_link_libraries(demo_test MyLib)
add_test(NAME demo_test COMMAND demo_test)
