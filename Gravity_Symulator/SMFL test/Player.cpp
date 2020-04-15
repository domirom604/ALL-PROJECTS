#include "Player.h"
#include "Mechanika.h"
#include "Data.h"


Player::Player()
{
	playerSprite.setSize(sf::Vector2f(50, 50));
	playerSprite.setFillColor(sf::Color::Red);
	playerSprite.setPosition(512 + 125, 550);
}
Player::massCenter Player::getMassCenter()
{
	massCenter mc;
	mc.x = playerSprite.getPosition().x + (playerSprite.getSize().x / 2);
	mc.y = playerSprite.getPosition().y + (playerSprite.getSize().y / 2);

	return mc;
}

Player::~Player()
{
}


void Player::jump(float deltaTime)
{
	Data date;
	speedValue -= date.gravityAcceleration*deltaTime;
	playerSprite.move(0, -speedValue);

}

void Player::playerMove(float deltaTime)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		playerSprite.move(200 * deltaTime, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		playerSprite.move(-200 * deltaTime, 0);
	}
}