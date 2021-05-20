#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Quadrilateral.h"

class Rectangle : public Quadrilateral
{
public:
    Rectangle(double, double);
    virtual ~Rectangle() {};

    virtual void draw();
    virtual std::string getName();
    virtual double getArea();
    virtual double getPerimeter();

private:
    void setPerimeter();
    void setArea();

    const std::string name;
    double area;
    double perimeter;
    double side1, side2;
};

#endif // RECTANGLE_H
