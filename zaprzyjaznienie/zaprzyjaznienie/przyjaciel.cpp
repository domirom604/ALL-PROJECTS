#include "przyjaciel.h"

#include <string>
#include <iostream>
#include <cstdlib>

#include <fstream>
using namespace std;


punkt::punkt(string n,float xx,float yy)
{
	nazwa = n;
	x = xx;
	y = yy;

}

prostokat::prostokat(string n, float xx, float yy, float s, float w)
{
	nazwa = n;
	x = xx;
	y = yy;
	szerokosc = s;
	wysokosc= w;

}

void punkt::wczytaj()
{
	
	cout << "Podaj punkt x i y" << endl;
	cout << "Podaj x:" << endl;
	cin >> x;
	cout << "Podaj y:" << endl;
	cin >> y;
	cout << "Podaj nazwe punktu: " << endl;
	cin >> nazwa;
}

void prostokat::wczytaj()
{
	cout << "Podaj nazwe punktu: " << endl;
	cin >> nazwa;
	cout << "Podaj punkty prostokata(lewy dolny rog) x i y" << endl;
	cout << "Podaj x:" << endl;
	cin >> x;
	cout << "Podaj y:" << endl;
	cin >> y;

	cout << "Podaj szerokosc:" << endl;
	cin >> y;
	cout << "Podaj wysokosc:" << endl;
	cin >> y;

	

}

void punkt::wyswietl()
{
	cout << nazwa << x << y;
}

void prostokat::show()
{
	cout << nazwa << x << y << szerokosc << wysokosc;
}