#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int n;
    scanf("%i", n);
    while (n != 1) {
        printf("%i", n);
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n *= 3 + 1;
        }
        printf("%i", n );
    }
}