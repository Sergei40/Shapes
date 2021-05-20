#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include <utility>

typedef std::pair<float, float> Point;

class Triangle : public Shape
{
public:
    Triangle(Point, Point, Point);
    ~Triangle() {};

    virtual void draw();
    virtual std::string getName();
    virtual double getArea();
    double getPerimeter();

private:
    void setPerimeter();
    void setArea();

    const std::string name;
    const Point point1, point2, point3;
    double area;
    double perimeter;
    double side1, side2, side3;
};

#endif // TRIANGLE_H
