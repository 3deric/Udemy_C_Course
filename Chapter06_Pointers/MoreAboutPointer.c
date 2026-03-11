#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    int *p_d = &a; // gets mem adress of a assigned
    int *p_e = &b; // gets mem adress of b assigned
    int *p_f = &c; // gets mem adress of c assigned

    *p_d = 2 * *p_e + 3 * *p_f;
    // dereferences values of p_e and p_f
    // p_e points to b and p_f points to c
    // 2 * 2 + 3 * 3 = 13
    // p_d gets updated, it is a pointer to a
    // a = 13
    p_d = &b;
    // now points to the memory adress of b
    p_f = &a;
    // now points to the memory adress of a

    *p_e = *p_d + *p_f;
    // *p_d = 2 + *_pf = 13
    // result is 15 on *p_e
    // b = 15 since *p_e references the memory adress of b

    printf("%d\n",a);
    printf("%d\n", *p_d);
    printf("%d\n", *p_e);
    printf("%d\n", *p_f);
    return 0;
}
