cmake_minimum_required(VERSION 3.2...3.27.5)


project(kmms_prog)
enable_testing()
#include(GoogleTest)
add_subdirectory(lib/googletest)

#add_subdirectory(251003_app)
#add_subdirectory(251017_refactoring)
#add_subdirectory(251128_class_menu)
#add_subdirectory(251128_home_menu)
#add_subdirectory(until_test_example)
add_subdirectory(20260214_long_number)

set(CMAKE_SUPPRESS_REGENERATION true)