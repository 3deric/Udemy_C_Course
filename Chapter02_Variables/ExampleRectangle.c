#include <stdio.h>

int main()
{
    // Rectangle Example
    // 1.) Read the values for a, b from the user
    // 2.) Compute the perimeter and area of the rectangle
    // 3.) Print the computed values in the console

    float a;
    float b;
    float peri;
    float area;

    printf("Please enter length of side a: ");
    scanf("%f", &a);
    printf("Please enter length of side b: ");
    scanf("%f", &b);

    peri = 2.0F * a + 2.0F * b;
    area = a * b;

    printf("The perimeter is: %f\n", peri);
    printf("The area is: %f", area);

    return 0;
}
