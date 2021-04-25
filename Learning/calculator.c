#include <stdio.h>
/**
 * A simple calculator.
 * @param operator  x and y. 
 * Enter number; enter +, -, *, or /; enter number.
 * @return Sum, Difference, Product or Quotient.
 * @author Alex Cesar.
 */
int main(void)
{
    float x, y;
    char operator;
    puts("\t\b\b-----------------------");
    puts("\t\bHello! Enter a number\n\tthen an expression");
    puts("\tthen another enter\n\t\b\bnumber to be calculate.");
    puts("\t\b\b-----------------------\n");

    printf("Let's go! Type in your expression: ");
    scanf("%f%c%f", &x, &operator, &y);

    switch(operator)
    {
        case '+' : printf("%.1f\n", x + y);
            break;
        case '-' : printf("%.1f\n", x - y);
            break;       
        case '*' : printf("%.1f\n", x * y);
            break;     
        case '/' :
            if (y == 0)
                puts("Division by zero is not available!");
            else
                printf("%.1f\n", x / y);
            break;
        default : puts("Ops!!! Unknown operator, choose \"+\" \"-\" \"*\" or \"/\".");
            break;
        return 0;     
    }
}