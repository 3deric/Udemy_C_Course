#include <stdio.h>

// Functions defined in head
int divisibleBy2(int num);
int divisibleBy3(int num);
int getNumberFromUser();
void printDivisibility();

int main()
{
    int num = getNumberFromUser();
    printDivisibility(num);

    return 0;
}

int divisibleBy2(int num)
{
    return num % 2 == 0;
}

int divisibleBy3(int num)
{
    return num % 3 == 0;
}

int getNumberFromUser()
{
    int num = 0;
    printf("Please enter a integer number: ");
    scanf("%d", &num);
    return num;
}

void printDivisibility(int num)
{
    if (divisibleBy2(num))
    {
        printf("%d is divisible by 2!\n", num);
        return;
    }
    if (divisibleBy3(num))
    {
        printf("%d is divisible by 3!\n", num);
        return;
    }
    printf("%d is odd!\n", num);
}
