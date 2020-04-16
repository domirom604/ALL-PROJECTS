#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
using namespace std;




struct osoba
{
	string imie;
	string nazwisko;
	int wiek;

	osoba *nastepna;
	osoba();

};

osoba::osoba()
{
	nastepna = 0;
}

struct lista
{
	osoba *pierwsza;
	void dodajosobe(string imie, string nazwisko, int wiek);
	void usunosobe(int nr);
	void wyswietliste();

	lista();

};

lista::lista()
{
   pierwsza = 0;
}

void lista::dodajosobe(string imie, string nazwisko, int wiek)
{
	osoba *nowa = new osoba;
	nowa->imie = imie;
	nowa->nazwisko = nazwisko;
	nowa->wiek = wiek;
	/*
	cout << "Podaj  imie: " << endl;
	cin >> nowa->imie ;
	cout << endl;

	cout << "Podaj  nzawisko: " << endl;
	cin >> nowa->nazwisko;
	cout << endl;

	cout << "Podaj  wiek: " << endl;
	cin >> nowa->wiek;
	cout << endl;
	*/
	if(pierwsza == 0)
	{
		pierwsza=nowa;
	}
	else
	{
		osoba *temp = pierwsza;
		while (temp->nastepna)
		{

			temp = temp->nastepna;
		}

		temp->nastepna = nowa;  
		nowa->nastepna = 0;

	}


}
int main()
{
	lista *baza = new lista;

	baza->dodajosobe("maciej", "pierwszy", 23);
	baza->dodajosobe("arkadiusz", "drugi", 44);
	baza->dodajosobe("dariusz", "trzeci", 19);
	baza->dodajosobe("andrzej", "czwarty", 21);
	cout << baza->pierwsza->imie << endl;
	cout << baza->pierwsza->nastepna->imie << endl;
	system("pause");
	return(0);

}