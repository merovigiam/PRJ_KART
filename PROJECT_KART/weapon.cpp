#include "weapon.h"

Weapon::Weapon()
{
    //default is needed as Player class won't compile without this constructor as it has fields of type Weapon.
    //We should probably define some default behaviour in here.
}

Weapon::Weapon(int power, int magicPower, bool isMainHand)
{
    this->power = power ;
    this->magicPower = magicPower ;
    this->mainHand = isMainHand ;
}

bool Weapon::isMainHand()
{
    return this->mainHand ;
}
