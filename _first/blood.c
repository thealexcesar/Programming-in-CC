#include <stdio.h>

int main()
{
    char name[30];
    int age, wellFood, flu;
    float weight;
    printf("What's your complete name? ");
    fgets(name , 30, stdin);
    puts("==============================");
    printf("Wellcome, %s", name);
    printf("Please, enter your weight: ");
    scanf("%f", &weight);
    printf("Please, enter your age: ");
    scanf("%i", &age);
    printf("Are you well food? \"1\" to yes or \"0\" to not: ");
    scanf("%i", &wellFood);
    printf("Are you flu? \"1\" to yes or \"0\" to not: ");
    scanf("%i", &flu);
    
    if (weight >= 50 && (age >= 16 && age <= 69) && wellFood && !flu)
        puts("Fit! Thank you for comming.");
    else
        puts("Sorry! You are unfit. Come back another day!");
}