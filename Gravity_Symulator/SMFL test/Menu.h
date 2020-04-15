#pragma once
#include<SFML\Graphics.hpp>
#pragma warning(disable : 4996)

#define MAX_NUMBER_OF_ITEMS 2

class Menu
{
public:
	Menu(float szerokosc, float wysokosc);
	~Menu();
	void draw(sf::RenderWindow &window);
	void moveUp();
	void moveDown();
	int GetPressedItem () { return selectedItemIndex; }
	
private :
	int selectedItemIndex;
	sf::Font font;
	sf::Text menu[MAX_NUMBER_OF_ITEMS];
};

