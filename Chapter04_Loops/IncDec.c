#include <stdio.h>

int main()
{
    int i = 0;
    i = i + 1;
    i += 1;
    i++; //all three do the same
    printf("%d\n", i);
    i--;
    printf("%d\n", i);
    return 0;
}
