// jedenaste.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <time.h>
#include <Windows.h>
using namespace std;

int main()
{
	string A;
	int a=1, b, c, stawka, brutto, netto;
	while (A !="0" && a!=0)
	{
		cout << "Wprowadz kategorie pracownika: ";
		cin >> A;
		if (A == "A")
		{
			stawka = 15;
		}
		if (A == "B")
		{
			stawka = 25;
		}
		if (A == "C")
		{
			stawka = 30;
		}
		if (A == "D")
		{
			stawka = 35;
		}

		cout << "Wprowadz ilosc godzin: ";
		cin >> a;
		if (a>40)
		{
			c = a - 40;
			brutto =((a-c)*stawka)+(c*(stawka*2));
			cout << "Stawka brutto wynosi: " << brutto << endl;
		}
		else 
		{
			brutto = a*stawka;
			cout << "Stawka brutto wynosi: " << brutto << endl;
		}

		if (brutto <= 700)
		{
			netto = brutto*0.85;
			cout << "Stawka netto wynosi: " << netto << endl;
			system("pause");
		}
		if (brutto>700 && brutto<=1200)
		{
			netto = brutto*0.80;
			cout << "Stawka netto wynosi: " << netto << endl;
			system("pause");
		}
		if (brutto>1200)
		{
			netto = brutto*0.25;
			cout << "Stawka netto wynosi: " << netto << endl;
			system("pause");
		}
		system("cls");
	}
	return 0;
}

