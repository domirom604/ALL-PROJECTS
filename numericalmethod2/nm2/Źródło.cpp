#include<iostream>
#include<math.h>
#include <ctime>
using namespace std;
int main()
{	
	int end = 0;
	double x = 0.1;
	double tabB[6] = {1,-15,84,-225,247,-120 };
	double tabwynikB[6] = { 0,0,0,0,0,0};
	double dodB[6]= { 0,0,0,0,0,0};
	while (true)
	{
	next:


		
		dodB[0] = 0;
		tabwynikB[0] = tabB[0];
		for (int i = 1; i < 6; i++)
		{
			dodB[1] = x * tabB[0];
			tabwynikB[i] = dodB[i] + tabB[i];
			dodB[i + 1] = tabwynikB[i] * x;
		}
		for (int i = 0; i < 6; i++)
		{
			if (tabwynikB[i] < 0)
			{
				//cout << tabwynikB[i] << endl;
				x += 0.001;
				goto next;
				
			}
			else
			{

				end = 1;
			}
			//cout << "x:" << x << endl;

		}
		if (end == 1)
		{
			break;
		}

	}
	

	end = 0;
	double tabA[6];
	double y = 0.1;
	for (int i = 0; i < 6; i++)
	{
		tabA[i] = tabB[i];
		if (i % 2 == 1)
		{
			tabA[i] = -tabB[i];
		}
		//cout << tabA[i] << endl;
	}
	double tabwynikA[6] = { 0,0,0,0,0,0 };;
	double dodA[6] = { 0,0,0,0,0,0 };;
	while (true)
	{
	nextt:


		
		tabwynikA[0] = tabA[0];
		for (int i = 1; i < 6; i++)
		{
			dodA[1] = y * tabA[0];
			tabwynikA[i] = dodA[i] + tabA[i];
			dodA[i + 1] = tabwynikA[i] * y;
		}
		for (int i = 0; i < 6; i++)
		{
			if (tabwynikA[i] < 0)
			{
				y += 0.001;
				goto nextt;
				//cout << tabwynik[i] << endl;
			}
			else
			{
				end = 1;
			}
			//cout << "y:" << y << endl;
		}
		if (end == 1)
		{
			break;
		}
	}
	cout << "INTERVALS [" << -y << "; " << x << "]" << endl;

	for (int i = 0; i < 6; i++)
	{
		 tabwynikA[i] = tabwynikB[i] = dodA[i]= dodB[i]=0 ;
	}
	

  double tab[6] = { 1,-15,84,-225,247,-120 };
   double xx = -y;
   double wynikprev = -y;
   double wynikkonc = 0;
   double distance = wynikprev;
   double distance2 = wynikprev;
  double min=10000;
  double point=0;
  double pointprev = 0;
    int i = 1;
  double aa = 0;
   int n = 10;
   int nn = 0;
    double * roots = new double[n];

 while (xx<=(x+1))
    {
	
	
	double wynik;
	int maxpol = 5;
	pointprev = point;
	wynikprev = wynikkonc;
	distance2 = abs(wynikprev);
	wynikkonc = 0;
	for (int i = 0; i < 6; i++)
	{
		wynik = tab[i] * (pow(xx, maxpol));
		maxpol--;
		wynikkonc += wynik;
		//cout << wynikkonc << endl;
	}
	//cout << "Wynik konc: " << wynikkonc << endl;
	xx += 0.01;
	//cout << "xx: " << xx << endl;
	distance = abs(wynikkonc);
	
	//cout << distance << " " << distance2 << endl;
	if (distance < distance2 )
	{
		min = distance;
		point = xx;
		//cout <<"min: " << min << endl;
	}
	
	if (i == 1)
	{
		goto dalej;
	}
	
	else
	{
		if (pointprev == point)
		{
			if (point != aa)
			{
				cout << "Root:" << point << endl;
				roots[nn] = point;
				nn++;
				aa = point;
			}
		}
	}
    dalej:
	i++;
	 //cout << "Wynik wczesniejszy: " << wynikprev << endl;


  }
 double error1=0;
 double error2 =0;
 double er1;
 double er2;
 int j = 0;
   for (j; j < nn; j++)
   {
	  
	  //cout << roots[j] << endl;
   }
   er1 = (-y) - (roots[0]);
   er2 = (x) - (roots[j-1]);
   error1 = abs(er1);
   error2 = abs( er2);
   cout << "Error 1: " << error1 << endl;
   cout << "Error 2: " << error2 << endl;

	system("Pause");
	return 0;
}