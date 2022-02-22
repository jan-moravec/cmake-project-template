#include <iostream>
#include <fmt/format.h>
#include <greeter/greeter.h>

int main([[maybe_unused]] int argc, [[maybe_unused]] char **args)
{
    fmt::print("{}\n", greetings("World"));
    std::cout << greetings("Universe") << std::endl;
}
