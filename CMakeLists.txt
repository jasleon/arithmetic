cmake_minimum_required (VERSION 3.5)

# Set project name
project(arithmetic)

# Add library
add_subdirectory(src)

# Add executable
add_executable(app src/main.cpp)
target_link_libraries(app source)