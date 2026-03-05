#include <stdio.h>

int main()
{
    float float_value = 1750.30F;
    double double_value = 1750.30;
    int int_value = 1750;
    unsigned int uint_value = 17U;

    printf("float value: %f\n", float_value);

    printf("double value: %lf\n", double_value);

    printf("int value: %i\n", int_value);

    printf("unsinged int value: %u\n", uint_value);

    return 0;
}
