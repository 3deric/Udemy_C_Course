#include <stdio.h>

int main()
{
    int value1 = 10;
    int value2 = 3;

    // doesnt work, since the calculation is based on two integers
    // values need to be floats to do the proper float calculation
    // at least one of the two values needs to be float to get a float
    // better have both values as float
    float value3 = value1 / value2;


    printf("%f\n", value3);

    return 0;
}
