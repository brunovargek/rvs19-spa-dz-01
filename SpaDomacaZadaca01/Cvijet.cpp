#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow* window)
{
	this->window = window;
	//set_latica01(latica01);
	//set_latica02(latica02);
	//set_latica03(latica03);
	//set_latica04(latica04);
	//set_latica05(latica05);
	//set_latica06(latica06);
	set_tucak01(tucak01);
	set_tucak02(tucak02);

	sf::CircleShape temp_latica;
	
	int broj_latica = 6;
	float rotation = 20;
	for (size_t i = 0; i < broj_latica; i++)
	{
		
		temp_latica.setFillColor(sf::Color(242, 214, 83));
		temp_latica.setRadius(45.f);
		temp_latica.setPointCount(3);
		temp_latica.setRotation(rotation);
		temp_latica.setPosition(200, 150);
		temp_latica.setOrigin(45, 90);

		latice.push_back(temp_latica);
		rotation += 60;
	}
	set_stabljika(stabljika);
	set_list01(list01);
	set_list02(list02);
}

//void Cvijet::set_latica01(sf::CircleShape& latica01)
//{
//	this->latica01.setFillColor(sf::Color(252, 186, 3));
//	this->latica01.setRadius(45.f);
//	this->latica01.setPointCount(3);
//	this->latica01.setRotation(0);
//	this->latica01.setPosition(200, 150);
//	this->latica01.setOrigin(45, 90);
//}
//
//sf::CircleShape Cvijet::get_latica01()
//{
//	return latica01;
//}
//
//void Cvijet::set_latica02(sf::CircleShape& latica02)
//{
//	this->latica02.setFillColor(sf::Color(252, 186, 3));
//	this->latica02.setRadius(45.f);
//	this->latica02.setPointCount(3);
//	this->latica02.setRotation(60);
//	this->latica02.setPosition(200, 150);
//	this->latica02.setOrigin(45, 90);
//}
//
//sf::CircleShape Cvijet::get_latica02()
//{
//	return latica02;
//}
//
//void Cvijet::set_latica03(sf::CircleShape& latica03)
//{
//	this->latica03.setFillColor(sf::Color(252, 186, 3));
//	this->latica03.setRadius(45.f);
//	this->latica03.setPointCount(3);
//	this->latica03.setRotation(120);
//	this->latica03.setPosition(200, 150);
//	this->latica03.setOrigin(45, 90);
//
//}
//
//sf::CircleShape Cvijet::get_latica03()
//{
//	return latica03;
//}
//
//void Cvijet::set_latica04(sf::CircleShape& latica04)
//{
//	this->latica04.setFillColor(sf::Color(252, 186, 3));
//	this->latica04.setRadius(45.f);
//	this->latica04.setPointCount(3);
//	this->latica04.setRotation(180);
//	this->latica04.setPosition(200, 150);
//	this->latica04.setOrigin(45, 90);
//}
//
//sf::CircleShape Cvijet::get_latica04()
//{
//	return latica04;
//}
//
//void Cvijet::set_latica05(sf::CircleShape& latica05)
//{
//	this->latica05.setFillColor(sf::Color(252, 186, 3));
//	this->latica05.setRadius(45.f);
//	this->latica05.setPointCount(3);
//	this->latica05.setRotation(240);
//	this->latica05.setPosition(200, 150);
//	this->latica05.setOrigin(45, 90);
//}
//
//sf::CircleShape Cvijet::get_latica05()
//{
//	return latica05;
//}
//
//void Cvijet::set_latica06(sf::CircleShape& latica06)
//{
//	this->latica06 = latica06;
//	latica06.setFillColor(sf::Color(252, 186, 3));
//	latica06.setRadius(45.f);
//	latica06.setPointCount(3);
//	latica06.setRotation(300);
//	latica06.setPosition(200, 150);
//	latica06.setOrigin(45, 90);
//}
//
//sf::CircleShape Cvijet::get_latica06()
//{
//	return latica06;
//}

void Cvijet::set_tucak01(sf::CircleShape& tucak01)
{
	this->tucak01.setFillColor(sf::Color(235, 140, 30));
	this->tucak01.setRadius(30.f);
	this->tucak01.setPosition(170, 120);

}

sf::CircleShape Cvijet::get_tucak01()
{
	return tucak01;
}

void Cvijet::set_tucak02(sf::CircleShape& tucak02)
{
	this->tucak02.setFillColor(sf::Color(255, 180, 60));
	this->tucak02.setRadius(20.f);
	this->tucak02.setPosition(180, 130);
}

sf::CircleShape Cvijet::get_tucak02()
{
	return tucak02;
}

void Cvijet::set_stabljika(sf::RectangleShape &stabljika)
{
	this->stabljika.setFillColor(sf::Color(85, 140, 60));
	this->stabljika.setSize(sf::Vector2f(10.f, 200.f));
	this->stabljika.setPosition(200.f, 200.f);
}

sf::RectangleShape Cvijet::get_stabljika()
{
	return stabljika;
}

void Cvijet::set_list01(sf::CircleShape& list01)
{
	this->list01.setFillColor(sf::Color(85, 140, 60));
	this->list01.setRadius(40.f);
	this->list01.setPointCount(3);
	this->list01.setPosition(160.f, 300.f);
}

sf::CircleShape Cvijet::get_list01()
{
	return list01;
}

void Cvijet::set_list02(sf::CircleShape& list02)
{
	this->list02.setFillColor(sf::Color(85, 140, 60));
	this->list02.setRadius(30.f);
	this->list02.setPointCount(3);
	this->list02.setScale(2, 2.f);
	this->list02.setRotation(30.f);
	this->list02.setPosition(145.f, 310.f);
}

sf::CircleShape Cvijet::get_list02()
{
	return sf::CircleShape();
}




void Cvijet::draw()
{
	/*window->draw(latica01);
	window->draw(latica02);
	window->draw(latica03);
	window->draw(latica04);
	window->draw(latica05);
	window->draw(latica06);*/

	window->draw(stabljika);

	for (int i = 0; i < latice.size(); i++)
	{
		window->draw(latice[i]);
	}
	window->draw(tucak01);
	window->draw(tucak02);
	window->draw(list01);
	window->draw(list02);
	
}
