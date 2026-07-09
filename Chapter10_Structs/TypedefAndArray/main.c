#include <stdio.h>
#include <stdint.h>

struct Car
{
    char brand[50];
    char model[50];
    uint16_t year;
};

typedef struct Car car_t; // give the struct a shorter alias instead of writing struct Car all the time

// typedef struct Car
// {
//     char brand[50];
//     char model[50];
//     uint16_t year;
// } car_t;
//
// different usage of typedef


void print_car(car_t *car)
{
    // when a struct pointer is used values need to be accessed with -> instead of .
    printf("%s %s %u\n", car->brand, car->model, car->year);
}


int main()
{
    car_t peugeot = {.brand = "Peugeot", .model = "106 Palm Beach", .year = 1995};
    car_t opel = {.brand = "Opel", .model = "Corsa", .year = 2003};
    car_t vw = {.brand = "Volkswagen", .model = "Golf Plus", .year = 2009};

    car_t cars_owned[] = {peugeot, opel, vw};

    for (int i = 0; i < sizeof(cars_owned) / sizeof(cars_owned[0]); i++)
    {
        print_car(&cars_owned[i]); //send the memory adress to the function
    }
    return 0;
}