#ifndef ROOM_H_
#define ROOM_H_

#include <map>
#include <string>
#include <vector>
#include "inventory.h"

using namespace std;
using std::vector;

class Room {

private:
	string description;
    map<string, Room*> exits;
	string exitString();
     Inventory *itemsInRoom;
    int number;

public:
    inline void setNumber(int number) {
        this->number = number;
    }

    inline int getNumber() {
        return this->number;
    }

    int numberOfItems();
    Room(string description = "Empty boring room");

	void setExits(Room *north, Room *east, Room *south, Room *west);
	string shortDescription();
	string longDescription();
	Room* nextRoom(string direction);
    void addItem(Item *inItem);
    string displayItem();
    int isItemInRoom(string inString);
    void removeItemFromRoom(int location);
    inline Inventory* getInventory() {
        return itemsInRoom;
    }

    
};

#endif
