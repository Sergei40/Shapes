#include "Circle.h"

Circle::Circle(double radius1):
    name("Circle"), radius(radius1)
{
    if (radius <= 0) throw "impossible value";
    setArea();
    setCircumference();
}

std::string Circle::getName() {
    return name;
}

void Circle::setCircumference() {
    circumference = 2 * M_PI * radius;
}

double Circle::getCircumference() {
    return circumference;
}

void Circle::setArea(){
    area = M_PI * radius * radius;
}

double Circle::getArea(){
    return area;
}

void Circle::draw() {
    sf::RenderWindow window(sf::VideoMode(200, 200), name);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        sf::CircleShape circle(radius);
        circle.setFillColor(sf::Color::Green);
        circle.setPosition(window.getSize().x / 2, window.getSize().y / 2);
        circle.setOrigin(circle.getRadius(), circle.getRadius());

        window.clear();
        window.draw(circle);
        window.display();
    }
}
