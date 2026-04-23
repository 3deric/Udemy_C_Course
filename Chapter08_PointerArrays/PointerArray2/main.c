#include <stdio.h>
#include <stdlib.h>

// function to create a dynamic array
// malloc reserves memory on the heap (large memory)
// array gets filled with a default value
// function returns the pointer to the array
// pointer is on the stack (small memory)

int *createArray(unsigned int length, int value)
{
    int *array = (int *)malloc(length * sizeof(int));

    if (array == NULL)
    {
        return NULL;
    }

    for (unsigned int i = 0; i < length; i++)
    {
        array[i] = value;
    }

    return array;
}

int *freeArray(int *array)
{
    if (array != NULL)
    {
        free(array);
    }
    return NULL;
}

int main()
{
    unsigned int length = 10;

    int *array = createArray(length, 1);

    for (unsigned int i = 0; i < length; i++)
    {
        printf("Value %d is %d\n", i, array[i]);
    }

    freeArray(array);

    return 0;
}
