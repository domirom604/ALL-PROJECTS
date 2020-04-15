#pragma once
#include<SFML\Graphics.hpp>
#include "Mechanika.h"


#pragma warning(disable : 4996)
class Player2 :public Mechanika
{
public:

	sf::RectangleShape player2Sprite;

	struct massCenter2 {
		float a;
		float b;

	};
	Player2();
	~Player2();
	void jump2(float deltaTime2);
	void playerMove2(float deltaTime2);
	massCenter2 getMassCenter2();
};

