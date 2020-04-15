#include "Menu.h"
#include "Player.h"
#include "Mechanika.h"
#include "Data.h"
#pragma warning(disable : 4996)

using namespace sf;

Menu::Menu(float szerokosc, float wysokosc)
{
	
	if (!font.loadFromFile("arial.ttf"))
	{
		//wyjatek - throw "";
	}

	menu[0].setFont(font);
	menu[0].setColor(sf::Color::Red);
	menu[0].setString("Play");
	menu[0].setPosition(sf::Vector2f((szerokosc /2 )-30, wysokosc / (MAX_NUMBER_OF_ITEMS+1) * 1));
	selectedItemIndex = 0;
	
	menu[1].setFont(font);
	menu[1].setColor(Color::White);
	menu[1].setString("Exit");
	menu[1].setPosition(sf::Vector2f((szerokosc / 2) - 30, wysokosc / (MAX_NUMBER_OF_ITEMS + 1) * 2));

	selectedItemIndex=0;
}


Menu::~Menu()
{
}


void Menu::draw(sf::RenderWindow &window)
{
	for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++)
	{
		window.draw(menu[i]);
	}
	
}

void Menu::moveUp()
{
	if (selectedItemIndex -1 >= 0)
	{
		menu[selectedItemIndex].setColor(Color::White);
		selectedItemIndex--;
		menu[selectedItemIndex].setColor(Color::Red);

	}

}

void Menu::moveDown()
{
	if (selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS )
	{
		menu[selectedItemIndex].setColor(Color::White);
		selectedItemIndex++;
		menu[selectedItemIndex].setColor(Color::Red);

	}

}