#include <stdio.h>

#define PI 3.14159f // pi as a constant

int main()
{
    //input radius (r) from the user
    //check if input is valid (not negative)
    //compute perimeter and area
    //print both values

    float r;
    float area;
    float peri;

    printf("Please enter the radius of the Circle: ");
    scanf("%f", &r);
    if (r <= 0)
    {
        printf("Radius cannot be zero or negative!\n");
        return 1;
    }

    area = PI * r * r;
    peri = PI * 2 * r;

    printf("The Area of the Circle is: %f\n", area);
    printf("The Perimeter of the Circle is: %f\n", peri);

    return 0;
}
