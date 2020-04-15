
#include<SFML\Graphics.hpp>
#include "Mechanika.h"
#pragma once

#pragma warning(disable : 4996)


class Player :public Mechanika
{
public:
	
	sf::RectangleShape playerSprite;

	struct massCenter {
		float x;
		float y;

	};
	Player();
	~Player();
	void jump(float deltaTime);
	void playerMove(float deltaTime);
	massCenter getMassCenter();
};

