#include <stdio.h>

enum Beverage
{
    NONE,
    WATER,
    COLA,
    FANTA,
    SPRITE,
    BEER
};

int main()
{
    enum Beverage selected_beverage = NONE;
    printf("Select a beverage:\nWater(1), Cola(2), Fanta(3), Sprite(4), Beer(5): ");
    scanf("%d", &selected_beverage);
    printf("You selected %d\n", selected_beverage);
    return 0;
}
