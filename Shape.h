#ifndef SHAPE_H
#define SHAPE_H
#define _USE_MATH_DEFINES
#include <string>
#include <cmath>
#include <SFML/Graphics.hpp>

class Shape
{
public:
    virtual void draw() = 0;
    virtual std::string getName() = 0;
    virtual double getArea() = 0;
    virtual ~Shape() {};
};


#endif // SHAPE_H
