#include<iostream>
#include<math.h>

using namespace std;

float func(float x1, float x2);
void Powel(float X0, float Y0, float accuracy);
void print_points(float X, float Y, int & count);

void Powel(float X0, float Y0, float accuracy)
{
	const int K = 15; // limit of iterations
	float i;
	int count = 1;
	float VALUEp, Xbegin, Ybegin;
	float base[2][2];
	base[0][0] = 1; base[0][1] = 0; base[1][0] = 0; base[1][1] = 1; //begin base

	while (1)
	{

		Xbegin = X0;
		Ybegin = Y0;

		float lambda = -1;
		float VALUEmin = func(X0 + lambda * base[0][0], Y0 + lambda * base[0][1]); // x00 = x0 + ad2
		// looking for best lambda result
		i = -0.9;
		while (i <= 1)
		{
			if (func(X0 + i * base[0][0], Y0 + i * base[0][1]) < VALUEmin)
			{
				lambda = i;
				VALUEmin = func(X0 + i * base[0][0], Y0 + i * base[0][1]);
			}
			i += 0.1;
		}
		VALUEp = func(X0, Y0);
		X0 += lambda * base[0][0];                                              // new point x01 = x00 + ad1
		Y0 += lambda * base[0][1];

		print_points(X0, Y0, count);

		if (abs(func(X0, Y0) - VALUEp) <= accuracy)                          // |new value-old|<e accuracy break
		{
			print_points(X0, Y0, count);
			break;
		}

		lambda = -1;
		VALUEmin = func(X0 + lambda * base[1][0], Y0 + lambda * base[1][1]);          //looking for best delta forsecond vector
		i = -0.9;
		while (i <= 1)
		{
			if (func(X0 + i * base[1][0], Y0 + i * base[1][1]) < VALUEmin)
			{
				lambda = i;
				VALUEmin = func(X0 + i * base[1][0], Y0 + i * base[1][1]);
			}
			i += 0.1;
		}
		VALUEp = func(X0, Y0);
		X0 += lambda * base[1][0];                                               //nex new point
		Y0 += lambda * base[1][1];
		print_points(X0, Y0, count);

		if (abs(func(X0, Y0) - VALUEp) <= accuracy)
		{
			print_points(X0, Y0, count);
			break;
		}

		float newbase[2]; newbase[0] = X0 - Xbegin; newbase[1] = Y0 - Ybegin;                      //new vector(x-Xbegin), (y-Ybegin)
		lambda = -1;
		VALUEmin = func(X0 + lambda * newbase[0], Y0 + lambda * newbase[1]);

		i = -0.9;
		while (i <= 1)
		{                                               // new second vector
			if (func(X0 + i * newbase[0], Y0 + i * newbase[1]) < VALUEmin)
			{
				lambda = i;
				VALUEmin = func(X0 + i * newbase[0], Y0 + i * newbase[1]);
			}
			i += 0.1;
		}
		VALUEp = func(X0, Y0);
		X0 += lambda * newbase[0];
		Y0 += lambda * newbase[1];
		print_points(X0, Y0, count);

		if (abs(func(X0, Y0) - VALUEp) <= accuracy)
		{
			break;
			print_points(X0, Y0, count);
		}

		base[0][0] = base[1][0];                                      // we are changing base
		base[0][1] = base[1][1];
		base[1][0] = newbase[0];
		base[1][1] = newbase[1];

	}

}

float func(float x1, float x2)
{
	return ((x1 -0.5)*(x1 - 0.5) + (x2 - 1)*(x2 -1));
}

void print_points(float X, float Y, int & count)
{
	cout << "Point " << count << "  [ " << X << " ; " << Y << " ]" << endl;
	count++;
}






int main()
{
	float a, b;
	cout << endl;
	cout << "Give begin x and y : " << endl;
	cout << "X = ";
	cin >> a;
	cout << "Y = ";
	cin >> b;
	Powel(a, b, 0.001);
	system("pause");
	return 0;
}
