#ifndef VEHICLE2D_H
#define VEHICLE2D_H

#include "Point2D.h"

class Vehicle2D {
protected:
    Point2D pos;
    double speed;
    double angle;

public:
    Vehicle2D(Point2D start, double s, double a);
    virtual void update(double dt);
    virtual Point2D getPosition() const;
    virtual ~Vehicle2D();
};

#endif
