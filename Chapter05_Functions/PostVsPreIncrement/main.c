#include <stdio.h>

void f(int v)
{
    printf("%d\n",v);
}

int main()
{
    int i = 0;
    printf("%d\n", i++); // post increment
    printf("%d\n", ++i); // pre increment

    i = 0;
    f(i++);
    f(++i);

    for (int k = 0; k < 3; k++)
    {
        printf("%d\n", k);
    }
    for (int j = 0; j < 3; ++j)
    {
        printf("%d\n", j);
    }
    return 0;
}
