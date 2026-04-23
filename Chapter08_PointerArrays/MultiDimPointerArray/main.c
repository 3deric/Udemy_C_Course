#include <stdio.h>
#include <stdlib.h>

// multidimensional pointer arrays
// the first array contains the rows of the multidim array
// it is a array of pointer arrays
// therefore it needs to be written with **, it is a pointer to a pointer
// in a single pointer array the memory is allocated as one block
// in a multidim pointer array each pointer array is allocated as one block,
// but the different rows are not continuous.

// to free a multidim pointer array first the columns need to be freed
// after that the row array which has pointers to the columns will be freed
// it is important to do it in this direction,
// otherwise there would be no way to access the memory of the columns

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

void printMatrix(int **matrix, unsigned int num_rows, unsigned int num_cols)
{
    if (matrix == NULL)
    {
        return;
    }
    for (unsigned int i = 0; i < num_rows; i++)
    {
        if (matrix[i] == NULL)
        {
            return;
        }
        printArray(matrix[i], num_cols);

    }
}

int **createMatrix(unsigned int num_rows, unsigned int num_cols, int value)
{
    int **matrix = (int **)malloc(num_rows * sizeof(int *));

    for (unsigned int i = 0; i < num_rows; i++)
    {
        matrix[i] = createArray(num_cols, value);
    }

    return matrix;
}

int *freeArray(int *array)
{
    if (array != NULL)
    {
        free(array);
    }

    return NULL;
}

int **freeMatrix(int **matrix, unsigned int num_rows)
{
    if (matrix == NULL)
    {
        return NULL;
    }
    for (unsigned int i = 0; i < num_rows; i++)
    {
        // free all row pointer arrays
        freeArray(matrix[i]);
    }
    // freematrix pointers to rows
    free(matrix);
    return NULL;
}

int main()
{
    unsigned int length = 3;

    int *array = createArray(length, 1);

    freeArray(array);

    unsigned int num_rows = 3;
    unsigned int num_cols = 42;

    int **matrix = createMatrix(num_rows,num_cols, 42);

    printMatrix(matrix, num_rows, num_cols);

    freeMatrix(matrix, num_rows);

    return 0;
}
