// 34.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include "iostream"
#include "vector"
#include <cstdlib>
#include <time.h>
using namespace std;

void dane(vector<vector<int>> * A)
{
	for (int i=0;(*A).size()>i;i++)
	{
		for (int j=0;(*A)[i].size()>j;j++)
		{
			int los =(rand()%10)+1;
			(*A)[i][j] = los;
		}
	}
}

void pisz_tab(char *napis, vector<vector<int>> A)
{
	cout << napis << endl;
	for (int i=0;A.size()>i;i++)
	{
		for (int j=0;A[i].size()>j;j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}

void zamiana(int n,int m,vector<vector<int>> *A)
{
	for (int i=0;(*A).size()>i;i++)
	{
		for (int j=0;(*A)[i].size()>j;j++)
		{
			for (int l=0;l<(*A)[i].size()-1;l++)
			{
				if ((*A)[i][l]<(*A)[i][l+1])
				{
					swap((*A)[i][l],(*A)[i][l+1]);
				}
			}
		}
	}
}

int main()
{
	int n,m;
	cout << "Wprowadz ilosc wierszy: ";
	cin >> n;
	cout << "Wprowadz ilosc kolumn: ";
	cin >> m;
	vector <vector <int>> A(n,vector <int> (m));
	dane(&A);
	pisz_tab("Tablica pierwotna",A);
	zamiana(n,m,&A);
	pisz_tab("Tablica zmodyfikowana",A);
	srand(time(NULL));
	return 0;
}

