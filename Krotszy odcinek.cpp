// czwarte.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	float a,b,c,d;
	cout << "Wprowadz pierwszy odcinek: ";
	cin >> a;
	cout << "Wprowadz drugi odcinek: ";
	cin >> b;
	cout << "Wprowadz trzeci odcinek: ";
	cin >> c;
	if (a<b && a<c)
	{
		cout << "Najkrotszy odcinek to a: " << a << endl;
	}
	else if (b<a && b<c)
	{
		cout << "Najkrotszy odcinek to b: " << b << endl;
	}
	else
	{
		cout << "Najkrotszy odcinek to c: " << c << endl;
	}
	return 0;
}

