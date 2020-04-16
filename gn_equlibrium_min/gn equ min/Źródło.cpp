#include <iostream>

using namespace std;

int main()
{

	int tabA[3][3];
	int minliczba1[3];
	int d, e, f, g;
	int min1 = 0;
	int wczeœniejsza1 = 0;
	int wynikX1[3];
	int wynikY1[3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> tabA[i][j];
		}

	}


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << tabA[i][j];
		}
		cout << endl;
	}





	for (int i = 0; i < 3; i++)
	{
		min1 = 0;
		wczeœniejsza1 = 0;
		for (int j = 0; j < 3; j++)
		{

			wczeœniejsza1 = tabA[j][i];
			e = j + 1;
			f = i + 1;
			if (wczeœniejsza1 < min1)
			{

				min1 = wczeœniejsza1;
				minliczba1[i] = min1;
				wynikX1[i] = e;
				wynikY1[i] = f;
				d = e;
				g = f;

			}
			else
			{

				minliczba1[i] = min1;
				wynikX1[i] = d;
				wynikY1[i] = g;
			}


		}

	}

	cout << "Min: " << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << minliczba1[i] << endl;
	}

	cout << "Punkty X:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << wynikY1[i] << endl;
	}

	cout << "Punkty Y:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << wynikX1[i] << endl;
	}


	// part B!!!!!

	int tabB[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> tabB[i][j];
		}

	}


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << tabB[i][j];
		}
		cout << endl;
	}

	int minliczba2[3];
	int x, y, q, z;
	int min2 = 0;
	int wczeœniejsza2 = 0;
	int wynikX2[3];
	int wynikY2[3];
	for (int i = 0; i < 3; i++)
	{
		min2 = 0;
		wczeœniejsza2 = 0;
		for (int j = 0; j < 3; j++)
		{

			wczeœniejsza2 = tabB[i][j];
			y = j + 1;
			q = i + 1;
			if (wczeœniejsza2 < min2)
			{

				min2 = wczeœniejsza2;
				minliczba2[i] = min2;
				wynikX2[i] = y;
				wynikY2[i] = q;
				x = y;
				z = q;
			}
			else
			{

				minliczba2[i] = min2;
				wynikX2[i] = x;
				wynikY2[i] = z;
			}


		}

	}

	cout << "Maxima: " << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << minliczba2[i] << endl;
	}
	cout << "Punkty Y:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << wynikY2[i] << endl;
	}

	cout << "Punkty X:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << wynikX2[i] << endl;
	}
	cout << endl;
	cout << "equilibrium in points:" << endl;
	for (int i = 0; i < 3; i++)
	{
		if (wynikY1[i] == wynikY2[i] && wynikX1[i] == wynikX2[i])
		{

			cout << wynikY1[i] << " " << wynikX1[i] << endl;

		}
	}
	system("Pause");
	return 0;
}