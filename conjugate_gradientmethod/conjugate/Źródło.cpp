#include <iostream>
#include <math.h>
using namespace std;

float fuunction(float x, float y)
{
	return pow((2*x),2) + pow((y), 2) + (x - y) + (2*x*y) ;
}
int main()
{
	int n = 1;
	double x1[1][2];
	double x2[1][2];
	float minimal;
	double gradient[1][2];
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			x1[i][j] = 0 ;
			cout << "x1 " <<  x1[i][j] << endl;
			
		}
		
	}
	cout << "ITERATION " << n << endl;
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			gradient[i][j] = 1 + 4 * x1[i][0] + 2 * x1[i][1];
			j++;
			gradient[i][j] = -1 + 2 * x1[i][0] + 2 * x1[i][1];
		}
	}

	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << gradient[i][j] << endl;
		}
	}


	double s1[1][2];
	double sn[1][2];

	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			s1[i][j] = -gradient[i][j];
			cout << s1[i][j] << endl;
		}
	}
	double a = 1;
	//float minimal;
	double x, y;
	double xn[1][2];
	double function; 
	
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			x2[i][j] = x1[i][j] + a * s1[i][j];
			cout << "x2 " << x2[i][j] << endl;

		}
		
	}
	xn[0][0] = x2[0][0];
	xn[0][1] = x2[0][1];
	sn[0][0] = s1[0][0];
	sn[0][1] = s1[0][1];

			while (true)
			{
				n++;
				cout << endl;
				cout << "ITERATION " << n << endl;
				cout << endl;

				
				

				for (int i = 0; i < 1; i++)
				{
					for (int j = 0; j < 2; j++)
					{
						gradient[i][j] = 1 + 4 * xn[i][0] + 2 * xn[i][1];
						j++;
						gradient[i][j] = -1 + 2 * xn[i][0] + 2 * xn[i][1];
					}
				}

				for (int i = 0; i < 1; i++)
				{
					for (int j = 0; j < 2; j++)
					{
						cout << "gradient: " <<  gradient[i][j] << endl;
					}
				}
				
				for (int i = 0; i < 1; i++)
				{
					for (int j = 0; j < 2; j++)
					{
						sn[i][j] = -gradient[i][j] + ((pow(sqrt(pow(gradient[0][0], 2) + pow(gradient[0][1], 2)), 2))/( pow(sqrt(pow(sn[0][0],2)+ pow(sn[0][1], 2)),2))* sn[i][j]);
						cout << "snssssss: ";
						cout << sn[i][j] << endl;
					}
				}

				a = -1;
				float minimal;


				minimal = fuunction(x2[0][0] + a * sn[0][0], x2[0][1] + a * sn[0][1]);
				cout << endl;
				cout << minimal << endl;
				for (double i = -0.99; i < 1; i += 0.01)
				{
					if (fuunction(x2[0][0] + i * sn[0][0], x2[0][1] + i * sn[0][1]) < minimal)
					{
						a = i;
						minimal = fuunction(x2[0][0] + a * sn[0][0], x2[0][1] + a * sn[0][1]);

					}
				}
				cout << a << " " << minimal;

				cout << endl;
				for (int i = 0; i < 1; i++)
				{
					for (int j = 0; j < 2; j++)
					{
						xn[i][j] = x2[i][j] + a * sn[i][j];
						cout << "xn " << xn[i][j] << endl;

					}

				}
				if(gradient[0][0] < 0.001 || gradient[0][1] < 0.001)
				{
					break;
					
				}

			}

	system("pause");
	return 0;
}