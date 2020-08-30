#include <iostream>
#include <greeter/greeter.h>

int main(int, char **)
{
    char a[10];
    a[100] = 0;
    char *c = NULL;
    std::cout << greetings("World") << c << std::endl;
}
