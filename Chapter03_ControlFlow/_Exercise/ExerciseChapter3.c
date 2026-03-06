#include <stdio.h>

int main()
{
    unsigned int input;
    unsigned int mod;
    printf("Please enter a valid unsigned integer: ");
    scanf("%d", &input);
    mod = input %3;
    if (mod == 0)
    {
        printf("The number is div. by 3!\n");
    }
    else
    {
        printf("The number you entered is not div. by 3!\n");
        printf("The remainder of the operation is: %d\n", mod);
    }
    return 0;
}
