#include <stdio.h>

int main()
{
    int iterations = 5;
    for (int i = 0; i <= iterations; i++)
    {
        printf("<       ");
        for (int j = 1; j < 5; j++)
        {
            if (i == 0)
            {
                printf("  ^  ");
            }
            else if (i == iterations)
            {
                printf("  v  ");
            }
            else
            {
                printf("(%d,%d)", i, j);

            }
            printf("    ");
        }
        printf("    >\n");
    }
    return 0;
}
