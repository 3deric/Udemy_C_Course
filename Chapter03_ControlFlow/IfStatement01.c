#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age_jan = 28;
    int age_marc = 30;

    bool b = age_jan < age_marc;


    // direct if check
    // could also be if ((age_jan < age_marc) == true)
    if (age_jan < age_marc)
    {
        printf("Jan is younger than Marc\n");
    }
    // could be multiple else ifs if needed
    else if (age_jan > age_marc)
    {
        printf("Mark is younger than Jan\n");
    }
    else
    {
        printf("Both have the same age\n");
    }

    // if check against bool
    if (b)
    {
        printf("Jan is younger than Marc\n");
    }
    else
    {
        printf("Mark is younger than Jan\n");
    }

    return 0;
}
