cmake_minimum_required (VERSION 2.6) 
project ( Factorial )
add_executable (Factorial factorial.cxx )

#find GTest (source: http://www.cmake.org/cmake/help/v3.0/module/FindGTest.html)
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

#link google test libraty to factorial executable
target_link_libraries (Factorial ${GTEST_BOTH_LIBRARIES} pthread)

#add tests
add_test(AllTestsInFactorial Factorial)
