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
void minimalny (int *wsk_n, int *wsk_X)
{
	int a=0, f=0;
	for(int i=0;i<*wsk_n;i++)
	{
		if(i == 0)
		{
			a = *(wsk_X + i);
		}
		if (*(wsk_X + i) < a)
		{
			a = *(wsk_X + i);
			f = i;
		}
	}
	cout << "Najmniejsza wartosc to: " << a << endl;
	cout << "Indeks najmniejszej wartosci: " << f << endl;
}

int main()
{
	int A[100];
	int n = 0;
	czytaj_dane(&n,A);
	minimalny(&n,A);
	return 0;
}

