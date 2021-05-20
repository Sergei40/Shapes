#ifndef SQUARE_H
#define SQUARE_H

#include "Quadrilateral.h"

#define SIDE_COUNT 4;

class Square : public Quadrilateral
{
public:
    Square(double);
    virtual ~Square() {};

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
    double side;
};

#endif // SQUARE_H
