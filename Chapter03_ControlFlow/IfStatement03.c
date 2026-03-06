#include <stdio.h>

int main()
{
    int age_eric = 37;
    int mod = 3;

    if ((age_eric % mod) == 0)
    {
        printf("Division by %d is possible,\n", mod);
    }
    else
    {
        printf("Division by %d is not possible.\n", mod);
    }

    return 0;
}
