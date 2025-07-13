
#ifndef PLANE2D_H
#define PLANE2D_H

#include "Vehicle2D.h"

class Plane2D : public Vehicle2D {
public:
    Plane2D(Point2D start, double s, double a);
    void update(double dt) override;
};

#endif
