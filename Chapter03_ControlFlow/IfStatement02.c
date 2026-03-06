#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age_jan = 28;
    int age_marc = 30;
    int age_sarah = 23;

    bool is_jan_the_youngest = (age_jan < age_marc) && (age_jan < age_sarah);
    bool is_marc_the_youngest = (age_marc < age_jan) && (age_marc < age_sarah);
    bool is_sarah_the_youngest = (age_sarah < age_jan) && (age_sarah < age_marc);


    // direct if check
    // could also be if ((age_jan < age_marc) == true)
    if (is_jan_the_youngest)
    {
        printf("Jan is the youngest\n");
    }
    // could be multiple else ifs if needed
    else if (is_marc_the_youngest)
    {
        printf("Marc is the youngest\n");
    }
    else if (is_sarah_the_youngest)
    {
        printf("Sarah is the youngest person\n");
    }
    else
    {
        printf("All have the same age");
    }

    return 0;
}
