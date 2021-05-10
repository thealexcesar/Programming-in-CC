#include <stdio.h>
/**
 * A program to says if x is divible by y. 
 */
int main(void)
{
    int x, y, result;
    printf("Type a number: ");
    scanf("%i", &x);
    printf("Type another number: ");
    scanf("%i", &y);

    result = x / y;
    while (x % y !=0 ) {
        printf("\nOops!%i is not divisible by %i.\nTry again!: ", x, y);
        scanf("%i", &y);
    }
    printf("---\n%2i\n---\n", result);
}