#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double tab[5] = {0.456,0.2,1.1,3.06345,-1.123};
	double x = 0.5;
	double tabwynik[5];
	double dod[5];
	tabwynik[0] = tab[0];
	
	for (int i = 1; i < 5; i++)
	{
		dod[1] = x;
		tabwynik[i] = dod[i] + tab[i];
		dod[i+1] = tabwynik[i] * x;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << tabwynik[i] << endl;
	}
	cout << "Comparison" << endl;
	
	double wynik;
	int maxpol = 4;
	double wynikkonc = 0;
	for (int i = 0; i < 5; i++)
	{
	
		wynik = tab[i] * (pow(x, maxpol));
		maxpol--;
		wynikkonc += wynik;
		cout << wynikkonc << endl;
	}
	
	system("Pause");
	return 0;
}