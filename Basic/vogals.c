#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// ERROR! 
int main(void)
{
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    char string[20];
    printf("Type your word: ");
    scanf("%c", string);

    int s_len = strlen(string);
    for (int i = 0; i < s_len; i++) {
        switch (string[i]) {
            case 'a' : a++;
            case 'e' : e++;
            case 'i' : i++;
            case 'o' : o++;
            case 'u' : u++; 
            break;
        }
    }
    printf("[a] = %i\n", a);
    printf("[e] = %i\n", e);
    printf("[i] = %i\n", i);
    printf("[o] = %i\n", o);
    printf("[u] = %i\n", u);
    return 0;
}
// Try again, next time.