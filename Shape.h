#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <cmath>
#include <SFML/Graphics.hpp>

class Shape
{
public:
    Shape() {};
    virtual ~Shape() {};

    virtual void draw() = 0;
    virtual std::string getName() = 0;
    virtual double getArea() = 0;
};

#endif // SHAPE_H
