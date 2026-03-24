#include <stdio.h>

int main()
{
    float matrix1[2][3] = {1.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    float matrix2[2][3] = {10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f};

    float matrix3[2][3];

    for (int i = 0; i < 2; i++)
    {
         for (int j = 0; j < 3; j++)
         {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
         }
    }

    for (int i = 0; i < 2; i++)
    {
         for (int j = 0; j < 3; j++)
         {
            printf("%d / %d is: %f\n", i,j, matrix3[i][j]);
         }
    }

    return 0;
}
