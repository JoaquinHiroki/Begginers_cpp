#include <string>
#include "Package.h"

using namespace std;
void Package :: set_weight(float) {}
float Package:: get_x() {
    return 0.0f;
} 
void Package::set_x(float) {}
float Package::get_y() {
    return 0.0f;
}
void Package::set_z(float) {}
Destination Package::get_destination() {
    return Destination();
}
void Package:: set_destination(Destination) {;}
string Package::get_collection_time() {
    return string();
}
void Package::set_colection_time() {}
void Package::print_label() {}



