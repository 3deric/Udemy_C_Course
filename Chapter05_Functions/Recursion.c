#include <stdio.h>
#include <stdint.h>

uint64_t fac(uint64_t n);

int main()
{
    uint64_t input;
    printf("Input a number to calculate the faculty: ");
    scanf("%lu", &input);
    printf("Faculty of %lu is %lu\n.", input, fac(input));
    return 0;
}

uint64_t fac(uint64_t n)
{
    if (n > 1)
    {
        return n * fac(n - 1);
    }
    return 1;
}
