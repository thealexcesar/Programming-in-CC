#include <iostream>
/**
 * @param revert
 * @return right to left.
 */
int main(void)
{
    int number, revert;
    std::cout << "enter your number: ";
    std::cin >> number;

    while (number != 0) {
        revert = number % 10;
        std::cout << revert;
        number /= 10;
    }
    std::cout << "\n";
}