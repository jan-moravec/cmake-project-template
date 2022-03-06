#include <catch2/catch.hpp>

#include <greeter/greeter.h>

TEST_CASE( "Simple test", "[single-file]" ) { 
    REQUIRE( greeter::greetings("World") == "Hello World!" );
}
