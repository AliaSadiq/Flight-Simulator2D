#include <iostream>
#include <cmath>
#include "Point2D.h"
using namespace std;

Point2D::Point2D(double x, double y) : x(x), y(y) {}

double Point2D::distanceTo(const Point2D& other) const {
    return sqrt((x - other.x)*(x - other.x) + (y - other.y)*(y - other.y));
}

void Point2D::display() const {
    cout << "Position  of X: " << x << ", Y: " << y << endl;
}
