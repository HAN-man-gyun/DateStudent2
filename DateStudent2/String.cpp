#include "String.h"
#include <iostream>
#include <cstring>
String::String(const char* input)
{
	//input은 현재 몇글자인지
	//문자열 리터럴은 반드시 널캐릭터로 끝남
	int mLength = strlen(input)+1;
	int i;
	mArray = new char[mLength];
	for (i = 0; i < mLength; i++)
	{
		mArray[i] = input[i];
	}
	//input ->복사하여mArray채움;
}
String::~String()
{
	delete[] mArray;
}

void String::Print()
{
	std::cout << mArray << std::endl;
}

