#include "iostream"
#include "math.h"
using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	float a,b,r,x1,x2,y1,y2;
	float delta;
	cout << "Wprowadz wspolczynik kierunku prostej a: ";
	cin >> a;
	cout << "Wprowadz wspolczynnik przesuniecia prostej b: ";
	cin >> b;
	cout << "Wprowadz promien okregu r: ";
	cin >> r;
	cout << endl;
	delta = (4*(a*a)*(b*b))-(4*((b*b)-(r*r)+(a*a)*(b*b)-(a*a)*(r*r)));
	x1 = (-(2*a*b) - sqrt(delta))/(2+(2*(a*a)));
	x2 = (-(2*a*b) + sqrt(delta))/(2+(2*(a*a)));
	y1 = a*x1+b;
	y2 = a*x2+b;
	if (delta > 0)
	{
		cout << "Prosta przecina okrag w dwoch punktach:" << endl<< endl;
		cout << "x1: ";
		cout.precision(2);
		cout.width(8);
		cout << x1;
		cout << "    y1: ";
		cout.precision(2);
		cout.width(8);
		cout << y1 << endl;
		cout << "x2: ";
		cout.precision(2);
		cout.width(8);
		cout << x2;
		cout << "    y2: ";
		cout.precision(2);
		cout.width(8);
		cout << y2 << endl<<endl;
	}
	if (delta == 0)
	{
		cout << "Prosta jest styczna do okrêgu" << endl;
		cout << "x1: " << (-b)/(2*a);
	}
	if (delta < 0)
	{
		cout << "Prosta nie ma punktow wspolnych z okrêgiem" << endl;
		cout << delta;
	}
	system("pause");
	return 0;
}