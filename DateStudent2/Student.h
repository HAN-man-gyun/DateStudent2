#pragma once
#include<iostream>
class Student
{
	std::string mName;
	int mScore{};
public:
	Student()
	{

	}
	Student(std::string name, int score);
	~Student()
	{

	}
	void Print();
};

