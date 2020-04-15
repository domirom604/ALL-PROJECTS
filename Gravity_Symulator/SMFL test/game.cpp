#include "game.h"
#pragma warning(disable : 4996)

using namespace sf;


game::game(float szerokosc, float wysokosc)
{
	if (!font.loadFromFile("arial.ttf"))
	{


	}
	
	back_botom[0].setFont(font);
	back_botom[0].setColor(sf::Color::Red);
	back_botom[0].setString("Press <- to back ");
	back_botom[0].setPosition(sf::Vector2f(szerokosc - 570, wysokosc -40 ));
	
}


game::~game()
{
}



int game::drawgame(sf::RenderWindow &window)
{

	for (int i = 0; i < back; i++)
	{
		window.draw(back_botom[i]);
	}
	
	
	
	return 0;

}