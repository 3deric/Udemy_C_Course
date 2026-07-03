#include <stdio.h>
#include <stdint.h>

struct Car
{
    char brand[50];
    char model[50];
    uint16_t year;
};

void print_car(struct Car *car)
{
    // when a struct pointer is used values need to be accessed with -> instead of .
    printf("%s %s %u\n", car->brand, car->model, car->year);
}


int main()
{
    struct Car peugeot = {.brand = "Peugeot", .model = "106 Palm Beach", .year = 1995};
    struct Car opel = {.brand = "Opel", .model = "Corsa", .year = 2003};
    struct Car vw = {.brand = "Volkswagen", .model = "Golf Plus", .year = 2009};

    struct Car cars_owned[] = {peugeot, opel, vw};

    for (int i = 0; i < sizeof(cars_owned) / sizeof(cars_owned[0]); i++)
    {
        print_car(&cars_owned[i]); //send the memory adress to the function
    }
    return 0;
}