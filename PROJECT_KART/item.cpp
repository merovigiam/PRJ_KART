#include "item.h"

int Item::idCounter = 0;

Item::Item (string description) {
    this->description = description;
}

Item::Item (string inDescription, int inWeightGrams, float inValue, bool edible/**, int weaponCheck*/) {
    id = getIdCounter();
    description = inDescription;
    setWeight(inWeightGrams);
    value = inValue;
    this->edible = edible;
    /**weaponCheck(isWeapon);*/
}
