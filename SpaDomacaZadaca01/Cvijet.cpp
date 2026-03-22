#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow* window)
{
    set_triangle01(triangle01);
    set_triangle02(triangle02);
    this->window = window;
}

void Cvijet::set_triangle01(sf::CircleShape& triangle01)
{
    this->triangle01.setFillColor(sf::Color(252, 186, 3));
    this->triangle01.setRadius(150.0f);
    this->triangle01.setPointCount(3);
    this->triangle01.move(100, 20);
}

sf::CircleShape Cvijet::get_triangle01()
{
    return triangle01;
}
void Cvijet::set_triangle02(sf::CircleShape& triangle02)
{
    this->triangle02.setFillColor(sf::Color(2, 186, 153));
    this->triangle02.setRadius(72.0f);
    this->triangle02.setPointCount(3);
    this->triangle02.move(270, 200);
}

sf::CircleShape Cvijet::get_triangle02()
{
    return triangle02;
}

void Cvijet::set_rectangle(sf::CircleShape& rectangle)
{
}

sf::CircleShape Cvijet::get_rectangle()
{
    return sf::CircleShape();
}

void Cvijet::set_square(sf::CircleShape& square)
{
}

sf::CircleShape Cvijet::get_square()
{
    return sf::CircleShape();
}

void Cvijet::set_circle(sf::CircleShape& circle)
{
}

sf::CircleShape Cvijet::get_circle()
{
    return sf::CircleShape();
}

void Cvijet::set_octagone(sf::CircleShape& octagone)
{
}

sf::CircleShape Cvijet::get_octagone()
{
    return sf::CircleShape();
}

void Cvijet::set_line(sf::RectangleShape& line)
{
}

sf::RectangleShape Cvijet::get_line()
{
    return sf::RectangleShape();
}

void Cvijet::draw()
{
    window->draw(get_triangle01());
    window->draw(get_triangle02());
}
