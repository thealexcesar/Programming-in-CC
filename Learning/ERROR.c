#include <stdio.h>
/**
 * ERROR!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * @param if int divisible @return result, else @return message error. 
 */
int main(void)
{
    int x, y, result;
    printf("Type a number: ");
    scanf("%i", &x);
    printf("Type another number: ");
    scanf("%i", &y);

    result = x / y;
    if (x % y != 0) {
        printf("%i is not divisible by %i.", x, y);
    }
    else if ((float) y == 0) {
        // puts("Impossible to divide by zero.");
        return -1;
    }
    else {
        printf("%i\n", result);
    }
    return 0;
}