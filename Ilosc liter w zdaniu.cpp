// 38.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;

void litery(string A)
{
	int ile = A.length();
	ile--;
	int c = 0;
	for(int i = 0; i<=ile; i++)
	{
		c = 0;
		for(int j = 0; j<=ile; j++)
		{
			if (A[i] == A[j])
			{
				c++;
			}
		}
		cout << "Litera " << A[i] << " wystepuje " << c << " razy." << endl;
	}
}

void litera(string A)
{
	int ile = A.length();
	ile--;
	int ascii = 255;
	int c = 0;
	char b = 0;
	for(int i = 0; i<=ascii; i++)
	{
		b = i;
		c = 0;
		for(int j = 0; j<=ile; j++)
		{
			if (b == A[j])
			{
				c++;
			}
		}
		if (c > 0 && b == ' ')
		{
			cout << "Spacja wystepuje " << c << " razy." << endl;
		}
		if (c > 0 && b != ' ')
		{
			cout << "Litera " << b << " wystepuje " << c << " razy." << endl;
		}
	}
}

int main()
{
	string A;
	cout << "Wprowadz tekst: ";
	getline(cin,A);
	litera(A);
	return 0;
}

