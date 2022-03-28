#include "Triad.h"
#include <iostream>

using namespace std;

void Triad::Init(int a, int b, int c)
{
	setA(a);
	setB(b);
	setC(c);
}

void Triad::augmentationA()
{
	a += 1;
}

void Triad::augmentationB()
{
	b += 1;
}

void Triad::augmentationC()
{
	c += 1;
}

void Triad::Display() const
{
	cout << "a = " << getA() << endl;
	cout << "b = " << getB() << endl;
	cout << "c = " << getC() << endl;
}
void Triad::Read()
{
	int a,b,c;
	cout << "a =  "; cin >> a;
	cout << "b =  "; cin >> b;
	cout << "c =  "; cin >> c;
	Init(a,b,c);
}