#include "food.h"

Food::Food(int foodValue)
{
    this->foodValue = foodValue ;
}

int Food::getFoodValue()
{
    return this->foodValue ;
}

void Food::setFoodValue(int value) {
    foodValue = value;
}
