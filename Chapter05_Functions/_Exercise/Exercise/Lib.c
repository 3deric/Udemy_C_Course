#include <stdio.h>

#include "Lib.h"

int getNumberFromUser()
{
    int number_from_user; //0x00: 12

    printf("Pls enter a integer number!\n");
    scanf("%d", &number_from_user);

    return number_from_user; // return 12;
}

int max(int number_a, int number_b)
{
    return number_a > number_b ? number_a : number_b;
}

int min(int number_a, int number_b)
{
    return number_a < number_b ? number_a : number_b;
}

float mean(int number_a, int number_b)
{
    float f_a = number_a;
    float f_b = number_b;
    return (f_a + f_b) / 2;
}
