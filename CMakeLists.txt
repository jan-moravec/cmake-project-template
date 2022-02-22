cmake_minimum_required(VERSION 3.20)

include(cmake/Vcpkg.cmake)
run_vcpkg(True)

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
enable_doxygen()

# Set compiler warnings
set(WARNINGS_AS_ERRORS ON)

# Additional libraries
find_package(fmt CONFIG REQUIRED)

# The compiled library code is here
add_subdirectory(src)

# The executable code is here
add_subdirectory(app)
