cmake_minimum_required (VERSION 2.6)

project (LanciaDadi)

include_directories (dado)

add_subdirectory (random)
add_subdirectory (dado)

add_executable (LanciaDadi main.c)
target_link_libraries (LanciaDadi Dado)
