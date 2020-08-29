# List all headers here
set(HEADER_LIST ${PROJECT_SOURCE_DIR}/include/greeter/greeter.h)

# List all source here
set(SOURCE_LIST greeter.cpp)

# Make an automatic library - will be static or dynamic based on user setting
add_library(libgreet ${SOURCE_LIST} ${HEADER_LIST})

# We need this directory, and users of our library will need it too
target_include_directories(libgreet PUBLIC ${PROJECT_SOURCE_DIR}/include)

# Set standard
target_compile_features(libgreet PUBLIC cxx_std_17)

# Standard compiler warnings
set_project_warnings(libgreet)
