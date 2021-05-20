#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape
{
public:
    Circle(double);
    ~Circle(){};

    virtual void draw();
    virtual std::string getName();
    virtual double getArea();
    double getCircumference();

private:
    void setArea();
    void setCircumference();

    const std::string name;
    const double radius;
    double area;
    double circumference;
};

#endif // CIRCLE_H
