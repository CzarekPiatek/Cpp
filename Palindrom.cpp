// 19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string.h"
#include "string"
using namespace std;

void czyt_wyraz(char A[], int &n)
{
	string B;
	cout << "Program sprawdza czy wczytany wyraz jest palindromem"<<endl;
	cout << "Wprowadz wyraz: ";
	cin >> B;
	n = B.length();
	for(int i = 0;i<n;i++)
	{
		A[i] = B[i];
	}
}
void sprawdz_wyraz(char A[], int n)
{
	int a = 0;
	int b = n/2;
	int c = n-1;
	for(int i=0;i<b;i++)
	{
		if(A[i] == A[c])
		{
			a++;
		}
		c--;
	}
	if (a == b)
	{
		cout << "Wyraz ";
		for(int i = 0;i<n;i++)
		{
			cout << A[i];
		}
		cout << " jest palindromem." << endl;
	}
	else
	{
		cout << "Wyraz ";
		for(int i = 0;i<n;i++)
		{
			cout << A[i];
		}
		cout << " nie jest palindromem." << endl;
	}
}
int main()
{
	int n;
	char A[100];
	czyt_wyraz(A, n);
	sprawdz_wyraz(A, n);
	return 0;
}

