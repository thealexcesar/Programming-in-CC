#include <stdio.h>
// Categorizes a single char.
int main(void)
{
    char c;
    printf("Type a single character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        puts("It's a alphabetic character.");
    else if (c >= '0' && c <= '9')
        puts("It's a number.");
    else
        puts("It's a special character.");
    return 0;
}