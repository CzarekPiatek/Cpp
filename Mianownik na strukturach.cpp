// 41.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

struct ulamek
{
	int licznik,mianownik;
	float wartosc;
};

ulamek trzeci(struct ulamek pierwszy, struct ulamek drugi)
{
	ulamek a;
	a.licznik = drugi.licznik * pierwszy.licznik;
	a.mianownik = drugi.mianownik * pierwszy.mianownik;
	a.wartosc = drugi.wartosc * pierwszy.wartosc;
	return a;
}

int main()
{
	ulamek pierwszy;
	ulamek drugi;
	pierwszy.licznik = 1;
	pierwszy.mianownik = 3;
	pierwszy.wartosc = (float)pierwszy.licznik / (float)pierwszy.mianownik;
	drugi.licznik = 1;
	drugi.mianownik = 3;
	drugi.wartosc =(float)drugi.licznik / (float)drugi.mianownik;
	ulamek trzeci1 = trzeci(pierwszy,drugi);
	cout << "Pomnozony licznik: " << trzeci1.licznik << endl << "Pomnozony mianownik: " << trzeci1.mianownik << endl << "Pomnozona wartosc: "<< trzeci1.wartosc << endl;
	return 0;
}

