#include <stdio.h>
#include <stdbool.h>

// Break: end the loop
// Continue: end current iteration!

// adds user inputs as long as the input is positive

int main()
{
    float user_input;
    float sum = 0;

    while (true)
    {
        scanf("%f", &user_input);


        if (user_input > 10.0)
        {
            continue;
        }

        if (user_input < 0.0)
        {
            break;
        }

        sum += user_input;
    }

    printf("sum: %f\n", sum);
    return 0;
}
