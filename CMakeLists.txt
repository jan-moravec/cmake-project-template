cmake_minimum_required(VERSION 3.20)

include(cmake/Vcpkg.cmake)

if(DEFINED CMAKE_TOOLCHAIN_FILE)
  message(STATUS "Use system vcpkg at ${CMAKE_TOOLCHAIN_FILE}")
else()
  message(STATUS "Use local vcpkg")
  run_vcpkg(TRUE)
endif()

project(
  AwesomeTemplateProject
  VERSION 0.2.0
  DESCRIPTION "An example project with CMake"
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

include(cmake/StandardProjectSettings.cmake)
include(cmake/CompilerWarnings.cmake)
include(cmake/PreventInSourceBuilds.cmake)
include(cmake/Cache.cmake)
include(cmake/StaticAnalyzers.cmake)
include(cmake/Doxygen.cmake)

enable_cppcheck()
enable_clang_tidy()
enable_cache()
# enable_doxygen()
enable_testing()

# Set compiler warnings
set(WARNINGS_AS_ERRORS ON)

# Additional libraries
find_package(fmt CONFIG REQUIRED)
find_package(Catch2 CONFIG REQUIRED)

# The compiled library code is here
add_subdirectory(src)

# The executable code is here
add_subdirectory(app)

# The unit tests code is here
add_subdirectory(test)
