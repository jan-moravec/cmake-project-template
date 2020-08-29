cmake_minimum_required(VERSION 3.15)

project(
  AwesomeTemplateProject
  VERSION 0.1.0
  DESCRIPTION "An example project with CMake"
  LANGUAGES CXX)

include(cmake/StandardProjectSettings.cmake)
include(cmake/CompilerWarnings.cmake)
include(cmake/PreventInSourceBuilds.cmake)
include(cmake/Cache.cmake)

# The compiled library code is here
add_subdirectory(src)

# The executable code is here
add_subdirectory(app)
