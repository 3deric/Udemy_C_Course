#include <stdio.h>


int main()
{
    float vector1[3] = {0.0f, 0.0f, 0.0f};
    float vector2[3] = {0.0f, 0.0f, 0.0f};
    float vector3[3];

    printf("Input values for Vector1\n");
    for (int i = 0; i < 3; i++)
    {
        float input;
        printf("Enter a value for %d: ", i);
        scanf("%f", &input);
        vector1[i] = input;
    }

    printf("Input values for Vector2\n");
    for (int i = 0; i < 3; i++)
    {
        float input;
        printf("Enter a value for %d: ", i);
        scanf("%f", &input);
        vector2[i] = input;
    }
    for (int i = 0; i < 3; i++)
    {
        vector3[i] = vector1[i] + vector2[i];
    }
    printf("Vector 3 is now: %f/%f/%f\n", vector3[0], vector3[1], vector3[2]);
    return 0;
}
