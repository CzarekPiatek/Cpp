// trzynaste.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int a,b=0,c=0;
	do
	{
		cout << "Wprowadz liczbe: ";
		cin >> a;
		if (a==1)
		{
			cout << "1" << endl;
		}
		if (a==2)
		{
			cout << "1, 2" << endl;
		}
		else
		{
			cout << "1, 2, ";
			for (int i=3;a>=i;i++)
			{
				for (int j=2;i>=j;j++)
				{
					if(i%j==0)
					{
						c++;
					}
				}
				if (c==1)
				{
					cout << i << ", ";
				}
				c=0;
			}
		}
		cout << endl;
	}while(a!=0);
	return 0;
}

