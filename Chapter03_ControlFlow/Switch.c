#include <stdio.h>

enum Beverage
{
    BEVERAGE_NONE,
    BEVERAGE_WATER,
    BEVERAGE_COLA,
    BEVERAGE_FANTA,
    BEVERAGE_SPRITE,
    BEVERAGE_BEER
};

enum CaffeineBeverage
{
    CAFFEINEBEVERAGE_COLA,
    CAFFEINEBEVERAGE_COFFEE
};

// Enum entrys need to be unique across multiple enums!
// Add a prefix before the name to make it unique

int main()
{
    enum Beverage selected_beverage = BEVERAGE_NONE;
    printf("Select a beverage:\nWater(1), Cola(2), Fanta(3), Sprite(4), Beer(5): ");
    scanf("%d", &selected_beverage);

    switch (selected_beverage)
    {
    case BEVERAGE_WATER:
        printf("You selected Water\n");
        break;
    case BEVERAGE_COLA:
        printf("You selected Cola\n");
        break;
    case BEVERAGE_FANTA:
        printf("You selected Fantar\n");
        break;
    case BEVERAGE_SPRITE:
        printf("You selected Sprite\n");
        break;
    case BEVERAGE_BEER:
        printf("You selected BEER\n");
        break;
    default:
        printf("You selected None\n");
        break;
    }


    return 0;
}
