#include <iostream>
/**
 * Computes the absolute value of a number.
 * variable number @return number *(-1)
 */
int main(void)
{
    int number{};
    std::cout << "Type a number: ";
    std::cin >> number;

    if (number < 0) {
        number *= (-1);
    }
    std::cout << "The absolute value is" << number << "\n";
}