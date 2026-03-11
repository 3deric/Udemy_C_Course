#include <stdio.h>

void binom(int a, int b, int *c)
{
    *c = (a+b) * (a+b);
}

int main()
{
    int a;
    int b;
    int c;

    printf("Input a: ");
    scanf("%d", &a);

    printf("Input b: ");
    scanf("%d", &b);

    binom(a, b, &c);
    printf("The value of c is: %d\n", c);
}
