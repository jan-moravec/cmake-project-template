# List all headers here
#set(HEADER_LIST some_header.h)

# List all source here
set(SOURCE_LIST main.cpp)

add_executable(greet ${SOURCE_LIST})

target_link_libraries(greet PRIVATE libgreet)

# Set standard
target_compile_features(greet PUBLIC cxx_std_20)

# Standard compiler warnings
set_project_warnings(greet ${WARNINGS_AS_ERRORS})
