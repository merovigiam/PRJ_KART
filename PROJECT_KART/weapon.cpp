#include "weapon.h"

Weapon::Weapon(string description) : Item(description)
{
    //default is needed as Player class won't compile without this constructor as it has fields of type Weapon.
    //We should probably define some default behaviour in here.
}

Weapon::Weapon(string description, int power, int magicPower, bool isMain) : Item (description)
{
    this->power = power ;
    this->magicPower = magicPower ;
    this->isMain = isMain;
}

