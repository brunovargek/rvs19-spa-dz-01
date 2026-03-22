#pragma once
#include <SFML/Graphics.hpp>

//using namespace std;
class Cvijet
{
private:
	sf::RenderWindow *window;
	sf::CircleShape triangle01;
	sf::CircleShape triangle02;
	sf::CircleShape rectangle;
	sf::CircleShape square;
	sf::CircleShape circle;
	sf::CircleShape octagone;
	sf::RectangleShape line;

public:
	Cvijet(sf::RenderWindow *window);

	void set_triangle01(sf::CircleShape &triangle01);
	sf::CircleShape get_triangle01();

	void set_triangle02(sf::CircleShape &triangle02);
	sf::CircleShape get_triangle02();

	void set_rectangle(sf::CircleShape& rectangle);
	sf::CircleShape get_rectangle();

	void set_square(sf::CircleShape& square);
	sf::CircleShape get_square();

	void set_circle(sf::CircleShape& circle);
	sf::CircleShape get_circle();

	void set_octagone(sf::CircleShape& octagone);
	sf::CircleShape get_octagone();

	void set_line(sf::RectangleShape& line);
	sf::RectangleShape get_line();

	void draw();
};

