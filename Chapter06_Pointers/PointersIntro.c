#include <stdio.h>

int main()
{
    int value = 1337;

    printf("The value memory adress is: %p\n", &value);

    // pointer always stores a memory adress, not a value
    int *p = &value;

    printf("The pointer value is: %p\n", p);
    // the pointer has its own memory adress
    printf("The pointer memory adress is: %p\n", &p);
    // access the pointer reference  value with *p
    printf("The deref value of p is: %d\n", *p);
    return 0;
}
