#include <stdio.h>

struct Friend
{
    char name[50];
    char first_name[50];
    unsigned int year;
    unsigned int month;
    unsigned int day;
};

int main()
{
    // initializing a struct with parameters
    struct Friend jan = {.name = "Schäfer", .first_name = "Jan", .year = 1994U, .month = 5U, .day = 12U};
    struct Friend peter = {.name = "Ernst", .first_name = "Peter", .year = 1956U, .month = 11U, .day = 3U};
    struct Friend hans = {.name = "Müller", .first_name = "Hans", .year = 1980U, .month = 10U, .day = 18U};

    printf("%s\n", jan.name);
    printf("%s\n", jan.first_name);
    printf("%u. %u. %u\n", jan.day, jan.month, jan.year);

    printf("%s\n", peter.name);
    printf("%s\n", peter.first_name);
    printf("%u. %u. %u\n", peter.day, peter.month, peter.year);

    printf("%s\n", hans.name);
    printf("%s\n", hans.first_name);
    printf("%u. %u. %u\n", hans.day, hans.month, hans.year);



    return 0;
}