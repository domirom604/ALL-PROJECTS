#include "Player2.h"
#include "Mechanika.h"
#include "Data.h"


Player2::Player2()
{
	player2Sprite.setSize(sf::Vector2f(50, 50));
	player2Sprite.setFillColor(sf::Color::Yellow);
	player2Sprite.setPosition(512 - 250, 550);
}
Player2::massCenter2 Player2::getMassCenter2()
{
	massCenter2 mc;
	mc.a = player2Sprite.getPosition().x + (player2Sprite.getSize().x / 2);
	mc.b = player2Sprite.getPosition().y + (player2Sprite.getSize().y / 2);

	return mc;
}

Player2::~Player2()
{
}


void Player2::jump2(float deltaTime2)
{
	Data date;
	speedValue2 -= date.gravityAcceleration2*deltaTime2;
	player2Sprite.move(0, -speedValue2);

}

void Player2::playerMove2(float deltaTime2)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		player2Sprite.move(200 * deltaTime2, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		player2Sprite.move(-200 * deltaTime2, 0);
	}
}