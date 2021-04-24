#include <stdio.h>
// Error
int main(void)
{
    int n;
    printf("Prompt: ");
    scanf("%i", &n);

    while (n != 1) {
        printf("%i", n);
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n *= 3 + 1;
        }
        printf("%i", n);
    }
}