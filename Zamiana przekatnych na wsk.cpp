// 19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <cstdlib>
#include <time.h>
using namespace std;

void dane(int *wsk_n, int wsk_A[][10])
{
	int wymiary;
	cout << "Wprowadz wymiary tablicy: ";
	cin >> wymiary;
	for (int i=0;i<wymiary;i++)
	{
		for (int j=0;j<wymiary;j++)
		{
			int los =(rand()%9)+1;
			wsk_A[i][j] = los;
		}
	}
	*wsk_n = wymiary;
	cout << endl;
}
void pisz_tab(char *napis, int *wsk_n, int wsk_A[][10])
{
	cout << napis << endl;
	for (int i=0;i<*wsk_n;i++)
	{
		for (int j=0;j<*wsk_n;j++)
		{
			cout << " " <<  wsk_A[i][j] << " ";
		}
		cout << endl;
	}
}	

void zamiana(int *wsk_n, int wsk_A[][10])
{
	for (int i=0;i<*wsk_n;i++)
	{
		for (int j=0;j<*wsk_n;j++)
		{
			if(i==j)
			{
				swap(wsk_A[i][j],wsk_A[*wsk_n-1-i][j]);
			}
		}
	}
}

int main()
{
	srand(time(NULL));
	int n = 0;
	int A[10][10];
	dane(&n,A);
	pisz_tab("Tablica pierwotna",&n,A);
	zamiana(&n,A);
	pisz_tab("Tablica zmieniona",&n,A);
	return 0;
}

