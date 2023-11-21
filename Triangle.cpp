#include "Triangle.h"

Triangle::Triangle(Point a, Point b, Point c) 
    : vertex1 {a}, vertex2 {b}, vertex3 {c} {}

Triangle::Triangle()
    : Triangle(Point{-1, 0}, Point{0, 1}, Point{1, 0}) {}

double Triangle::perimeter() {
    return vertex1.get_distance(vertex2) + vertex2.get_distance(vertex3) + vertex3.get_distance(vertex1);
}

double Triangle::area() {
    return abs( 0.5 * (vertex1.get_x())*(vertex2.get_y() - vertex3.get_y()) + vertex2.get_x() * (vertex3.get_y()) - vertex1.get_y() + vertex3.get_x() * (vertex1.get_y()) - vertex2.get_y());
}

string Triangle::as_string() {
    return vertex1.as_string() + ", " + vertex2.as_string() + ", " + vertex3.as_string();
}