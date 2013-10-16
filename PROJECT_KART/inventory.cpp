#include "inventory.h"

Inventory::Inventory()
{
}

string Inventory::getInventoryList(){
    int size = inv.size();
    string output = "";

    for(int i=0;i<size;i++) {
        if(i != (size-1))
            output = output + inv[i].getDescription() + ",";
        else
            output = output + inv[i].getDescription();
    }
    return output;
}

Item Inventory::getItemAt(int index){
    int size = inv.size();
    Item item("null");
    if(index < size)
        return inv[index];
    else
        return item;

}

Item Inventory::removeItem(int index){
    int i = 0, size = inv.size();
    Item item("null");
    if(index < size) {
        Item output = inv[index];
        inv.erase(inv.begin()+index);
        return output;
    }
    else
        return item;

}


