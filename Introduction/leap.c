#include <stdio.h>
/**
 * computes whether the chosen year is leap.
 * @code rem @return remaindercalculates if divisible.
 * @c Leap or not leap.
  */
int main(void)
{
    int year, rem4, rem100, rem400;
    printf("prompt: ");
    scanf("%i", &year);

    rem4 = year % 4;
    rem100 = year % 100;
    rem400 = year % 400;

    if ((rem4 == 0 && rem100 != 0) || rem400 == 0) {
        puts("It's a leap year.");
    }
    else {
        puts("Nope, is not a leap year.");
    }
}