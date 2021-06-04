#include <stdio.h>
/**
 * get-value() @return int.
 * result() @return void with @param n integer 
 */
int get_value();
void result();

int main(void)
{
    result(get_value());
    return 0;
}

int get_value() {
    printf("Enter a integer: ");
    int input = 0;
    scanf("%i", &input);
    return input;
}

void result(int n) {
    printf("%i", n);
    printf(" squared is %i ", n * n);
    puts("");
}