#include <stdio.h>
/**
 * @c program to reverse numbers.
 * @return right to left
 */
int main(void)
{
    int numbers, reverse;
    printf("Enter your number: ");
    scanf("%i", &numbers);

    do {
        reverse = numbers % 10;
        printf("%i", reverse);
        numbers /= 10;
    }
    while (numbers > 0);
    
    puts("");
}