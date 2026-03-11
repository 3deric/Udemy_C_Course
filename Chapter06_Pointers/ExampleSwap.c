#include <stdio.h>

void swap(int *x, int *y)
{
    int x_temp = *x;
    *x = *y;
    *y = x_temp;
}

int main()
{
    int a = 1;
    int b = 2;

    // swap function requires the memory adress since a abd b are no pointers
    swap(&a, &b);

    printf("%d\n",a);
    printf("%d\n",b);

    int *c = &a;
    int *d = &b;

    // pointers as parameters are assigned without the &
    // since they are already pointers
    swap(c, d);

    printf("%d\n",*c);
    printf("%d\n",*d);

    return 0;
}
