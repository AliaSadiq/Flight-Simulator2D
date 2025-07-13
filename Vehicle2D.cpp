#include "Vehicle2D.h"
#include <cmath>

const double PI = 3.14159265358979;

Vehicle2D::Vehicle2D(Point2D start, double s, double a)
    : pos(start), speed(s), angle(a) {}

void Vehicle2D::update(double dt) {
    double rad = angle * PI / 180.0;
    pos.x += speed * cos(rad) * dt;
    pos.y += speed * sin(rad) * dt;
}

Point2D Vehicle2D::getPosition() const {
    return pos;
}

Vehicle2D::~Vehicle2D() {}
