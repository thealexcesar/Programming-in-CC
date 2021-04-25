#include <stdio.h>
/**
 * Computes the triangular Number
 * @param n = n*(n+1)/2.
  * @return triangularN.
 */
int main(void)
{
    int n , triangularN ;
    printf("Type a number: ");
    scanf("%i", &n);

    triangularN = n * (n + 1) /2;
    printf("%i triangular is %i\n", n, triangularN);
}