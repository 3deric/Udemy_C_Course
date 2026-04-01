#include <stdio.h>
#include <stdlib.h>

// memory allocation on heap allows dynamic arrays
// memory needs to be managed by hand
// every malloc command NEEDS to be freed
// pointer should be set to NULL
// otherwise it points at a non existing memory adress

// if a application is quit the memory is freed automatically

int main()
{
    unsigned int length = 10;

    int *array = (int *)malloc(length * sizeof(int));

    for (unsigned int i = 0; i < length; i++)
    {
        array[i] = (int)(i * 10);
    }

    for (unsigned int i = 0; i < length; i++)
    {
        printf("Value %d is %d\n", i, array[i]);
    }

    free(array);
    array = NULL;

    return 0;
}
