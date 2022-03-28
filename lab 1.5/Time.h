#pragma once
#include <string>
#include "Triad.h"

using namespace std;
class Time
{
	private:
		Triad triad;
	public:
		Triad getTriad() const { return triad; }
		void setTriad(Triad triad) { this->triad = triad; }

		bool Init(int hour, int minute, int second);
		void Display() const;
		void Read();
		void IncreaseSecond(int second);
		void IncreaseMinute(int minute);
		bool secondCheck(int);
		bool minuteCheck(int);
};