#include "weapon.h"

Weapon::Weapon()
{
    //default is needed as Player class won't compile without this constructor as it has fields of type Weapon.
    //We should probably define some default behaviour in here.
}

Weapon::Weapon(int power, int magicPower)
{
    this->power = power ;
    this->magicPower = magicPower ;
}

