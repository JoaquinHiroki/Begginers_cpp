#ifndef PAYMENT_METHOD_H
#define PAYMENT_METHOD_H

#include <string>

using namespace std;

class PaymentMethod {
private:
   string methodType;

public:
    bool processPayment(float amount);
};

#endif 
