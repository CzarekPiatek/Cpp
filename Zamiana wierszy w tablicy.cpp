// 19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <cstdlib>
#include <time.h>
using namespace std;

void dane(int A[][10] )
{
	int c = 0;
	for (int i=0;i<=9;i++)
	{
		for (int j=0;j<=7;j++)
		{
			int los =(rand()%9)+1;
			A[j][i] = los;
		}
	}
}
void pisz_tab(int A[][10])
{
	for (int i=0;i<=9;i++)
	{
		for (int j=0;j<=7;j++)
		{
			cout << "A["<< j << "][" << i << "]:" <<  A[j][i]<< " ";
		}
	}
}	

void zamiana(int A[][10])
{
	int k,l,B[10],m=0;
	cout << "Teraz zamienie wiersz k z wierszem l" << endl;
	cout << "Wprowadz wiersz k:";
	cin >> k;
	cout << "Wprowadz wiersz l:";
	cin >> l;
	k--;
	l--;
	for (int i=0;i<=9;i++)
	{
		for (int j=0;j<=7;j++)
		{
			if (k>l)
			{
				if (l==i)
				{
					B[m]=A[j][i];
					A[j][i] = A[j][k];
					A[j][k] = B[m];
					m++;
				}
				
			}
			if (l>k)
			{
				if (k==i)
				{
					B[m]=A[j][i];
					A[j][i] = A[j][l];
					A[j][l] = B[m];
					m++;
				}
				
			}
		}
	}
	for (int i=0;i<=9;i++)
	{
		for (int j=0;j<=7;j++)
		{
			cout << "A["<< j << "][" << i << "]:" <<  A[j][i]<< " ";
		}
	}
}


int main()
{
	srand(time(NULL));
	int A[8][10];
	dane(A);
	pisz_tab(A);
	zamiana(A);
	return 0;
}

