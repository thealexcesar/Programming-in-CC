#include <iostream>

int input(void) {
    std::cout << "Enter a integer: \n";

    int choice{};
    std::cin >> choice;
    return choice; 
}

add(int x, int y);

int main(void)
{
    int choice{input};
    std::cout << choice << mult(choice, 2) << "\n";
}