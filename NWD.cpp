
#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int a, b, nwp, a1,b1;
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
			if (a1>b1)
			{
				a1=a1-b1;
			}
			else
			{
				b1=b1-a1;
			}
		} while(a1!=b1);
		nwp = a1;
		cout << "Najwiekszy wspolny podzielnik to: " << nwp << endl;
	}
	else
	{
		cout << "brak rozwiazan" << endl;
	}
	return 0;
}
