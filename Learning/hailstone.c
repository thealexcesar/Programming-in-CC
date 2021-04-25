#include <stdio.h>
/**
 * Compute a Hailstone sequence, if even: n/2 else 3n+1.
 * @param n Starting number for sequence. Assumes n > 0.
 * @return Hailstone sequence starting with n and ending with 1.
 */
int main(void)
{
    int n;
    printf("Type a number: ");
    scanf("%i", &n);

    while (n > 1) {
        printf("%i", n);
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n = (n * 3) + 1;
        }
        printf("%i", n);
    }
    puts("");
}