#include <stdio.h>

void printEvenOrOdd(int num)
{
    if (num % 2 == 0)
    {
        printf("%d is even!\n", num);
    }
    else
    {
        printf("%d is odd!\n", num);
    }
}

int main()

{
    int a = 2;
    int b = 3;
    int c = 4;

    printEvenOrOdd(a);
    printEvenOrOdd(b);
    printEvenOrOdd(c);

    return 0;
}
