#include "Point.h"

#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

using namespace std;


class Triangle {
    private:
        Point vertex1, vertex2, vertex3;
    public:
        Triangle(Point, Point, Point);
        Triangle();
        double perimeter();
        double area();
        string as_string();
};

#endif 