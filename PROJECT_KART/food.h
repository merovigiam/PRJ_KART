#ifndef FOOD_H
#define FOOD_H
#include "item.h"
#include <string>

using namespace std;
class Food : public Item
{
public:
    Food(string description, int weight, int foodValue);
    Food(string description) ;
    inline int getFoodValue() {
        return foodValue;
    }

    void setFoodValue(int value);

    inline string getType() {
        return "food";
    }
    //virtual inline void func()
    //{ }

private:
    int foodValue ;
};

#endif // FOOD_H
