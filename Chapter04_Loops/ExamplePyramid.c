#include <stdio.h>

int main()
{
    int pyramid_height = 10;

    for (int i = 0; i < pyramid_height; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("1");
        }
        printf("\n");
    }
    for (int i = pyramid_height; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}
