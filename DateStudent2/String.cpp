#include "String.h"
#include <iostream>
#include <cstring>
String::String(const char* input)
{
	//input�� ���� ���������
	//���ڿ� ���ͷ��� �ݵ�� ��ĳ���ͷ� ����
	int mLength = strlen(input)+1;
	int i;
	mArray = new char[mLength];
	for (i = 0; i < mLength; i++)
	{
		mArray[i] = input[i];
	}
	//input ->�����Ͽ�mArrayä��;
}
String::~String()
{
	delete[] mArray;
}

void String::Print()
{
	std::cout << mArray << std::endl;
}

