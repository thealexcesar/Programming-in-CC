#include <stdio.h>
/**
 * In this case, my function @return int. 
 */
int get_value();

int main(void)
{
    int n = get_value();
    printf("%i", n);
    printf(" squared is %i ", n * n);
    puts("");
    return 0;
}

int get_value()
{
    printf("Enter a integer: ");
    int input = 0;
    scanf("%i", &input);
    return input;
}