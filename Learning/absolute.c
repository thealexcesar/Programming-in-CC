#include <stdio.h>

int main(void)
{
    int number;
    printf("Type a number: ");
    scanf("%i", &number);

    if (number < 0) 
        number *= -1;
    printf("The absolute value is %i\n", number);
}