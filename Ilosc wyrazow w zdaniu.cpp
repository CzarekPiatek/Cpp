// 36.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;

int sprawdz(string A)
{
	int a = A.length();
	a--;
	int b = 1;
	for (int i = 0;i<=a;i++)
	{
		if (A[i] == ' ')
		{
			b++;
		}
	}
	if (A[a] == ' ')
	{
		b--;
	}
	return b;
}

int main()
{
	string A;
	cout << "Wprowadz wyraz: ";
	getline(cin,A);
	cout << "Liczba wyrazow wynosi: " << sprawdz(A) << endl;
	return 0;
}

