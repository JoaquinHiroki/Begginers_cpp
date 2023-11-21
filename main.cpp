#include <iostream>
#include "Point.h"
#include "Triangle.h"

using namespace std;

int main()
{
    Point a;
    Point b{1};
    Point c{-1, 7};
    
    Triangle t1 {a, b, c};
    Triangle t2;

    cout << "The perimeter is: " << t1.perimeter() << endl; 
    cout << "The area is: " << t1.area() << endl;
}