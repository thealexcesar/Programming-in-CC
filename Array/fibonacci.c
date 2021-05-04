#include <stdio.h>

int main(void)
{
    int fibonacci[30], i;
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (i = 2; i < 30; i++) {
        fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
    }
    for (i = 2; i < 30; i++) {
        printf("%i\n", fibonacci[i]);
    }
}