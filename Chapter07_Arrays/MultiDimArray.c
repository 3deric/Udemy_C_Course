#include <stdio.h>

int main()
{
    double M[3][3]; // matrix with 3 rows and 3 cols

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            M[i][j] = i * j; // write operation
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%f\n", M[i][j]); // read operation
        }
    }

    printf("\n");

    double N[3][2] = {
                        {1,2},
                        {3,4},
                        {5,6}
                    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%f\n", N[i][j]); // read operation
        }
    }

    return 0;
}
