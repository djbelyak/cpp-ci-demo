#include "greetings.h"

#include <iostream>


int main(char argv, const char** argc)
{
    std::string sName;
    std::cout << "What is your name?" << std::endl;
    std::cin >> sName;
    std::cout << greetings(sName) << std::endl;
    return 0;
}