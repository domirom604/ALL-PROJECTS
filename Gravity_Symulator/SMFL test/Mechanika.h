#pragma once
#include<SFML\Graphics.hpp>
#pragma warning(disable : 4996)
class Mechanika
{
public:
	Mechanika();
	float mass = 0;
	float speedValue = 0;

	float accelerationValue = 0;


	float mass2 = 0;
	float speedValue2 = 0;

	float accelerationValue2 = 0;
	
	~Mechanika();
};

