#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Vector
{   
    int *data;
    unsigned int length;
} Vector;


int *createArray(unsigned int length, int value)
{
    int *data = (int *)malloc(length * sizeof(int));

    if (NULL == data)
    {
        return NULL;
    }

    for (unsigned int i = 0; i < length; i++)
    {
        data[i] = value;
    }

    return data;
}

int *freeArray(int *array)
{
    if (NULL != array)
    {
        free(array);
    }

    return NULL;
}


float meanVector(Vector *v)
{
    float sum = 0.0f;
    for (unsigned int i = 0; i < v->length; i++)
    {
        sum += v->data[i];
    }

    return sum / v->length;
}

int minVector(Vector *v)
{
    int min;
    for (unsigned int i = 0; i < v->length; i++)
    {
        if (i == 0)
        {
            min = v->data[i];
        }
        else if (v->data[i] < min)
        {
            min = v->data[i];
        }
    }
    return min;
}

int maxVector(Vector *v)
{
    int max;
    for (unsigned int i = 0; i < v->length; i++)
    {
        if (i == 0)
        {
            max = v->data[i];
        }
        else if (v->data[i] > max)
        {
            max = v->data[i];
        }
    }
    return max;
}


void printVector(Vector *v)
{
    for (unsigned int i = 0; i < v->length; i++)
    {
        printf("%d\n", v->data[i]);
    }
}



int main()
{
    Vector v1 = {.data = createArray(3, 1), .length = 3};
    v1.data[0] = 15;
    v1.data[1] = 2;
    v1.data[2] = 20;

    printVector(&v1);

    int max_v1 = maxVector(&v1);
    int min_v1 = minVector(&v1);
    float mean_v1 = meanVector(&v1);

    printf("Max: %d\n", max_v1);
    printf("Min: %d\n", min_v1);
    printf("Mean: %f\n", mean_v1);

    return 0;
}
