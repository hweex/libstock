cmake_minimum_required (VERSION 2.6)
project (libstock)
add_subdirectory (src)
add_executable (Test test/timeseries_test.cpp)
