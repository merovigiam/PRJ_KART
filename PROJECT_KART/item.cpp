#include "item.h"

int Item::idCounter = 0;

Item::Item() {
    //If I understand correctly, any attempt to use a vector vector<T> will only not
    //throw compile errors if and only if the class T has a default constructor, so
    //this constructor here is a placeholder. Should we keep it like this? Or should we have a constructor
    //of Item with all default arguments maybe? If keeping this what will we put in it?
}

Item::Item (string description) {
    this->description = description;
}

Item::Item (string inDescription, int inWeightGrams, float inValue/**, int weaponCheck*/) {
    id = getIdCounter();
    description = inDescription;
    setWeight(inWeightGrams);
    value = inValue;
    /**weaponCheck(isWeapon);*/
}
