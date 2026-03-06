#include <stdio.h>

int main()
{
    int max_height = 10;
    for (int i = 0; i < max_height; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("1 ");
        }

        printf("\n");
    }
    for (int i = 0; i < max_height; i++)
    {
        for (int j = max_height; j > i; j--)
        {
            printf("1 ");
        }

        printf("\n");
    }
    return 0;
}
