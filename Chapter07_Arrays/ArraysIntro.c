#include <stdio.h>

int main()
{
    int numbers[4];

    for (int i = 0; i < 4; i++)
    {
        numbers[i] = 42; // write values to the array
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", numbers[i]); // read values from the array
    }

    return 0;
}
