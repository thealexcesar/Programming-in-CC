#include <stdio.h>

void Log(void);

int main(void)
{
    long int numbers[] = {0xFFFFFFFF, 0x00000000, 0x11111111, 0xAAAAAAAA};
    long int n = numbers[3];
    printf("\t%lx\n\n", n);

    Log();
}

void Log(void)
{
    char hello[] = "Hello world!";
    char letter = hello[11]; 
    printf("%s%c\n", hello, letter);
}