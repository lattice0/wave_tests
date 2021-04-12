cmake_minimum_required (VERSION 2.8)
project (wave_tests)

set (wave_tests_VERSION_MAJOR 1)
set (wave_tests_VERSION_MINOR 0)

add_subdirectory(wave)

add_library (wave_tests main.cpp)

add_executable(wave_tests wave_tests main.cpp)

target_link_libraries (wave_tests wave_tests)

install (TARGETS wave_tests DESTINATION bin)
