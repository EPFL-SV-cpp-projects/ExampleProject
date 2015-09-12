
cmake_minimum_required (VERSION 2.6)  #minimum version of cmake required
project ( HelloWorld ) #project name 
#add_executable ( HelloWorld main.cxx Speaker.cxx )  #binary name and dependencies

add_library(Speaker Speaker.cxx)

add_executable (HelloJohnMary main.cxx)
add_executable (HelloMark main2.cxx)

target_link_libraries (HelloJohnMary Speaker)
target_link_libraries (HelloMark Speaker)

set(doxyfile ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile)
add_custom_target(doc
  COMMAND ${DOXYGEN_EXECUTABLE} ${doxyfile}
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
  COMMENT "Generating API documentation with Doxygen"
  VERBATIM)
