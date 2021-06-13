cmake_minimum_required (VERSION 3.5)

# Set project name
project(arithmetic)

# Add library
add_subdirectory(src)

# Add executable
add_executable(app src/main.cpp)
target_link_libraries(app source)

# Add executable to run unit tests
find_package(GTest)
if(GTest_FOUND)
  add_executable(test tests/main.cpp tests/add_test.cpp)
  target_link_libraries(test source ${GTEST_LIBRARIES} pthread)
else()
  message("gloogletest need to be installed to generate the test executable")
endif()