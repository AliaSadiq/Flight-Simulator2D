#ifndef POINT2D_H
#define POINT2D_H

class Point2D {
public:
    double x, y;
    Point2D(double x = 0, double y = 0);

    double distanceTo(const Point2D& other) const;
    void display() const;
};

#endif