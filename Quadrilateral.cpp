#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(Point p1, Point p2, Point p3, Point p4) :
    name("Quadrilateral"), point1(p1), point2(p2), point3(p3), point4(p4)
{
    this->setArea();
    if(area <= 0) throw "the quadrilateral does not exist";
    this->setPerimeter();
}

std::string Quadrilateral::getName(){
    return name;
}

void Quadrilateral::setPerimeter(){
    side1 = sqrt(pow(point2.first - point1.first, 2) +
                 pow(point2.second - point1.second, 2));

    side2 = sqrt(pow(point3.first - point2.first, 2) +
                 pow(point3.second - point2.second, 2));

    side3 = sqrt(pow(point4.first - point3.first, 2) +
                 pow(point4.second - point3.second, 2));

    side3 = sqrt(pow(point1.first - point4.first, 2) +
                 pow(point1.second - point4.second, 2));

    perimeter = side1 + side2 + side3 + side4;
}

double Quadrilateral::getPerimeter(){
    return perimeter;
}

void Quadrilateral::setArea(){
// Gauss area formula
     area = 0.5 * std::abs((point1.first * point2.second) +
                  (point2.first * point3.second) +
                  (point3.first * point4.second) +
                  (point4.first * point1.second) -
                  (point2.first * point1.second) -
                  (point3.first * point2.second) -
                  (point4.first * point3.second) -
                  (point1.first * point4.second));
}

double Quadrilateral::getArea(){
    return area;
}

void Quadrilateral::draw() {
    sf::RenderWindow window(sf::VideoMode(200, 200), name);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        sf::ConvexShape Quadrilateral;
        Quadrilateral.setPointCount(4);

        Quadrilateral.setPoint(0, sf::Vector2f(point1.first, point1.second));
        Quadrilateral.setPoint(1, sf::Vector2f(point2.first, point2.second));
        Quadrilateral.setPoint(2, sf::Vector2f(point3.first, point3.second));
        Quadrilateral.setPoint(3, sf::Vector2f(point4.first, point4.second));

        Quadrilateral.setFillColor(sf::Color::Blue);
        Quadrilateral.setPosition(window.getSize().x / 2, window.getSize().y / 2);
        window.clear();
        window.draw(Quadrilateral);
        window.display();
    }
}
