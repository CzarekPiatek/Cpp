#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int a;
	cout << "Wprowadz liczbe: ";
	cin >> a;

	for (int i = a;i>1;i--)
	{
		if (a%i==0)
		{
			cout << i << ", ";
		}
	}
	cout << "1" << endl;
	int b = a;

	while (b!=1)
	{
		if (a%b==0)
		{
			cout << b << ", ";
		}
		b--;
	}
	cout << "1" << endl;

	b = a;
	do
	{
		if (a%b==0)
		{
			cout << b << ", ";
		}
		b--;
	} while(b!=1);
	cout << "1" << endl;
	return 0;
}

