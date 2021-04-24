#include <stdio.h>

int main(void)
{
    float x, y;
    char operator;
    char specialOperator[4];

    printf("Type in your expression: ");
    scanf("%f%c%f", &x, &operator, &y);
    switch(operator)
    if (operator == '+')
        printf("%.2f\n", x + y);
    else if (operator == '-')
        printf("%.2f\n", x - y);
    else if (operator == '*')
        printf("%.2f\n", x * y);
    else if (operator == '/') 
        printf("%.2f\n", x / y);
    return 0;
}