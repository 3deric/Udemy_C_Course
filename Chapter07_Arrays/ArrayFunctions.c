#include <stdio.h>

// length of array needs to be added as a parameter


float meanArray(int array[], unsigned int length)
{
    float sum = 0.0f;

    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return sum /= length;
}

int main()
{
    int array[10]= {1,2,3,4,5,6,7,8,9,10};

    float mean = meanArray(array, 10);

    printf("The mean value is %f\n", mean);

    return 0;
}
