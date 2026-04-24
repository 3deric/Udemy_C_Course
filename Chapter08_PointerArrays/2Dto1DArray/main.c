#include <stdio.h>
#include <stdlib.h>

// example on how to efficiently store nd arrays or the heap
// the cpu automatically caches memory which is connected
// 2d heap arrays can be scattered across the heap
// their data is not stored in one place
// a solution is to store 2d heap arrays as 1d arrays
// a index lookup function is required
// this can effectivly speedup the code when using heap arrays

unsigned int index_lookup(unsigned int i, unsigned int j, unsigned int num_cols)
{
    return i * num_cols + j;
}

int *createArray(unsigned int length, int value)
{
    int *array = (int *)malloc(length * sizeof(int));

    if (array == NULL)
    {
        return NULL;
    }

    for (unsigned int i; i < length; i++)
    {
        array[i] = value;
    }

    return array;
}

void printArray(int *array, unsigned int length)
{
    if (array == NULL)
    {
        return;
    }

    for (unsigned int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
    }
}

void printMatrix(int *matrix, unsigned int num_rows, unsigned int num_cols)
{
    if (matrix == NULL)
    {
        return;
    }
    for (unsigned int i = 0; i < num_rows; i++)
    {
        for (unsigned int j = 0; j < num_cols; j++)
        {
            unsigned int index_ij = index_lookup(i, j, num_cols);

            printf("%d, ", matrix[index_ij]);
        }
        printf("\n");
    }
    printf("\n");
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
    unsigned int num_rows = 3;
    unsigned int num_cols = 4;
    unsigned int num_elements = num_rows * num_cols;

    int *array = createArray(num_elements, 1);
    printMatrix(array, num_rows, num_cols);

    return 0;
}
