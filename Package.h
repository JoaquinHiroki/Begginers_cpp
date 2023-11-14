#include <string>
#include "Destination.h"

using namespace std;


#ifndef _PACKAGE_H_
#define _PACKAGE_H


class Package {
    private:
        float weight, x, y, z;
        Destination destination;
        string collection_time;
    public:
        float get_weight();
        void set_weight(float);
        float get_x();
        void set_x(float);
        float get_y();
        void set_y(float);
        float get_z();
        void set_z(float);
        Destination get_destination();
        void set_destination(Destination);
        string get_collection_time();
        void set_colection_time();
        void print_label();
};

#endif

