// dziewiate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "cmath"
using namespace std;

int main()
{
	float a;
	cout << "Podaj liczbe: ";
	cin >> a;
	float b = 1;
	int potega=0;
	do
	{
		b++;
		potega = pow(b,2);
	} while(potega<a);
	b--;
	cout << "Czesc calkowita pierwiastka kwadratowego z liczby " << a << " wynosi: " << b << endl;
	return 0;
}

