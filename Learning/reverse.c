#include <stdio.h>
/**
 * @param reverse
 * @return right to left
 */
int main(void)
{
    int number, reverse;
    printf("Enter your number: ");
    scanf("%i", &number);

    do {
        reverse = number % 10;
        printf("%i", reverse);
        number /= 10;
    }
    while (number != 0);

    printf("\n");
}