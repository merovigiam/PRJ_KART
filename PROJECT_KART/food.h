#ifndef FOOD_H
#define FOOD_H
#include "item.h"

class Food : public Item
{
public:
    Food(int foodValue = 0);
    int getFoodValue() ;

private:
    int foodValue ;
};

#endif // FOOD_H
