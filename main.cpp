#include <iostream>
#include "Triangle.h"
#include "Circle.h"
#include "Quadrilateral.h"
#include "Square.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    try {
        Rectangle rectangle(60, 40);
        rectangle.draw();
    }  catch (char const* error) {
        cerr << error << endl;
    }

    try {
        Square square(60);
        square.draw();
    }  catch (char const* error) {
        cerr << error << endl;
    }

    try {
        Quadrilateral quadr(Point (0, 0), Point(-20, 30),
                            Point(40, 50), Point(40, 0));
        quadr.draw();
    }  catch (char const* error) {
        cerr << error << endl;
    }

    try {
        Circle circle(50);
        circle.draw();
    }  catch (char const* error) {
        cerr << error << endl;
    }

    try {
        Triangle triangle(Point(-50, 0), Point(0, -80), Point(50, 0));
        triangle.draw();
        cout << triangle.getArea() << endl;
        cout << triangle.getPerimeter() << endl;
    }  catch (char const* error) {
        cerr << error << endl;
    }


    return 0;
}
