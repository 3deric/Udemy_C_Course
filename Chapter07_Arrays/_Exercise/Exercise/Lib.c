#include <stdio.h>

#include "Lib.h"

float meanArray(int *array, unsigned int length)
{
    int sum = 0;

    for (unsigned int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return (float)(sum) / (float)(length);
}

int minArray(int * array, unsigned int length)
{
    int min;

    for (unsigned int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            min = maxNumber(array[i], array[i + 1]);
            continue;
        }
        min = minNumber(min, array[i]);
    }

    return min;
}

int maxArray(int* array, unsigned int length)
{
    int max;


    for (unsigned int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            max = maxNumber(array[i], array[i + 1]);
            continue;
        }
        max = maxNumber(max, array[i]);
    }

    return max;
}

int minNumber(int a, int b)
{
    return (a < b) ? a : b;
}

int maxNumber(int a, int b)
{
    return (a > b) ? a : b;
}
