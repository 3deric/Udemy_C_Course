#include <stdio.h>

int main()
{
    float my_balance = 1820.50F;
    printf("My balance: %f\n", my_balance);
    float money_from_job = 50.00F;
    float money_for_food = 5.0F;

    my_balance = my_balance + money_from_job;
    printf("My balance: %f\n", my_balance);
    my_balance = my_balance - money_for_food;

    printf("My balance: %f\n", my_balance);


    return 0;
}
