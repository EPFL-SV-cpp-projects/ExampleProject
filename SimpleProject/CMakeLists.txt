cmake_minimum_required(VERSION 2.6)

project(project0)

option(test "Build tests." ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -std=c++11")
set(CMAKE_INCLUDE_CURRENT_DIR ON)

include_directories(src)
link_directories("/usr/local/lib")

add_executable(project0 src/main.cpp src/classA.cpp)

if (test)
  enable_testing()
  find_package(GTest)
  include_directories(${GTEST_INCLUDE_DIRS})
  add_executable(project_test test/test_main.cpp src/classA.cpp)
  target_link_libraries(project_test ${GTEST_BOTH_LIBRARIES} pthread)
  add_test(project0 project_test)
endif()

find_package(Doxygen)
if (DOXYGEN_FOUND)
  add_custom_target(doc
    ${DOXYGEN_EXECUTABLE} ${CMAKE_SOURCE_DIR}/Doxyfile
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Generating API documentation with Doxygen" VERBATIM)
endif(DOXYGEN_FOUND)

