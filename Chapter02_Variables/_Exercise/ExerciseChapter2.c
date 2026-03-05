#include <stdio.h>
#include <stdint.h>

int main()
{
    uint64_t age;
    uint64_t days;
    uint64_t hours;
    uint64_t minutes;
    uint64_t seconds;

    printf("Please enter your age in years: ");
    scanf("%llu", &age);

    days = age * 365ul;
    hours = days * 24ul;
    minutes = hours * 60ul;
    seconds = minutes * 60ul;

    printf("Your are living since: %llu days\n", days);
    printf("Your are living since: %llu hours\n", hours);
    printf("Your are living since: %llu minutes\n", minutes);
    printf("Your are living since: %llu seconds\n", seconds);

    return 0;
}
