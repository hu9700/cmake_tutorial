#include <stdio.h>
#include <iostream>
#include <test6_Config.h>

int main(int argc, char **argv)
{
    std::cout << argv[0] << "Version" << test6_VERSION_MAJOR << "." << test6_VERSION_MINOR << std::endl;

    printf("Hello World\n");
    return 0;
}