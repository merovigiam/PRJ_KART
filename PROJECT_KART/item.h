#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item
{
private:
    string description;
    int id;
    string longDescription;
    int weightGrams;
    bool edible;
    float value;
    bool weaponCheck;
    static int idCounter;
public:


    Item (string description, int inWeight, float inValue, bool edible);
    Item (string description);

    inline int getIdCounter() {
        idCounter++;
        return idCounter;
    }

    inline int getId() {
        return this->id;
    }

    inline string getDescription()
    {
        return description;
    }

    inline int getWeight(){
        return weightGrams;
    }

    inline void setWeight(int inWeightGrams) {
        //TODO: fix this
        //if (inWeightGrams > 9999 || inWeightGrams < 0)
//                   cout << "weight invalid, must be 0<weight<9999" ;
//        else
           weightGrams = inWeightGrams;
    }

    inline float getValue(){
        return value;
    }

    inline void setValue(float inValue){
        //TODO: Fix this
        //if (inValue > 9999 || inValue < 0)
           ////cout << "value invalid, must be 0<value<9999" ;
        //else
           value = inValue;
    }

    //int getWeaponCheck();
    //void setWeaponCheck(int weaponCheck);

    inline bool getEdible() {
        return this->edible;
    }

};

#endif // ITEM_H
