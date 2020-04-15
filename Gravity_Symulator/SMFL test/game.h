#pragma once
#include<SFML\Graphics.hpp>
#pragma warning(disable : 4996)
#define back 1

class game
{
public:
	game(float szerokosc, float wysokosc);
	~game();
	int drawgame(sf::RenderWindow &window);

private:
	int select ;
	sf::Font font;
	sf::Text back_botom[back];
};

