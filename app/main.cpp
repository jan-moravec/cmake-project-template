#include <iostream>
#include <fmt/format.h>
#include <greeter/greeter.h>

int main([[maybe_unused]] int argc, [[maybe_unused]] char **args)
{
    fmt::print("{}\n", greeter::greetings("World"));
    std::cout << greeter::greetings("Universe") << std::endl;
}
