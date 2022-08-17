#include "Date.h"
#include<iostream>
Date::Date(int Day, int Month, int Year)
{
	mDay = Day;
	mMonth = Month;
	mYear = Year;
}
void Date::Print()
{
	std::cout << "Print : " << mDay << "-" << mMonth << "-" << mYear << std::endl;
}
