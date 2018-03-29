#include "stdafx.h"
#include "iostream"
#define _USE_MATH_DEFINES
#include "math.h"
using namespace std;

int main()
{
	float f,r,kat,rad;
	cout << "Wprowadz promien: ";
	cin >> r;
	cout << "Wprowadz kat: ";
	cin >> kat;
	rad = (M_PI*kat)/180;
	f=((r*r)/2)*(((M_PI*kat)/180)- sin(rad));
	cout << "Pole odcinka kolowego wynosi: " << f << endl;
	return 0;
}

