#include <stdio.h>
#include <stdbool.h>

int main()
{
    // read length a of a square from the user
    // check if user has entered a valid number
    // allow the user to input til its a valid number
    // calculate perimeter and area of the square
    //output to the console

    float a;
    float area;
    float peri;

    do
    {
        printf("Please enter a valid length for a: ");
        scanf("%f", &a);
    } while(a <= 0.0f);

    area = a * a;
    peri = 4 * a;

    printf("The perimeter of the square is: %f\n", peri);
    printf("The area of the square is: %f\n", area);

    return 0;
}
