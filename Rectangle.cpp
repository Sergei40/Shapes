#include "Rectangle.h"

Rectangle::Rectangle(double s1, double s2) :
    side1(s1), side2(s2)
{
    if (s1 == 0 || s2 == 0) throw "impossible value";
}

std::string Rectangle::getName() {
    return name;
}

void Rectangle::setPerimeter() {
    perimeter = (side1 + side2) * 2;
}

double Rectangle::getPerimeter() {
    return perimeter;
}

void Rectangle::setArea(){
    area = side1 * side2;
}

double Rectangle::getArea(){
    return area;
}

void Rectangle::draw() {

   sf::RenderWindow window(sf::VideoMode(200, 200), name);
    while (window.isOpen())
    {
      sf::Event event;
      while (window.pollEvent(event))
      {
          if (event.type == sf::Event::Closed)
              window.close();
      }
      sf::RectangleShape rectangle(sf::Vector2f(side1, side2));
      rectangle.setFillColor(sf::Color::Cyan);
      rectangle.setPosition(window.getSize().x / 2, window.getSize().y / 2);

      window.clear();
      window.draw(rectangle);
      window.display();
    }
}
