#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "item.h"

using namespace std;

class Inventory
{
private:
    vector<Item*> inv;

public:
    Inventory();

    inline void addItem(Item &item) {
        Item *temp ;
        *temp = item ;
        inv.push_back(temp);
    }

    inline void addItem(Item *item) {
        inv.push_back(item);
        delete item;
    }

    inline const vector<Item*> getInventoryListArray() {
        return inv;
    }

    inline int getSizeInv() {
        return inv.size();
    }

    string getInventoryList();

    Item *getItemAt(int index);

    Item removeItem(int index);

    inline int size()
    {
        return inv.size() ;
    }



};

#endif // INVENTORY_H
