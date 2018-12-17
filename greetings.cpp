#include "greetings.h"


std::string greetings(std::string in_sName)
{
    std::string sResult = "Hello, ";
    sResult += in_sName;
    sResult += "!";
    return sResult;
}