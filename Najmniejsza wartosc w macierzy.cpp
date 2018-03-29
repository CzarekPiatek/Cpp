// 19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <cstdlib>
#include <time.h>
using namespace std;

void dane(int A[ ][10])
{
	for (int i=0;i<=9;i++)
	{
		for (int j=0;j<=9;j++)
		{
			int los =(rand()%100)+1;
			A[i][j] = los;
		}
	}
}
void pisz_tab(int A[ ][10])
{
	for (int i=0;i<=9;i++)
	{
		for (int j=0;j<=9;j++)
		{
			cout << " " <<  A[i][j] << " ";
		}
		cout << endl;
	}
}	

void min(int A[][10])
{
	int a = 0;
	int indeksi = 0;
	int indeksj = 0;
	for (int i=0;i<=9;i++)
	{
		for (int j=0;j<=9;j++)
		{
			if(i==0 && j==0)
			{
				a=A[i][j];
				indeksi=i;
				indeksj=j;
			}
			if (a>A[i][j])
			{
				a=A[i][j];
				indeksi=i;
				indeksj=j;
			}
		}
	}
	cout << "Liczba najmniejsza to: " << a << endl;
	cout << "Indeks wierszowy: " << indeksi << endl;
	cout << "Indeks kolumnowy: " << indeksj << endl;
}

int main()
{
	srand(time(NULL));
	int A[10][10];
	dane(A);
	cout << endl;
	pisz_tab(A);
	cout << endl;
	min(A);
	return 0;
}

