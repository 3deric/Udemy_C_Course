#include <stdio.h>

int getNumberFromUser()
{
    int num = 0;
    printf("Please enter a integer number: ");
    scanf("%d", &num);
    return num;
}

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
    int num = getNumberFromUser();
    printEvenOrOdd(num);

    return 0;
}
