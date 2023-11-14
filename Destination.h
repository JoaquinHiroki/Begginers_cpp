#include <string>

using namespace std;


#ifndef _DESTINATION_H_
#define _DESTINATION_H_


class Destination {
    private:
        string recipient_name, phone, address;
        //Package
    public:
        string get_recipient_name();
        void set_recipient_name(string);
        string get_address();
        void set_address(string);
        string get_phone();
        void set_phone(string);

};

#endif