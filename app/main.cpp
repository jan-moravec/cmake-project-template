#include <iostream>
#include <greeter/greeter.h>

int main([[maybe_unused]] int argc, [[maybe_unused]] char **args)
{
    std::cout << greetings("World") << std::endl;
}
