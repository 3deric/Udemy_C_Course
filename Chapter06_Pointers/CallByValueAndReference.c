#include <stdio.h>

// Call by Value
float add1(float v)
{
    v = v + 1.0f;
    return v;
}

// Call by Reference
void add2(float *v)
{
    *v = *v + 1.0f;
}

int main()
{
    float v_main = 0.0f;
    printf("%f\n", v_main);
    v_main = add1(v_main);
    printf("%f\n", v_main);
    add2(&v_main);
    printf("%f\n", v_main);

    return 0;
}
