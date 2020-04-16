#include "przyjaciel.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
using namespace std;

void sprawdzczynalezy(punkt pkt, prostokat p)
{
	if ( (pkt.x >= p.x) && (pkt.x <= p.x + p.szerokosc) 
		&&(pkt.y >= p.y) && (pkt.y <= p.y + p.wysokosc))
	{
		cout  << "punkt " <<  pkt.nazwa << " NALEZY do prostokata " << p.nazwa << endl;
	}
	else
	{
		cout  << "punkt " << pkt.nazwa << " NIE NALEZY do prostokata " << p.nazwa << endl;
	}

}

int main()
{
	punkt pkt("B", 1, 3);

	prostokat p("prostokaciK", 0, 0, 1, 1);

	pkt.wyswietl();
	cout<< endl;
	p.show();
	cout << endl;
	sprawdzczynalezy(pkt, p);

	
	system("pause");
	return(0);

}