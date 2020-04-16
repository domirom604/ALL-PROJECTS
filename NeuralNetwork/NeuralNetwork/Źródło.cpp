#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h> 

using namespace std;

float Sigmoid(float x)
{
	double y;
	y = 1 / (1 + exp(-x));
	return y;
}


double Weight(double weight[3], double input[4][3], double correct_input[4], double transposed[3][4],int ret)
{
	double transposed_input[3][1];
	double alpha = 2.9;
	double d;
	double error;
	double weight_sum=0;
	double output;
	double delta;
	double weight_update[3][1];

	for (int i = 0; i < 4; i++)
	{
		 weight_sum=0 ;
		 error=0;
		 output=0;
		 delta=0;
		
		for (int j = 0; j < 3; j++)
		{
			transposed_input[j][0] = input[i][j];

		}

		d = correct_input[i];

		


			for (int j = 0; j < 3; j++)
			{
				weight_sum +=  weight[j]* transposed_input[j][0];

			}

		
		//cout <<"Suma wazona:" <<weight_sum << endl;
		output = Sigmoid(weight_sum);
		error = d - output;
		delta = ((output) * (1 - output)* (error));
		for (int kk = 0; kk < 3; kk++)
		{
			weight_update[kk][0] = alpha * delta *transposed_input[kk][0];
		}

		
			 weight[0] = weight[0] + weight_update[0][0];
			 weight[1] = weight[1] + weight_update[1][0];
			 weight[2] = weight[2] + weight_update[2][0];
			 
			 
			
			 if (ret == 0)
			 {
				// cout << "Waga 0 funkcja:" << weight[0] << endl;
				 return weight[0];
			 }
			 if (ret == 1)
			 {
				// cout << "Waga 1 funkcja:" << weight[1] << endl;
				 return weight[1];
			 }
			 if (ret == 2)
			 {
				 //cout << "Waga 2 funkcja:" << weight[2] << endl;
				 return weight[2];
			 }
			 

	}
	
	
	
	
}



int main()
{
	double transposed_input[3][1];
	double input[4][3] = { {1,0,1},{1,1,1},{1,0,0},{0,1,1} };
	double transposed[3][4];
	double correct_input[4] = {1,0,0,1};
	for (int i =0;i<4;i++)
	{
		for (int j = 0; j < 3; j++)
		{
			transposed[j][i] = input[i][j];
			cout << input[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << transposed[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			transposed_input[j][0] = input[i][j];
			//cout << transposed_input[j][0]<< endl;
			for (int jj = 0; jj < 3; jj++)
			{
				transposed_input[j][0] = 0;
			}
			
		}
	}
	
	srand(time(NULL) ^ clock());
	double weight[3];
	double liczba, a = -0.99, b = 0.99;
	
	
	for (int j = 0; j < 1000; j++)
	{
		for (int i = 0; i < 3; i++)
		{


			liczba = a + (double)rand() / RAND_MAX * (b - a);
			weight[i] = liczba;
		}
	
	}

	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << weight[i] << " ";
	}
	cout << endl;

	for (int epoch = 0; epoch <=10000; epoch++)
	{
		for (int i = 0; i < 4; i++)
		{
			weight[i] = Weight(weight, input, correct_input, transposed, i);
			cout << weight[i] << " " ;
		}
		cout << endl;
		//cout << "------------- " << epoch + 1 << " -------------" << endl;
	}
	
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << " Waga:" << weight[i] << endl;
	}

	cout << "------------- " << "PrakTYka" << " -------------" << endl;
	
	for (int i = 0; i < 4; i++)
	{
		double weight_sum = 0;
		
		double output = 0;
		

		for (int j = 0; j < 3; j++)
		{
			transposed_input[j][0] = input[i][j];

		}

		




		for (int j = 0; j < 3; j++)
		{
			weight_sum += weight[j] * transposed_input[j][0];

		}


		
		output = Sigmoid(weight_sum);
		cout << "Output: " << i << " " << output << endl;
	}
	
	system("Pause");
	return 0;
}
