// 7.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int a;
	cout << "Wprowadz wielkosc litery A: ";
	cin >> a;
	int b = a;
	for(int i=0;i<a;i++)
	{
		for(int j=a-1;j>i;j--)
		{
			cout << " ";
		}
		
		cout << "A";
		if (i==0)
		{
			cout << endl;
		}
		else
		{
			for(int k=0;k<i;k++)
			{
				if(i==b/2)
				{
					cout << "A";
				}
				else
				{
					cout << " ";
				}
			}
			for(int h=0;h<i-1;h++)
			{
				if(i==b/2)
				{
					cout << "A";
				}
				else
				{
					cout << " ";
				}
			}
			cout << "A";
			cout << endl;
		}
	}

	return 0;
}

