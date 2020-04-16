#include <iostream>

using namespace std;

int main()
{
	int m, n;
	cin >> m;
	cout << endl;
	cin >> n;
	cout << endl;


	int d, e, f, g;
	int min1 = 0;
	int * minliczba1 = new int[n];
	int * wynikX1 = new int[n];
	int * wynikY1 = new int[n];
	
	int **tabA = (int **)malloc((m) * sizeof(int *));
	int **tabB = (int **)malloc((n) * sizeof(int *));
	for (int i = 0; i < m; i++)
	{
		tabA[i] = (int*)malloc(n * sizeof(int));
		for (int j = 0; j < n; j++)
		{
			cin >> tabA[i][j];
		}

	}

	for (int i = 0; i < n; i++)
	{
		tabB[i] = (int*)malloc(m * sizeof(int));
		for (int j = 0; j < n; j++)
		{

		}

	}


	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << tabA[i][j];
		}
		cout << endl;
	}


	for (int i = 0; i < n; i++)
	{
		minliczba1[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		wynikX1[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		wynikY1[i] = 0;
	}



	for (int i = 0; i < m; i++)
	{
		
		for (int j = 0; j < n; j++)
		{

			tabB[j][i] = tabA[i][j];
			


		}
		
	}

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{


			cout << tabB[i][j];


		}
		cout << endl;
	}


	for (int i = 0; i < n; i++)
	{
		
		min1 = tabB[i][0];
		f = 0;
		for (int j = 0; j < m; j++)
		{
			
			
			
			e = i;
			
			if (min1 > tabB[i][j])
			{
				f = j;
				min1 = tabB[i][j];
				minliczba1[i] = min1;
				wynikX1[i] = e;
				wynikY1[i] = f;

			}
			else
			{
				minliczba1[i] = min1;
				wynikX1[i] = e;
				wynikY1[i] = f;

			}
			

		}

	}


	cout << "Minima: " << endl;

	for (int i = 0; i < n; i++)
	{
		cout << minliczba1[i] << endl;
	}

	cout << "Punkty X:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << wynikX1[i] << endl;
	}


	cout << "Punkty Y:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << wynikY1[i] << endl;
	}


	int mm, nn;
	cin >> mm;
	cout << endl;
	cin >> nn;
	cout << endl;


	int * minliczba2 = new int[nn];
	int * wynikX2 = new int[nn];
	int * wynikY2 = new int[nn];
	int * wynik = new int[nn];
	int ee, ff;
	int **tabC = (int **)malloc((mm) * sizeof(int *));

	for (int i = 0; i < mm; i++)
	{
		tabC[i] = (int*)malloc(nn * sizeof(int));
		for (int j = 0; j < nn; j++)
		{
			cin >> tabC[i][j];
		}

	}

	for (int i = 0; i < mm; i++)
	{
		for (int j = 0; j < nn; j++)
		{
			cout << tabC[i][j];
		}
		cout << endl;
	}

	int min2;
	for (int i = 0; i < nn; i++)
	{
		
		min2 = tabC[i][0];
		ff = 0;
		for (int j = 0; j < mm; j++)
		{



			ee = i;

			if (min2 > tabC[i][j])
			{
				ff = j;
				min2 = tabC[i][j];
				minliczba2[i] = min2;
				wynikX2[i] = ee;
				wynikY2[i] = ff;

			}
			else
			{
				minliczba2[i] = min2;
				wynikX2[i] = ee;
				wynikY2[i] = ff;

			}


		}

	}

	cout << endl;
	cout << "Minima: " << endl;

	for (int i = 0; i < nn; i++)
	{
		cout << minliczba2[i] << endl;
	}

	cout << "Punkty X:" << endl;
	for (int i = 0; i < nn; i++)
	{
		cout << wynikX2[i] << endl;
	}


	cout << "Punkty Y:" << endl;
	for (int i = 0; i < nn; i++)
	{
		cout << wynikY2[i] << endl;
	}

	for (int i = 0; i < nn; i++)
	{
		if (wynikX1[i] == wynikX2[i] && wynikY1[i] == wynikY2[i])
		{
			cout << "Equilibrium in point(s): (x,y)" << endl;
			cout << wynikX1[i] << " " << wynikY1[i] << endl;
		}
		
	}
	system("Pause");
	return 0;
}