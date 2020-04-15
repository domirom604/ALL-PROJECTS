#include <iostream>
#include <time.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#pragma warning(disable:4996)

using namespace std;


int szerokosc = 0;
int wysokosc = 0;
int gora=0;
int dol=0;
int lewo=0;
int prawo=0;
char pole[35][35];

int xwenza;
int ywenza;
int xjedz;
int yjedz;
int historiaX[1000000];
int historiaY[1000000];
int poruszanie=0;
char kierunek='p';
int klawisz;
int one = 49, two=50, three=51, four=52;
int press;
int rez[10];
int wynik;


int menu();
int game();



int result()
{
	while (1)
	{
		ifstream plik("C:/Users/domin/Desktop/SNAKE/wyniki.txt");
		int licznik = 0;
		string linia;
		
		while (!plik.eof()) {
			getline(plik, linia);
			licznik++;
		}
		cout << licznik;
		plik.seekg(0, ios::beg);
		for (int i = 0; i < licznik-10; i++) 
		{
			getline(plik, linia);
			cout << linia << endl;


		}

			

			
			

		cout << endl;
		
			for (int i = 0; i < 10; i++) {
				getline(plik, linia);
				cout << linia << endl;


			}
			
			
			
		plik.close();

		
		cout << "press X to return to the menu: ";
		press = getchar();
		if (press == 120)
			cout << "you are in menu";
		Sleep(3000);
		break;
	}
	
	return 0;
}




int menu()
{
	cout << "------------------------------------" << endl;
	cout << "|Press 1    to   start     game: |1|" << endl;
	cout << "|----------------------------------|" << endl;
	cout << "|Press 2 to see 10 last result : |2|" << endl;
	cout << "|----------------------------------|" << endl;
	cout << "|Press 3  to   close the   game: |3|" << endl;
	cout << "------------------------------------" << endl;

	cout << endl;

	while(1)
	{
		press = getchar();
		if (press == 49)
		{ 
			
			game();
		}
		
		if (press == 50 )
		{
			result();
		}
		if (press == 51)
		{
		 cout << "Good bye! :)" << endl;
			 break;
		}
		

	}
	
	return 0;

}

