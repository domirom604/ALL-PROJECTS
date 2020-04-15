#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <fstream>
#include<stdio.h>

struct wysokoscandszerokosc
{
	int wysokosc=425;
	int szerokosc=318;
	int a = 500;
	

};
wysokoscandszerokosc zmienna;

int rysob1(int **obrazek, int wysokosc,int szerokosc)
{
	for (int i = 0; i < zmienna.wysokosc; i++)
	{
		for (int j = 0; j < zmienna.szerokosc; j++)
			printf("%c", obrazek[i][j]);
		printf("\n");



	}
	return 0;
}
int rysob2(int **obrazek2, int wysokosc, int szerokosc)
{
	for (int i = 0; i < zmienna.wysokosc / 2; i++)
	{
		for (int j = 0; j < zmienna.szerokosc / 2; j++)
			printf("%c", obrazek2[i][j]);
		printf("\n");



	}

	return 0;
}
int main()

{
	
	int  i, j;

	int **obrazek = (int **)malloc((zmienna.a) * sizeof(int *));
	for (i = 0; i <zmienna.a; i++)
		obrazek[i] = (int *)malloc((zmienna.a) * sizeof(int));
	int **obrazek2 = (int **)malloc((zmienna.a/2) * sizeof(int *));
	for (i = 0; i < zmienna.a/2; i++)
		obrazek2[i] = (int *)malloc((zmienna.a/2) * sizeof(int));
	 

	 FILE* plik;
		 plik = fopen("C:/Users/domin/Desktop/CP projekty/cp project/wyniki.txt" ,"r");
	for (int i = 0; i < zmienna.a; i++)
		for (int j = 0; j <zmienna.a; j++)
			obrazek[i][j] = 0;
	for (int i = 0; i < zmienna.wysokosc; i++)
		for (int j = 0; j <zmienna.szerokosc; j++)
		{
			fscanf(plik, "%c", &obrazek[i][j]);
			
		}
	
	rysob1(obrazek,zmienna.wysokosc,zmienna.szerokosc);

	for (int i = 0; i < zmienna.a/2; i++)
		for (int j = 0; j < zmienna.a /2; j++)
			obrazek2[i][j] = 0;
	for (int i = 0; i < zmienna.wysokosc; i++)
	{
		for (int j = 0; j < zmienna.szerokosc; j++)
			 obrazek2[i/2][j/2] += (obrazek[i][j] - '0');
	}
	
	for (int i = 0; i < zmienna.a / 2; i++)
	{
		for (int j = 0; j < zmienna.a / 2; j++)
			switch (obrazek2[i][j])
			{
			case 0:
				obrazek2[i][j] = 'A';
				break;
			case 1:
				obrazek2[i][j] = 'L';
				break;
			case 2:
				obrazek2[i][j] = '/';
				break;
			case 3:
				obrazek2[i][j] = '.';
				break;
			case 4:
				obrazek2[i][j] = ' ';
				break;
			}


	}
	
	

	rysob2(obrazek2, zmienna.wysokosc/2, zmienna.szerokosc/2);
		


	fclose(plik);
	free(obrazek);
	free(obrazek2);
	
	system("pause");
	return 0;
}