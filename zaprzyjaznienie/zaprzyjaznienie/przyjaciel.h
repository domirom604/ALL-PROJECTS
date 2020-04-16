#include <iostream>
using namespace std;
#pragma once

class prostokat;

class punkt
{
	string nazwa;
	float x, y;
	


public:
	punkt(string= "A", float=0, float=0);
	void wczytaj();
	void wyswietl();
	friend void sprawdzczynalezy(punkt pkt, prostokat p);
};

class prostokat
{
	string nazwa;
	float x, y;
	float szerokosc, wysokosc;



public:

	prostokat(string= "brak", float = 0, float = 0, float = 1, float = 1);

	void wczytaj();
	void show();
	friend void sprawdzczynalezy(punkt pkt, prostokat p);
};