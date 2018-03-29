// 39.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;
int const n_max = 20;

struct uczen
{
	string imie, nazwisko;
	int polski, matematyka, fizyka, informatyka;
};

void czyt_dane(int &n, uczen dane[n_max])
{
	cout << "Ilu uczniow chcesz wpisac: ";
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cout << "Podaj imie: ";
		cin >> dane[i].imie;
		cout << "Podaj nazwisko: ";
		cin >> dane[i].nazwisko;
		cout << "Podaj ocene z polskiego: ";
		cin >> dane[i].polski;
		cout << "Podaj ocene z matematyki: ";
		cin >> dane[i].matematyka;
		cout << "Podaj ocene z fizyki: ";
		cin >> dane[i].fizyka;
		cout << "Podaj ocene z informatyki: ";
		cin >> dane[i].informatyka;
	}
}
void pisz_dane(int n, uczen dane[n_max])
{
	for (int i = 0; i<n; i++)
	{
		cout << "Numer " << i << endl;
		cout << "Imie: " << dane[i].imie;
		cout << " Nazwisko: " << dane[i].nazwisko << endl;
		cout << "Ocena z polskiego: " << dane[i].polski << endl;
		cout << "Ocena z matematyki: " << dane[i].matematyka << endl;
		cout << "Ocena z fizyki: "<< dane[i].fizyka << endl;
		cout << "Ocena z informatyki: " << dane[i].informatyka << endl << endl;
	}
}
void sort_dane(int n, uczen dane[n_max])
{
	for (int i = 0; i<n; i++)
	{
		for (int j = 1; j<n; j++)
		{
			if(dane[j].nazwisko[0] < dane[j-1].nazwisko[0])
			{
				swap(dane[j],dane[j-1]); 
			}
		}
	}
}
void srednia(int n, uczen dane[n_max], float &srednia_min, float &srednia_max, int &i_min, int &i_max)
{
	srednia_min = 6;
	srednia_max = 0;
	for (int i = 0; i<n; i++)
	{
		float c = (dane[i].informatyka + dane[i].fizyka + dane[i].matematyka +dane[i].polski);
		c = c/4;
		if (i == 0)
		{
			srednia_min = c;
			srednia_max = c;
		}
		if (c > srednia_max)
		{

			srednia_max = c;
			i_max = i;
		}
		if (c < srednia_min)
		{
			srednia_min = c;
			i_min = i;
		}
	}
}
void pisz_srednia(int i_min, int i_max, uczen dane[n_max], float srednia_min, float srednia_max)
{
	cout << "Uczen: "<< dane[i_max].imie << " " << dane[i_max].nazwisko << " posiada najwyzsza srednia: " << srednia_max << endl;  
	cout << "Uczen: "<< dane[i_min].imie << " " << dane[i_min].nazwisko << " posiada najnizsza srednia: " << srednia_min << endl;
}
int main()
{	
	float srednia_min = 0;
	float srednia_max = 0;
	int i_min = 0; 
	int i_max = 0;
	int n = 0;
	uczen dane[20];
	czyt_dane(n,dane);
	sort_dane(n,dane);
	pisz_dane(n,dane);
	srednia(n,dane,srednia_min,srednia_max,i_min,i_max);
	pisz_srednia(i_min,i_max,dane,srednia_min,srednia_max);
	return 0;
}

