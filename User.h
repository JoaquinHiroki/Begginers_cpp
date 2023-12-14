#ifndef USER_H
#define USER_H

#include "Order.h"
#include <vector>

using namespace std;

class User {
private:
    int userId;
    string name;

public:
    vector<Order> viewOrders();
};

#endif 
