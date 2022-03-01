# List all headers here
set(HEADER_LIST ${PROJECT_SOURCE_DIR}/include/greeter/greeter.h)

# List all source here
set(SOURCE_LIST greeter.cpp)

add_library(libgreet STATIC ${SOURCE_LIST} ${HEADER_LIST})

target_link_libraries(libgreet PRIVATE project_options project_warnings)

# We need this directory, and users of our library will need it too
target_include_directories(libgreet PUBLIC ${PROJECT_SOURCE_DIR}/include)
