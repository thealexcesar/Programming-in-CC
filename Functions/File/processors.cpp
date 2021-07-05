#include <iostream>

/* #define PRINT */

int main(void)
{
    #ifdef PRINT
    std::cout << "Printing!" << "\n";
    #endif
    #ifndef PRINT
    std::cout << "Not printing!" << "\n";
    #endif
}