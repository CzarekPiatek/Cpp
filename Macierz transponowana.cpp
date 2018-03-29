// 19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <cstdlib>
#include <time.h>
using namespace std;

void dane(int &n, int &m, int A[ ][5])
{
	n = n-1;
	m = m-1;
	for (int i=0;i<=n;i++)
	{
		for (int j=0;j<=m;j++)
		{
			int los =(rand()%9)+1;
			A[i][j] = los;
		}
	}
}
void pisz_tab(char napis[], int n, int m, int A[ ][5])
{
	for (int i=0;i<=n;i++)
	{
		for (int j=0;j<=m;j++)
		{
			cout << "A["<< i << "][" << j << "]:" <<  A[i][j]<< " ";
		}
		cout << endl;
	}
}	

void pisz_tab_trans(char napis[], int n, int m, int AT[ ][8])
{
	for (int i=0;i<=m;i++)
	{
		for (int j=0;j<=n;j++)
		{
			cout << "AT["<< i << "][" << j << "]:" <<  AT[i][j]<< " ";
		}
		cout << endl;
	}
}	
void trans(int n, int m, int A[ ][5], int AT[][8])
{
	for (int i=0;i<=n;i++)
	{
		for (int j=0;j<=m;j++)
		{
			AT[j][i] = A[i][j];
		}
	}
}


int main()
{
	srand(time(NULL));
	int n,m;
	cout << "Wprowadz ilosc kolumn: ";
	cin >> n;
	cout << "Wprowadz ilosc wierszy: ";
	cin >> m;
	int A[8][5];
	int AT[5][8];
	dane(n,m,A);
	pisz_tab("Tablica pierwotna",n,m,A);
	cout << endl;
	trans(n,m,A,AT);
	pisz_tab_trans("Tablica zmodyfikowana",n,m,AT);
	return 0;
}

