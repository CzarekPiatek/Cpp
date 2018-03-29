// f15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;

bool pitagorejskie(int e,int f, int g)
{
	if((e*e)+(f*f) == (g*g))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int a,b,c;
	cout << "Wprowadz a: ";
	cin >> a;
	cout << "Wprowadz b: ";
	cin >> b;
	cout << "Wprowadz c: ";
	cin >> c;
	if (pitagorejskie(a,b,c) == true)
	{
		cout << "Twoje liczby sa pitagorejskie. " << endl;
	}
	else
	{
		cout << "Twoje liczby nie sa pitagorejskie!"<< endl;
	}
	int d = 30;
	for (int x=1;x<=d;x++)
	{
		for (int y=1;y<=d;y++)
		{
			for (int z=1;z<=d;z++)
			{
				if(pitagorejskie(x,y,z) == true)
				{
					cout << "Liczby pitagorejskie to: " << x << ", " << y << ", " << z << endl;
				}
			}
		}
	}
	return 0;
}

