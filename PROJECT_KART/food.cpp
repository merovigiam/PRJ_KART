#include "food.h"

Food::Food(string description, int weight, int foodValue) : Item(description)
{
    this->weightGrams = weight;
    this->foodValue = foodValue ;
}


void Food::setFoodValue(int value) {
    if(value > 0)
        foodValue = value;
}
