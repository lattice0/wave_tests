cmake_minimum_required (VERSION 2.8)
project (wave_tests)

set (wave_tests_VERSION_MAJOR 1)
set (wave_tests_VERSION_MINOR 0)

set(wave_enable_tests OFF)
add_subdirectory(wave)

add_executable(main main.cpp)
target_link_libraries (main wave)
target_include_directories(main PUBLIC wave/src/wave)

#install (TARGETS wave_tests DESTINATION bin)