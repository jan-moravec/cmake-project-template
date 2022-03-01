# List all headers here
#set(HEADER_LIST some_header.h)

# List all source here
set(SOURCE_LIST main.cpp)

add_executable(greet ${SOURCE_LIST})

target_link_libraries(greet PRIVATE project_options project_warnings libgreet fmt::fmt)
