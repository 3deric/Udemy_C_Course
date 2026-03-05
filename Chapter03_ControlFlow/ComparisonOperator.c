#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 22;
    int b = 42;

    bool comparison = false;

    //a greater than b
    comparison = a > b;
    printf("a > b = %d\n", comparison);

    //a less than b
    comparison = a < b;
    printf("a < b = %d\n", comparison);

    //a equals b
    comparison = a == b;
    printf("a == b = %d\n", comparison);

    //a not equals b
    comparison = a != b;
    printf("a != b = %d\n", comparison);

    //a greater or equal b
    comparison = a >= b;
    printf("a >= b = %d\n", comparison);

    //a less or equal b
    comparison = a <= b;
    printf("a <= b = %d\n", comparison);

    return 0;
}
