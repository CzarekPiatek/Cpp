
#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int a, b, nww, a1,b1;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	if (a>0 && b>0)
	{
		a1=a;
		b1=b;
		do
		{
			if (a1<b1)
			{
				a1=a1+a;
			}
			else
			{
				b1=b1+b;
			}
		} while(a1!=b1);
		nww = a1;
		cout << "Najmniejsza wspolna wielokrotnosc to: " << nww << endl;
	}
	else
	{
		cout << "Najmniejsza wspolna wielokrotnosc to: 0" << endl;
	}
	return 0;
}

