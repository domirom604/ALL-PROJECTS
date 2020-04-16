#include <iostream>

using namespace std;
int main ()
{
	int function = 4; //1 = 5/(x^2 +2)     // 2 = abs(x) //   3 = sin(x)
	int n_main = 15;  // n = 5,10,15,20
	int ii = 0;
	double aa;// begining of the interval                                /*= -10*/
	
	double bb;// ending of the interval                                 /*= 10*/
	
	double x0x0;// point at which the value of interpolating polynomial should be determined   /*= 2*/
	
	double y0y0 = 0;//the final value of interpolating polynomial-initialize as 0
	int nn;// degree of interpolating polynomial
	double max_x =0 ;
	double max_y = 0;
	double * y1fun = new double[21];
	double max_error = 0;
	double error = 0;
	
	double k = -10;
	while (k <= 10)
	{
		aa = -10;
		bb = 10;
		nn = n_main;
		y0y0 = 0;
		
		x0x0 = k;
		double distance1;// the length of the given interval
		distance1 = bb - aa;
		double step1 = distance1 / (nn);
		double * x1i = new double[nn + 1];
		double * y1i = new double[nn + 1];
		double wi1;
		double value_xixi = 0;
		x1i[0] = aa;
		nn++;
		if (function == 1)
		{
			y1fun[ii] = (5) / ((k * k) + 2);
		}
		if (function == 2)
		{
			y1fun[ii] = abs(k);
		}
		if (function == 3)
		{
			y1fun[ii] = sin(k);
		}
		if (function == 4)
		{
			y1fun[ii] = k*k*k*k;
		}
		for (int i = 1; i <= nn; i++) {//we are calculating equidistant interpolation nodes
			value_xixi = aa + step1;
			aa = value_xixi;
			x1i[i] = value_xixi;
		}
		
		for (int i = 0; i < nn; i++) {// now we are calculating the value of particular node
			if (function == 1)
			{
				y1i[i] = 5 / ((x1i[i] * x1i[i]) + 2);
			}
			if (function == 2)
			{
				y1i[i] = abs(x1i[i]); 
			}
			if (function == 3)
			{
				y1i[i] = sin(x1i[i]);
			}
			if (function == 4)
			{
				y1i[i] = x1i[i] * x1i[i]* x1i[i] * x1i[i];
			}
		}

		

		for (int i = 0; i < nn; i++) {
			wi1 = 1;// the initialize value of our function is 1 as //////////////////
			for (int j = 0; j < nn; j++) {
				if (j != i) {
					wi1 = wi1 * ((x1i[i] - x1i[j]));
				}
			}
			y0y0 = y0y0 + (y1i[i]) / ((x0x0 - x1i[i])*wi1);
		}

		wi1 = 1;

		for (int i = 0; i < nn; i++)

		{

			wi1 = wi1 * (x0x0 - x1i[i]);

		}

		y0y0 = y0y0 * wi1;
		
		error = abs( y0y0-y1fun[ii]);
		
		if (error > max_error)
		{
			max_x = k;
			max_error = error;
			
		}
		 
		k++;
		ii++;
	}
	cout << "TASK-------------------------------------1 " << endl;
	cout << endl;
	cout << "Solution-------------: " << endl;
	cout << "Max error = " << max_error << endl;
	cout << "In poin x = " << max_x << endl;
	if (function == 1)
	{
		max_y = (5) / ((max_x *max_x) + 2);
	}
	if (function == 2)
	{
		max_y = abs(max_x);
	}
	if (function == 3)
	{
		max_y = sin(max_x);
	}
	if (function == 4)
	{
		max_y = max_x * max_x*max_x*max_x;
	}
	cout << "y in max x= " << max_y << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "TASK-------------------------------------2 " << endl;
	max_x = 0;
	max_y = 0;
double pi = 3.141592654;

double a;// begining of the interval                                /*= -10*/

double b;// ending of the interval                                 /*= 10*/

double x0;// point at which the value of interpolating polynomial should be determined   /*= 2*/

double y0 = 0;//the final value of interpolating polynomial-initialize as 0
int n;// degree of interpolating polynomial
double * yfun = new double[21];
 max_error = 0;
 error = 0;

 k = -10;
  ii = 0;
while (k <= 10)
{
	
	a = -10;
	b = 10;
	n = n_main;
	y0 = 0;
	
	x0 = k;
	
	double distance;
	distance = b - a;

	double step = distance / (n);
	double * xi = new double[n];
	double * zi = new double[n];
	double * yi = new double[n];
	
	double wi;
	double value_xi = 0;
	xi[0] = a;
	if (function == 1)
	{
		yfun[ii] =	(5) / ((k * k) + 2);
	}
	if (function == 2)
	{
		yfun[ii] = abs(k);
	}
	if (function == 3)
	{
		yfun[ii] = sin(k);
	}
	if (function == 4)
	{
		yfun[ii] = k*k*k*k;
	}
	for (int i = 0; i <= n; i++) {//we start to calculate Chebyshev interpolation nodes using two following formulas
		xi[i] = cos(pi*(2 * i + 1) / (2 * n + 2));
	}
	
	for (int i = 0; i <= n; i++) {
		zi[i] = 0.5*(distance*xi[i]);
	}
	
	for (int i = 0; i <= n; i++) {

		if (function == 1)
		{
			yi[i] = 5 / ((zi[i] * zi[i]) + 2);
		}
		if (function == 2)
		{
			yi[i] = abs(zi[i]); 
		}
		if (function == 3)
		{
			yi[i] = sin(zi[i]);
		}
		if (function == 4)
		{
			yi[i] = zi[i] * zi[i] * zi[i] * zi[i];
		}
	}
	
	
	for (int i = 0; i <= n; i++) {
		wi = 1;// we calculate the value of the auxiliary polynomial wi by the lagrange method
		for (int j = 0; j <= n; j++) {
			if (j != i) {
				wi = wi * ((zi[i] - zi[j]));
			}
		}
		y0 = y0 + (yi[i]) / ((x0 - zi[i])*wi);
	}
	wi = 1;
	for (int i = 0; i <= n; i++) {
		wi = wi * (x0 - zi[i]);
	}
	y0 = y0 * wi;
	
	
	error = abs( y0-yfun[ii]);
	
	if (error > max_error)
	{
		max_x = k;
		max_error = error;
		
	}

	k++;
	ii++;
}


cout << endl;
cout << "Solution-------------: " << endl;
cout << "Max error = " << max_error << endl;
cout << "In poin x = " << max_x << endl;
if (function == 1)
{
	max_y = (5) / ((max_x *max_x) + 2);
}
if (function == 2)
{
	max_y = abs(max_x);
}
if (function == 3)
{
	max_y = sin(max_x);
}
if (function == 4)
{
	max_y = max_x* max_x*max_x*max_x;
}
cout << "y in max x= " << max_y << endl;

system("Pause");
return 0;
}