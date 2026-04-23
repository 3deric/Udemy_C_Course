#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 3 stack variables
    int a = 42;
    int b = 1337;
    int c = -10;
    // a pointer array that can hold 3 integers on the heap
    int *array = (int *)malloc(3 * sizeof(int));

    array[0] = a;
    array[1] = b;
    array[2] = c;

    // to be sure we dont access the memory by accident we need to set
    // the pointer to NULL
    free(array);
    array = NULL;

    return 0;
}
