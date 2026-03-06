#include <stdio.h>

int main()
{
    int num_iterations = 10;
    for (int i = 0; i < num_iterations; i++)
    {
        printf("%d\n", i);
    }

    for (int i = 0; i < num_iterations; i+=2)
    {
        printf("%d\n", i);
    }

    for (int i = num_iterations; i >= 0; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}
