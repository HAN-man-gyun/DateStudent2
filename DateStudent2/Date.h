#pragma once
class Date
{
	int mDay;
	int mMonth;
	int mYear;
public:
	Date(int Day, int Month, int Year);
	~Date()
	{}
	void Print();
};

