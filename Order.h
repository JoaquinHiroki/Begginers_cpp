#ifndef _ORDER_H_
#define _ORDER_H_

#include "Item.h" 

class Order {
public:
    float getTotalAmount();
    void addItem(Item item);

};

#endif
