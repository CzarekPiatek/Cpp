// dziesiate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "cmath"
#include "time.h"
#include "Windows.h"
using namespace std;

int main()
{
	srand((unsigned) time(NULL) );
	int p=1; 
	int q=1;
	while (p!=0 && q!=0)
	{
		int p=(double)rand ( )/(RAND_MAX)*6+1; 
		int q=(double)rand ( )/(RAND_MAX)*6+1;
		if ((p==2 || p==4 || p==6) && (q==2 || q==4 || q==5))
		{
			cout << "Wygrana wynosi: " << p+(3*q) << endl;
			system("pause");
		}
		if ((p==2 || p==4 || p==6) && (q==1 || q==3 || q==6))
		{
			cout << "Wygrana wynosi: " << 2*q << endl;
			system("pause");
		}
		if ((p==1 || p==3 || p==5) && (q==1 || q==3 || q==6))
		{
			if (p==q)
			{
				cout << "Wygrana wynosi: " << (5*p)+3 << endl;
				system("pause");
			}
			else
			{
				cout << "Wygrana wynosi: " << (2*q)+p << endl;
				system("pause");
			}
		}
		if ((p==1 || p==3 || p==5) && (q==2 || q==4 || q==5))
		{
			if (p==q && p==5)
			{
				cout << "Wygrana wynosi: " << (min(p,q)+4)+5<< endl;
				system("pause");
			}
			else
			{
				cout << "Wygrana wynosi: " << min(p,q)+4 << endl;
				system("pause");
			}
		}
		system("cls");
	}
	return 0;
}

