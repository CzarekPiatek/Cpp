// 40.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

struct trojkat
{
	int a,b,c;
};

int trojkat1(struct trojkat pierwszy)
{
	return pierwszy.a + pierwszy.b + pierwszy.c;
}

int main()
{
	trojkat pierwszy;
	pierwszy.a=2;
	pierwszy.b=3;
	pierwszy.c=5;
	cout << "Obwod trojkata wynosi: " << trojkat1(pierwszy) << endl;
	return 0;
}

