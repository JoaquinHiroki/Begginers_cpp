#include <string>
#include <cmath>


#ifndef _POINT_H_
#define _POINT_H_


class Point {
    private:
        double x,y;
    public:
        Point(double _x = 0, double _y = 0);
        double get_x();
        void set_x(double);
        double get_y();
        void set_y(double);
        std::string as_string();
        double get_distance(Point);
        
};


#endif