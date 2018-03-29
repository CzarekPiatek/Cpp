// piatek.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int a, b, suma;
	suma = 0;
	cout << "Wprowadz ilosc liczb: ";
	cin >> a;
	for (int i=1;a>i;i++)
	{
		suma = suma + (i*i);
		cout << i << "*" << i << " + ";
		b = a;
	}
	suma = suma + (b*b);
	cout << b << "*" << b << " = " << suma <<endl;
	return 0;
}

