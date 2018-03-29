// dwunaste.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "math.h"
using namespace std;

int main()
{
	float n;
	int p1;
	int suma = 0;
	cout << "Wprowadz liczbe: ";
	cin >> n;
	int c = n;
	int p = sqrt(n);
	while (p>1)
	{
		if (c%p==0)
		{
			suma = suma +p;
			p1 = c/p;
			if (p1!=p)
			{
				suma = suma+p1;
			}
		}
		p=p-1;
	}
	suma = suma+1;
	if (suma == n)
	{
		cout << n << " jest liczba doskonala."<<endl;
	}
	else 
	{
		cout << n << " nie jest liczba doskonala."<<endl;
	}
	return 0;
}

