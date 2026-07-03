#include <stdio.h>
#include <stdint.h>

struct Car
{
    char brand[50];
    char model[50];
    uint16_t year;
};


int main()
{
    struct Car peugeot = {.brand = "Peugeot", .model = "106 Palm Beach", .year = 1995};
    struct Car opel = {.brand = "Opel", .model = "Corsa", .year = 2003};
    struct Car vw = {.brand = "Volkswagen", .model = "Golf Plus", .year = 2009};

    printf("%s %s %u\n", peugeot.brand, peugeot.model, peugeot.year);
    printf("%s %s %u\n", opel.brand, opel.model, opel.year);
    printf("%s %s %u\n", vw.brand, vw.model, vw.year);
    return 0;
}