#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int main(void)
{
    long int i = 1;
    while (true)
    {
        printf("%li\n", i);
        sleep(1);
        i*=2;
    }
}