#include "Time.h"
#include <iostream>
using namespace std;

bool Time::Init(int hour, int minute, int second)
{
	if (hour < 24 && hour > -1 && minute < 60 && minute > -1 && second < 60 && second > -1)
	{
		Triad t;
		t.Init(hour, minute, second);
		setTriad(t);
		return true;
	}
	else
		return false;
}

bool Time::secondCheck(int s)
{
	if (s < 0 || s >= 60)
	{
		cout << "Wrong arguments to Init! = " << endl;
		return false;
	}
	else
		return true;
}

bool Time::minuteCheck(int s)
{
	if (s < 0 || s >= 60)
	{
		cout << "Wrong arguments to Init! = " << endl;
		return false;
	}
	else
		return true;
}

void Time::Display() const
{
	cout << endl;
	cout << "hour = " << triad.getA() << endl;
	cout << "minute = " << triad.getB() << endl;
	cout << "second = " << triad.getC() << endl << endl;
}

void Time::IncreaseSecond(int second)
{
	int a1;
	if (second + triad.getC() >= 60)
	{
		triad.augmentationB();
		if (triad.getB() >= 60)
		{
			triad.augmentationA();
			triad.setB(0);
		}
		a1 = second + triad.getC() - 60;
	}
	else
	{
		a1 = second + triad.getC();
	}
	triad.setC(0);
	for (int i = 0; i < a1; i++)
	{
		triad.augmentationC();
	}
}

void Time::IncreaseMinute(int minute)
{
	int a1;
	if (minute + triad.getB() >= 60)
	{
		triad.augmentationA();
		if (triad.getA() >= 24)
		{
			cout << "Error, 24hour = one day" << endl;
			triad.setA(0);
		}
		a1 = minute + triad.getB() - 60;
		triad.setB(a1);
	}
	else
	{
		a1 = minute + triad.getB();
	}
	triad.setB(0);
	for (int i = 0; i < a1; i++)
	{
		triad.augmentationB();
	}
}

void Time::Read()
{
	int x, y, z;
	bool x1;
	do
	{
		cout << "hour = "; cin >> x;
		cout << "minute = "; cin >> y;
		cout << "second = "; cin >> z;
		x1 = Init(x, y, z);
		if (!x1)
			cout << "Wrong arguments to Init!" << endl;
	} while (!x1);
}