#include "Point.h"
#include <cmath>

using namespace std;

Point::Point(double _x, double _y) 
    : x{_x}, y{_y} {}

double Point::get_x() {
    return x;
}

void Point::set_x(double _x) {
    x = _x;
}

double Point::get_y() {
    return y;
}

double Point::get_distance(Point p) {
    pow(p.get_x() - x, 2) + pow(p.get_y() - y, 2);
}

void Point::set_y(double _y) {
    y = _y;
}

string Point::as_string() {
    return "(" + to_string(x) + ", " + to_string(y) + ")";
}

