add_library(source add.cpp)
target_include_directories(source PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)