[![Actions Status](https://github.com/jan-moravec/cmake-project-template/actions/workflows/ci.yml/badge.svg)](https://github.com/jan-moravec/cmake-project-template/actions)

# My Modern CMake Project Template

This is just my take on modern CMake project template.

## Goal

The goal is to prepare modern CMake template that is ready to use on any platform.

This template provides following features:

* Platform independent, should work under any OS and any C++ compiler.
* C++ and CMake linters.
* Static analyzers.
* Aplication is divided into the libraries.
* Libraries are unit tested.
* Documentation using Doxygen.
* Package manager Vcpkg support

## Usage

To fully enjoy everything, these are the prerequisits:

* Working C++ compiler (Clang, GCC or MSVC)
* CMake
* Clang tools - Tidy and Format
* Cppcheck
* Vcpkg
* Doxygen
* Python and cmake-format

I also use Visual Studio Code with CMake extension.

## Sources

I borrowed a lot from following sources:

* https://cliutils.gitlab.io/modern-cmake/chapters/basics/structure.html
* https://github.com/TheLartians/ModernCppStarter
* https://github.com/lefticus/cpp_starter_project
* https://github.com/bsamseth/cpp-project
* https://github.com/filipdutescu/modern-cpp-template
* https://github.com/Lectem/cpp-boilerplate
