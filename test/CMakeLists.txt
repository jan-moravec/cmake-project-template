include(CTest)
include(Catch)

add_library(main OBJECT main.cpp)
target_link_libraries(main PUBLIC Catch2::Catch2)

add_executable(tests tests.cpp)
target_link_libraries(tests PRIVATE main libgreet)

# Set standard
target_compile_features(tests PUBLIC cxx_std_20)

catch_discover_tests(tests)

# Standard compiler warnings
set_project_warnings(tests ${WARNINGS_AS_ERRORS})
