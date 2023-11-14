#include <string>

using namespace std;


#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_


class Customer {
    private:
        string name, address, phone;
        //Package
    public:
        string get_name();
        void set_name(string);
        string get_address();
        void set_address(string);
        string get_phone();
        void set_phone(string);

};

#endif