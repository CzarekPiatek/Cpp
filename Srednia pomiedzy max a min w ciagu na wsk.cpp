// 27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void czytaj_dane(int *wsk_n, int *wsk_X)
{
	int ciag;
	cout << "Wprowadz rozmiar ciagu: ";
	cin >> ciag;
	for(int i=0;i<ciag;i++)
	{
		cout << "Wprowadz " << i << " element: ";
		cin >>*(wsk_X+i);
	}
	cout << "Ciag to: " << endl;
	for(int i=0;i<ciag;i++)
	{
		cout << *(wsk_X+i) << " ";
	}
	*wsk_n = ciag;
	cout << endl;
}
void srednia_min_max(int *wsk_n, int *wsk_X)
{
	int a=0, b=0, j=0, k=0;
	float ile=0, suma=0;
	for(int i=0;i<*wsk_n;i++)
	{
		
		if (i == 0)
		{
			a = *(wsk_X);
			b = *(wsk_X);
		}
		if (*(wsk_X + i) < a)
		{
			
			a = *(wsk_X + i);
			j = i;
		}
		if (*(wsk_X + i) > b)
		{
			b = *(wsk_X + i);
			k = i;
		}
	}
	cout << "Indeks elementu maksymalnego: " << k << endl;
	cout << "Indeks elementu minimalnego: " << j << endl;
	if (k > j)
	{
		for(int i=j;i<=k;i++)
		{
			suma = *(wsk_X + i) + suma;
			ile++;
		}
	}
	if (j > k)
	{
		for(int i=k;i<=j;i++)
		{
			suma = *(wsk_X + i) + suma;
			ile++;
		}
	}
	float c = suma/ile;
	cout << "Srednia arytmetyczna elementow lezacych pomiedzy wynosi: " << c << endl;
}

int main()
{
	int A[100];
	int n = 0;
	czytaj_dane(&n,A);
	srednia_min_max(&n,A);
	return 0;
}

