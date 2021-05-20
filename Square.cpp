#include "Square.h"

Square::Square(double s) :
    name("Square"), side(s)
{
    if (side <= 0) throw "impossible value";
    setArea();
    setPerimeter();
}

std::string Square::getName() {
    return name;
}

void Square::setPerimeter() {
    perimeter = side * SIDE_COUNT;
}

double Square::getPerimeter() {
    return perimeter;
}

void Square::setArea(){
    area = pow(side, 2);
}

double Square::getArea(){
    return area;
}

void Square::draw() {
    sf::RenderWindow window(sf::VideoMode(200, 200), name);
    while (window.isOpen())
    {
      sf::Event event;
      while (window.pollEvent(event))
      {
          if (event.type == sf::Event::Closed)
              window.close();
      }
      float radius = side / sqrt(2);
      sf::CircleShape square(radius, 4);
      square.setFillColor(sf::Color::Yellow);
      square.setPosition(window.getSize().x / 2, window.getSize().y / 2);
      square.setOrigin(square.getRadius(), square.getRadius());

      window.clear();
      window.draw(square);
      window.display();
    }
}
