#include <iostream>
#include "Date.h"
#include "Student.h"
#include "String.h"
int main()
{
	Date date( 2022,8,11 );
	date.Print();
	Student student("han",20 );
	student.Print();
	String s1 ("Hello");
	s1.Print();
}