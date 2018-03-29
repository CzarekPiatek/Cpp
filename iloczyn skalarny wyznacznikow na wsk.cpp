// 32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "vector"
using namespace std;

void czytaj_tab(vector<int> *X, vector<int> *Y)
{
	cout << "Wprowadzasz dane do pierwszej tablicy." << endl;
	for(int i = 0;(*X).size()>i;i++)
	{
		cout << "Wprowadz element nr " << i << ": ";
		cin >> (*X)[i]; 
	}
	cout << "Wprowadzasz dane do drugiej tablicy." << endl;
	for(int i = 0;(*Y).size()>i;i++)
	{
		cout << "Wprowadz element nr " << i << ": ";
		cin >> (*Y)[i]; 
	}
}
void pisz_tab(vector<int> X, vector<int> Y)
{
	cout << "Tablica pierwsza: " << endl;
	for(int i = 0;X.size()>i;i++)
	{
		cout << X[i] << " ";
	}
	cout << endl;
	cout << "Tablica druga: " << endl;
	for(int i = 0;Y.size()>i;i++)
	{
		cout << Y[i] << " ";
	}
	cout << endl;
}

int iloczyn_skalarny(vector<int> X, vector<int> Y)
{
	int a = 0;
	for(int i = 0;X.size()>i;i++)
	{
		a = X[i] * Y[i] + a;
	}
	return a;
}

int main()
{
	int n;
	cout << "Wprowadz wielkosc tablicy: ";
	cin >> n;
	vector <int> A(n);
	vector <int> B(n);
	czytaj_tab(&A,&B);
	pisz_tab(A,B);
	cout << "Iloczyn skalarny wynosi: " << iloczyn_skalarny(A,B) << endl;
	return 0;
}

