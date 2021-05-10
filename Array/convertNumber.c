#include <stdio.h>
/**
* Program to convert a positive integer.
* @return Hexadecimal, octal, or binary.
* @code{do} Get the number and the base.  
* @c linear_arrays.
 */
int main(void)
{
    const char BASE_DIGITS[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7', 
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int nextDigit, base, index = 0;
    long int number;
    int convertedNumber[64];

    printf("Number to be converted: ");
    scanf("%ld", &number);
    printf("Base: ");
    scanf("%i", &base);
    
    do {
        convertedNumber[index] = number %base;
        index++;
        number /= base; 
    }
    while (number > 0);

    if (base == 16 || base == 2 || base == 8) {
        printf("Converted number = ");
    }
    else {
        printf("Error!\n");
        return 1;
    }
    // Display the results in reverse order
    for (index--; index >= 0; index--) {
        nextDigit = convertedNumber[index];
        printf("%c", BASE_DIGITS[nextDigit]);
    }
    printf("\n");
    return 0;
}