cmake_minimum_required(VERSION 3.20)

# Vcpkg support
include(cmake/Vcpkg.cmake)

project(
    AwesomeTemplateProject
    VERSION 0.2.1
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

# Link this 'library' to set the c++ standard / compile-time options requested
add_library(project_options INTERFACE)
target_compile_features(project_options INTERFACE cxx_std_${CMAKE_CXX_STANDARD})

# Link this 'library' to use the warnings specified in CompilerWarnings.cmake
add_library(project_warnings INTERFACE)
set_project_warnings(project_warnings ${WARNINGS_AS_ERRORS})

# Additional libraries
find_package(fmt CONFIG REQUIRED)
find_package(Catch2 CONFIG REQUIRED)

# The compiled library code is here
add_subdirectory(src)
# The executable code is here
add_subdirectory(app)
# The unit tests code is here
add_subdirectory(test)
