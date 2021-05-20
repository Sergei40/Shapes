#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "Shape.h"

typedef std::pair<float, float> Point;

class Quadrilateral : public Shape
{
public:
    Quadrilateral() {};
    Quadrilateral(Point, Point, Point, Point);
    virtual ~Quadrilateral() {};

    virtual void draw();
    virtual std::string getName();
    virtual double getArea();
    virtual double getPerimeter();

private:
    void setPerimeter();
    void setArea();

    const std::string name;
    const Point point1, point2, point3, point4;
    double area;
    double perimeter;
    double side1, side2, side3, side4;
};

#endif // QUADRILATERAL_H
