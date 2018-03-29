// 19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;

void czytaj_dane(int &n, int X[ ], int Y[ ])
{
	char B[] = {"xxyzabcdefg"};
	cout << "Program liczy iloczyn skalarny dwoch wektorow" << endl;
	cout << "Wprowadz rozmiar wektorow: ";
	cin >> n;
	for (int i = 1; i<=n;i++)
	{
		cout << "Pierwszy wektor: Wprowadz "<< B[i] << i << ": ";
		cin >> X[i-1];
		cout << "Drugi wektor: Wprowadz " << B[i]<< i << ": ";
		cin >> Y[i-1];
	}
}
int iloczyn_skalarny(int n, int X[ ], int Y[ ])
{
	int s = 0;
	for (int i=0;i<n;i++)
	{
		s = s + X[i]*Y[i];
	}
	return s;
}
int main()
{
	int n, x[10],y[10];
	czytaj_dane(n,x,y);
	cout << "Iloczyn skalarny dwoch wektorow wynosi: " << iloczyn_skalarny(n,x,y) << endl;
	return 0;
	
}

