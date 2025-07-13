#include "Plane2D.h"
#include <cmath>

const double PI = 3.14159265358979;

Plane2D::Plane2D(Point2D start, double s, double a)
    : Vehicle2D(start, s, a) {}

void Plane2D::update(double dt) {
    double rad = angle * PI / 180.0;
    pos.x += speed * cos(rad) * dt;
    pos.y += speed * sin(rad) * dt;
}
