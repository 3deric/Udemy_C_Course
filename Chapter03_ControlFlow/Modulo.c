#include <stdio.h>

int main()
{
    int a = 9;
    int b = 2;

    // the following calculation is made by the modulo operator
    int d = a / b;
    int r = a - (d * b);

    printf("a %% b = %d\n", a %b);
    printf("a %% b = %d\n", r);

    return 0;
}
