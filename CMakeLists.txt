cmake_minimum_required(VERSION 3.15)

project(
  AwesomeTemplateProject
  VERSION 0.1.0
  DESCRIPTION "An example project with CMake"
  LANGUAGES CXX)

set(ENABLE_CLANG_TIDY ON)
set(ENABLE_CPPCHECK ON)
set(ENABLE_CACHE ON)
set(ENABLE_DOXYGEN ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(cmake/StandardProjectSettings.cmake)
include(cmake/CompilerWarnings.cmake)
include(cmake/PreventInSourceBuilds.cmake)
include(cmake/Cache.cmake)
include(cmake/StaticAnalyzers.cmake)
include(cmake/Doxygen.cmake)

enable_doxygen()

# The compiled library code is here
add_subdirectory(src)

# The executable code is here
add_subdirectory(app)

option(BUILD_SHARED_LIBS "Enable compilation of shared libraries" ON)
option(ENABLE_TESTING "Enable Test Builds" ON)
