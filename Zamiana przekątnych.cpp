// 19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <cstdlib>
#include <time.h>
using namespace std;

void dane(int A[ ][11])
{
	for (int i=0;i<=10;i++)
	{
		for (int j=0;j<=10;j++)
		{
			int los =(rand()%100)+1;
			A[i][j] = los;
		}
	}
}
void pisz_tab(int A[ ][11])
{
	for (int i=0;i<=10;i++)
	{
		for (int j=0;j<=10;j++)
		{
			cout << " " <<  A[i][j] << " ";
		}
		cout << endl;
	}
}	

void zamien(int A[][11])
{
	for (int i=0;i<11;i++)
	{
		for (int j=0;j<11;j++)
		{
			if(i==j)
			{
				swap(A[i][j],A[10-i][j]);
			}
		}
	}
}

int main()
{
	srand(time(NULL));
	int A[11][11];
	dane(A);
	cout << endl <<"Tablica pierwotna" << endl;
	pisz_tab(A);
	zamien(A);
	cout << endl <<"Tablica zmieniona" << endl;
	pisz_tab(A);
	return 0;
}

