#ifndef WEAPON_H
#define WEAPON_H
#include "item.h"

class Weapon : public Item
{
public:
    Weapon(string description) ;
    Weapon(string description, int power, int magicPower, bool isMain) ;
    inline int getPower() {
        return power;
    }

    inline int getMagicPower() {
        return magicPower;
    }

    inline string getType() {
        return "weapon";
    }

private:
    int power, magicPower ;
    bool isMain;

};

#endif // WEAPON_H
