// 18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <cstdlib>
#include <time.h>
using namespace std;


void czyt_dane(int A[], int &n)
{
	int a,b;
	cout << "Wprowadz wielkosc tablicy: ";
	cin >> n;
	cout << "Podaj przedzial liczb losujacych" << endl;
	cout << "Od: ";
	cin >> a;
	cout << "Do: ";
	cin >> b;
	int c = b - a;
	for (int i=0;i<n;i++)
	{
		int los =(rand()%c)+a;
		A[i] = los;
	}
}
void pisz_tab(int A[], int n)
{
	for (int i=0;i<n;i++)
	{
		cout << "A[" << i << "] = " << A[i] << endl;
	}
}
double srednia(int A[], int n)
{
	double suma=0;
	for (int i=0;i<n;i++)
	{
		suma = suma + A[i];
	}
	return suma/n;
}
double ile(int A[], int n)
{
	int b,c=0;
	cout << "Podaj liczbe: ";
	cin >> b;
	for (int i=0;i<n;i++)
	{
		if (A[i] == b)
		{
			c++;
		}
	}
	cout << "Twoja liczba powtarza sie: ";
	return c;
}

double nieparzyste(int A[], int n)
{
	double suma=0;
	int ilosc=0;
	for (int i=0;i<n;i++)
	{
		if (A[i]%2 == 1)
		{
			ilosc++;
			suma = suma+A[i];
		}
	}
	cout << "Ilosc nieparzystych elementow wynosi: " << ilosc << endl;
	return suma;
}
double min(int A[], int n)
{
	int szukany, indeks;
	for (int i=0;i<n;i++)
	{
		if(i==0)
		{
			szukany = A[i];
			indeks = i;
		}
		if (A[i] < szukany)
		{
			szukany = A[i];
			indeks = i;
		}
	}
	cout << "Najmniejsza wartosc tablicy: "<< szukany << endl;
	return indeks;
}
double max(int A[], int n)
{
	int szukany, indeks;
	for (int i=0;i<n;i++)
	{
		if(i==0)
		{
			szukany = A[i];
			indeks = i;
		}
		if (A[i] > szukany)
		{
			szukany = A[i];
			indeks = i;
		}
	}
	cout << "Najwieksza wartosc tablicy: "<< szukany << endl;
	return indeks;
}
double sasiednie(int A[], int n)
{
	int a = 0, b,pom=0;
	for (int i=1;i<n;i++)
	{
		int c = A[i]+A[i+1];
		if(i==1)
		{
			a = A[1] + A[0];
			b = A[1] + A[2];
			if (a > b)
			{
				pom = a;
			}
			if (b > a)
			{
				pom = b;
			}
		}
		else if (pom < c)
		{
			pom = c;
		}
	}
	return pom;
}
double najczestszy(int A[], int n)
{
	int ile = 0, ilosc = 0,c,jaka;
	for (int i=0;i<n;i++)
	{
		c = A[i];
		for (int j=0;j<n;j++)
		{
			if (c == A[j])
			{
				ile++;
			}
			if (ile > ilosc)
			{
				jaka = c;
				ilosc = ile;
			}
		}
		ile = 0;
	}
	cout << "Element najczesciej wystepujacy w tablicy " << jaka << endl;
	return ilosc;
}
int main()
{
	srand(time(NULL));
	int n, A[100];
	czyt_dane(A,n);
	pisz_tab(A,n);
	cout << "Srednia elementow tablicy: " << srednia(A,n) << endl;
	cout << ile(A,n) << " razy." << endl;
	cout << "Suma elementow nieparzystych wynosi: " << nieparzyste(A,n) << endl;
	cout << "Indeks najmniejszej wartosci tablicy: A[" << min(A,n) << "] " << endl;
	cout << "Indeks najwiekszej wartosci tablicy: A[" << max(A,n) << "] " << endl;
	cout << "Para sasiednich elementow o najwiekszej sumie: "<< sasiednie(A,n) << endl;
	cout << "Element wystapil " << najczestszy(A,n) << " razy w tablicy. " << endl;
	return 0;
}

