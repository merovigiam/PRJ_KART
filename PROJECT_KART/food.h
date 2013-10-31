#ifndef FOOD_H
#define FOOD_H
#include "item.h"

class Food : public Item
{
public:
    Food(string description, int foodValue = 0);
    inline int getFoodValue() {
        return foodValue;
    }

    void setFoodValue(int value);

    inline string getType() {
        return "food";
    }

private:
    int foodValue ;
};

#endif // FOOD_H