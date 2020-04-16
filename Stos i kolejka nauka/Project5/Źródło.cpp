#include <iostream>
#include <deque>
using namespace std;

/*STOOOOOSSSS*/
/*
int tab[5];
int rozmiar = 0;

void push()
{
	if (rozmiar >= 5)
	{
		cout << "stos pelny" << endl;
	}
	else
	{
		cout << endl;
		cout << "Podaj jaka liczbe polozyc na stosie: " << endl;
		rozmiar++;
		cin >> tab[rozmiar];
	}
}

void pop()
{
	if (rozmiar >= 1)
	{
		rozmiar--;
	}
	else
	{
		cout << "stos pusty" << endl;
	}
}
void wyswietl()
{
	for (int i = rozmiar; i >= 1; i--)
	{
		cout << tab[i];
	}
}

int main()
{
	
	int a;
	while (1)
	{
		cin >> a;
		if (a == 1)
		{
			push();
		}
		if (a == 2)
		{
			pop();
		}
		if (a == 3)
		{
			wyswietl();
		}
	}

	system("Pause");
	return 0;
}
*/


// KOLEJKAAAAAAAAAAAA

/*
int tab[5];
int ile;
int glowa;
int ogon;
void push()
{
	if (ile >= 5)
	{
		cout << "kolejka pelna" << endl;
	}
	else if (ile == 0)
	{
		cout << "podaj dane do kolejnki:" << endl;
		cin >> tab[ogon];
		ogon++;
		ile++;

	}
	else
	{
		cout << "podaj dane do kolejnki:" << endl;
		cin >> tab[ogon];
		
		ogon = (ogon + 1) % 5;
		cout << "ogon : " << ogon <<  endl; 
		ile++;
	}
	
}

void pop()
{
	if (ile == 0)
	{
		cout << "kolejka pusta" << endl;
	}
	else
	{
		glowa = (glowa + 1) % 5;
		ile--;
	}
	
}
void wyswietl()
{
	if (ile == 0)
	{
		cout << "kolejka pusta" << endl;
	}
	else
	{
		int indeks;
		for (int i = 0; i < ile; i++)
		{
			indeks = glowa + i;
			if (glowa + i >= 5) indeks = glowa + i-5;
			cout << tab[indeks] << " ";
		}
	}
	
}

int main()
{

	int a;
	while (1)
	{
		cin >> a;
		if (a == 1)
		{
			push();
		}
		if (a == 2)
		{
			pop();
		}
		if (a == 3)
		{
			wyswietl();
		}
	}

	system("Pause");
	return 0;
}

*/


// PROGRAM OD NASZEGO RODZYNKA
std::deque <pair<double,double >> dane;
const int SIZE = 10;
class complex
{
	friend class dequee;
	friend class unique_dequee;
protected:
	double imaginary, real;
	

};
class dequee :public complex
{
	friend class complex;
public:
	void push_back(double imaginary, double real);
	void push_front();
	void pop_back();
	void pop_front();
	 void read();
	
	
};
void dequee::push_back(double imaginary, double real)
{
	dane.push_back(make_pair(imaginary,real));
}
void dequee::push_front()
{
	dane.push_front(make_pair(imaginary, real));
}
void dequee::pop_back()
{
	dane.pop_back();
}
void dequee::pop_front()
{
	dane.pop_front();
}
void  dequee::read()
{
	complex g;
	
	cout << "Podaj imaginary :" << endl;
	cin >> g.imaginary;
	cout << endl;
	cout << "Podaj real :" << endl;
	cin >> g.real;
	dequee a;
	a.push_back(g.imaginary, g.real);
	for (auto item : dane)
	{
		cout << item.second << " " << item.first << endl;
	}
}

class unique_dequee :public dequee , public complex
{
public:
	void push_back(double imaginary, double real);
	void read();
	char tab[SIZE];
	char tab2[SIZE];
	unique_dequee()
	{
		register int i;
		
		for (i = 0; i < SIZE; i++) {
			
				for (auto item : dane)
				{
					

					tab[i] = item.second;
					
				
				}
			
		}
		for (i = 0; i < SIZE; i++) {

			for (auto item : dane)
			{


				tab2[i] = item.first;


			}

		}
		
	}
	ostream &operator<< ( int i) {

		
		 cout <<  << tab[i] << "+" << tab2[i] << "i";
		 
	}
      
};

void  unique_dequee::read()
{
	complex g;

	cout << "Podaj imaginary :" << endl;
	cin >> g.imaginary;
	cout << endl;
	cout << "Podaj real :" << endl;
	cin >> g.real;
	unique_dequee a;
	a.push_back(g.imaginary, g.real);
	for (auto item : dane)
	{
		cout << item.second << " " << item.first << endl;
	}
}
void unique_dequee::push_back(double imaginary, double real)
{
	int f = 1;
	
	for (auto item : dane)
	{
		if (imaginary == item.first && real == item.second)
		{
			cout << "error w dodawaniu" << endl;
			f = 0;
		}
	}

	if(f== 1)
	dane.push_back(make_pair(imaginary, real));
		

		
}

int main()
{
	
	while (1)
	{
		
		unique_dequee f;
		
		f.read();
		cout << tab[i];
	}


	system("Pause");
	return 0;
}