#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "inventory.h"
using namespace std;

class Player
{
private:
    string name;
    Inventory inv;
public:
    Player();
};

#endif // PLAYER_H
