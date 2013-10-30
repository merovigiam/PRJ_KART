#ifndef WEAPON_H
#define WEAPON_H
#include "item.h"

class Weapon : public Item
{
public:
    Weapon() ;
    Weapon(int power, int magicPower);
    inline int getPower() {
        return power;
    }

    inline int getMagicPower() {
        return magicPower;
    }


private:
    int power, magicPower ;

};

#endif // WEAPON_H
