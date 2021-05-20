#include "Triangle.h"

Triangle::Triangle(Point p1, Point p2, Point p3):
    name("Triangle"), point1(p1), point2(p2), point3(p3)
{
    setArea();
    if (area <= 0) throw  "Triangle is degenerate or does not exist";
    setPerimeter();
}

std::string Triangle::getName(){
    return name;
}

void Triangle::setPerimeter(){
    side1 = sqrt(pow(point2.first - point1.first, 2) +
                 pow(point2.second - point1.second, 2));

    side2 = sqrt(pow(point3.first - point2.first, 2) +
                 pow(point3.second - point2.second, 2));

    side3 = sqrt(pow(point1.first - point3.first, 2) +
                 pow(point1.second - point3.second, 2));

    perimeter = side1 + side2 + side3;
}

double Triangle::getPerimeter(){
    return perimeter;
}

void Triangle::setArea(){
    double p = this->getPerimeter() / 2;
    area = sqrt(p * (p - side1) * (p - side2) * (p - side3));
}

double Triangle::getArea(){
    return area;
}

void Triangle::draw() {
    sf::RenderWindow window(sf::VideoMode(200, 200), name);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        sf::ConvexShape triangle;
        triangle.setPointCount(3);

        triangle.setPoint(0, sf::Vector2f(point1.first, point1.second));
        triangle.setPoint(1, sf::Vector2f(point2.first, point2.second));
        triangle.setPoint(2, sf::Vector2f(point3.first, point3.second));

        triangle.setFillColor(sf::Color::Red);
        triangle.setPosition(window.getSize().x / 2, window.getSize().y / 2);
        window.clear();
        window.draw(triangle);
        window.display();
    }
}