int game()
{
	char pole[35][35];
	
	cout << "Podaj szerokosc i wysokosc planszy z zakresu od 10 do 35 !!!" << endl;
	cout << "podaj szerokosc pola: ";
	cin >> szerokosc;
	cout << endl;

	if (szerokosc < 10 || szerokosc  > 35)
	{

		do
		{
			system("cls");
			cout << "Zle podaj dobra szerokosc!!!: " << endl;
			cout << "Podaj szerokosc i wysokosc planszy z zakresu od 10 do 35 !!!" << endl;
			cout << "podaj szerokosc pola: ";
			cin >> szerokosc;
		} while (!(szerokosc >= 10 && szerokosc <= 35));
	}


	cout << "podaj wysokosc pola: ";
	cin >> wysokosc;
	cout << endl;

	if (wysokosc < 10 || wysokosc  > 35)
	{

		do
		{
			system("cls");
			cout << "Zle podaj dobra wysokosc!!!: " << endl;
			cout << "Podaj szerokosc i wysokosc planszy z zakresu od 10 do 35 !!!" << endl;
			cout << "podaj wysokosc pola: ";
			cin >> wysokosc;
		} while (!(wysokosc >= 10 && wysokosc <= 35));
	}



	cout << "Nacisnij jakimi klawiszami chesz grac:" << endl;
	cout << "Gora:  " << endl;
	getchar();
	gora = getchar();

	if (gora == 224) gora += getchar();
	if (gora == 0) gora -= getchar();

	cout << endl;

	cout << "Dol:  " << endl;
	getchar();
	dol = getchar();

	if (dol == 224) dol += getchar();
	if (dol == 0) dol -= getchar();

	cout << endl;

	cout << "Lewo:  " << endl;
	getchar();
	lewo = getchar();

	if (lewo == 224) lewo += getchar();
	if (lewo == 0) lewo -= getchar();

	cout << endl;

	cout << "Prawo:  " << endl;
	getchar();
	prawo = getchar();

	if (prawo == 224) prawo += getchar();
	if (prawo == 0) prawo -= getchar();

	cout << endl;

	system("cls");

	for (int a = 0; a < wysokosc; a++)
	{
		for (int b = 0; b < szerokosc; b++)
		{
			pole[b][a] = 'p';
		}

	}
	int dlugoscW = 2;

	srand(time(NULL));

	xwenza = rand() % szerokosc;
	ywenza = rand() % wysokosc;
	pole[xwenza][ywenza] = 'w';
	do
	{
		
		xjedz = rand() % szerokosc;
		yjedz = rand() % wysokosc;

	} while (pole[xjedz][yjedz] != 'p');
	pole[xjedz][yjedz] = 'j';


	for (;;)
	{


		poruszanie++;
		historiaX[poruszanie] = xwenza;
		historiaY[poruszanie] = ywenza;

		system("CLS");

		for (int k = 0; k <= szerokosc ; k++)
		{
			cout << "--";

		}
		
		for (int i = 0; i < wysokosc; i++)
		{
			cout << endl << '|';

			for (int j = 0; j <=szerokosc; j++)
			{
				
				if (pole[j][i] == 'p') cout << "  ";
				if (pole[j][i] == 'w') cout << " o";
				if (pole[j][i] == 'j') cout << " x";

			}
			cout << '|';
			
		}
		cout << endl;
		for (int k = 0; k <= szerokosc; k++)
		{
			cout << "--";

		}
		

		Sleep(500);
		if (kbhit())
		{

			klawisz = getch();
			if (klawisz == gora) kierunek = 'g';
			if (klawisz == dol) kierunek = 'd';
			if (klawisz == lewo) kierunek = 'l';
			if (klawisz == prawo) kierunek = 'p';

		}




		if (kierunek == 'p') xwenza++;
		if (kierunek == 'l') xwenza--;
		if (kierunek == 'd') ywenza++;
		if (kierunek == 'g') ywenza--;

		if (pole[xwenza][ywenza] == 'j')
		{
			dlugoscW++;
			do
			{
				xjedz = rand() % szerokosc;
				yjedz = rand() % wysokosc;

			} while (pole[xjedz][yjedz] != 'p');
			pole[xjedz][yjedz] = 'j';
		}

		

		if (pole[xwenza][ywenza] == 'w')
		{
			


			
			
			cout << endl << "KONIEC !!!  Dlugosc wenza byla rowna:" << dlugoscW + 1;

			
			string linia;
			fstream plik;

			plik.open("C:/Users/domin/Desktop/SNAKE/wyniki.txt", ios::out | ios::app);
			if (plik.good() == true)
			{
				
				cout<< endl;
				plik << "Ostatnie wyniki to:  " << dlugoscW + 1 ;
				
				

				plik.close();
			}
			cout << endl;

			
			Sleep(3000);
			break;
			
		}

		
		
		if (xwenza == szerokosc) 
		{

			cout << endl << "KONIEC !!!  Dlugosc wenza byla rowna:" << dlugoscW + 1;
			string linia;
			fstream plik;

			plik.open("C:/Users/domin/Desktop/SNAKE/wyniki.txt", ios::out | ios::app);
			if (plik.good() == true)
			{
				cout << endl;
				plik << "Ostatnie wyniki to:  " << dlugoscW + 1;
				


				plik.close();
			}

			Sleep(3000);
			
			break;
			
		}
		if (xwenza == -1) 
		{

			cout << endl << "KONIEC !!!  Dlugosc wenza byla rowna:" << dlugoscW + 1;
			string linia;
			fstream plik;

			plik.open("C:/Users/domin/Desktop/SNAKE/wyniki.txt", ios::out | ios::app);
			if (plik.good() == true)
			{
				plik <<endl <<"Ostatnie wyniki to:  " << dlugoscW + 1 ;
				


				plik.close();
			}
			Sleep(3000);

			break;
		}
		if (ywenza == wysokosc) 
		{

			cout << endl << "KONIEC !!!  Dlugosc wenza byla rowna:" << dlugoscW + 1;
			string linia;
			fstream plik;

			plik.open("C:/Users/domin/Desktop/SNAKE/wyniki.txt", ios::out | ios::app);
			if (plik.good() == true)
			{
				plik << endl << "Ostatnie wyniki to:  " << dlugoscW + 1 ;
				


				plik.close();
			}
			Sleep(3000);

			break;
		}
		if (ywenza == -1) 
		{

			cout << endl << "KONIEC !!!  Dlugosc wenza byla rowna:" << dlugoscW + 1;
			string linia;
			fstream plik;

			plik.open("C:/Users/domin/Desktop/SNAKE/wyniki.txt", ios::out | ios::app);
			if (plik.good() == true)
			{
				plik << endl << "Ostatnie wyniki to:  " << dlugoscW + 1;
				


				plik.close();
			}
			Sleep(3000);

			break;
		}

		

		
		pole[xwenza][ywenza] = 'w';
		pole[historiaX[poruszanie - dlugoscW]][historiaY[poruszanie - dlugoscW]] = 'p';
		
		

	}
	

	system("cls");
	menu();

	return 0;
}

int main()
{
	
	menu();

	

	
	system("pause");
	return(0);

}


