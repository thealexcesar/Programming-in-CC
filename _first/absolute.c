#include <stdio.h>
/**
 * Computes the absolute value of a number.
 * @param number
 * @return number *(-1).S
 */
int main(void)
{
    int number;
    printf("Type a number: ");
    scanf("%i", &number);

    if (number < 0) 
        number *= -1;
    printf("The absolute value is %i\n", number);
}