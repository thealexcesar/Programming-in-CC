#include <iostream>
#include <math.h>
/**
 * In this case, my function @return int.
 */
int getValue(); 

int main(void)
{
    int n{getValue()};
    std::cout << n << " squared is " << pow(n, 2) << "\n";
    return EXIT_SUCCESS; // or return 0;
}

int getValue() 
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}