#include "Student.h"
#include<iostream>
Student::Student(std::string name, int score) : mName(name), mScore(score)
{
}
void Student::Print()
{
	std::cout << "Print : " << mName << "-" << mScore << std::endl;
}
