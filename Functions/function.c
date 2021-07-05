#include <stdio.h>

// Functions
void input();
void Log();

int main(void)
{
    Log("This is my program.\n");
    input();
}

void input(char s[]) {
    char string[30]; {
        printf("%s", s);
        fgets(string, 30, stdin);
    }
    printf("\nHello, %s!\n\n", string);
}

void Log(char s[]) {
    printf("%s", s);
}