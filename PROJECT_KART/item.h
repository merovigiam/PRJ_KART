#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item
{
protected:
    string description;
    int id;
    string longDescription;
    int weightGrams;
    float value;
    static int idCounter;
public:

    Item() ;
    Item (string description, int inWeight, float inValue);
    Item (string description);
    //~Item() ; why this line was inserted?

    inline string getType() {
        return "item";
    }

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

};

#endif // ITEM_H
