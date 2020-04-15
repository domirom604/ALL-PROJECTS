#pragma once
#include<SFML\Graphics.hpp>
#pragma warning(disable : 4996)
class Data
{
public:
	Data();
	float gravityAcceleration = 27;
	float jumpF = 400;
	float gravityAcceleration2 = 27;
	float jumpF2 = 400;
	~Data();
};

