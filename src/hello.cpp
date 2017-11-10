#include <cstdlib>
#include <iostream>
#include <string.h>

int main(int argn, char** args)
{
    int msgIndx = 1;
    const char* defMsg = "Hello World!";
    char* pMsg = argn > 1 ? args[msgIndx] : nullptr;
    std::string msg(pMsg != nullptr ? pMsg : defMsg);
    std::cout << msg << std::endl;
    if (std::cout.fail())
        return EXIT_FAILURE;

    return EXIT_SUCCESS;
}
