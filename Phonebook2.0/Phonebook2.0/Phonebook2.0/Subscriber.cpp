#define _CRT_SECURE_NO_WARNINGS
#include "Subscriber.h"
#include <cstring>
#include <iostream>

using namespace std;

// �����������, ������������� ��� � ����� ������������.
Subscriber::Subscriber(char* name, char* number)
{
	setName(name);
	setNumber(number);
}

// ����������. ����������� ���������� ������.
Subscriber::~Subscriber()
{
	if (name != nullptr)
	{
		delete[] name;
	}

	if (number != nullptr)
	{
		delete[] number;
	}
}

// ������������� ��� � ������������.
void Subscriber::setName(char* name)
{
	setStr(name, &(this->name));
}

// ������������� ����� � ������������.
void Subscriber::setNumber(char* number)
{
	setStr(number, &(this->number));
}

// ���������� ��� ������������.
char* Subscriber::getName()
{
	return name;
}

// ���������� ����� ������������.
char* Subscriber::getNumber()
{
	return number;
}

// �������� ��� � ����� ������������ �� �������.
void Subscriber::print()
{
	if (number != nullptr && name != nullptr)
	{
		cout << name << "\t" << number << endl;
	}
}

// �������� �������� �� ������ "str" � ������ "destination".
void Subscriber::setStr(char* str, char** destination)
{
	if (*destination != nullptr)
	{
		delete[] * destination;
	}
	if (str != nullptr)
	{
		int const size = (int)strlen(str);
		*destination = new char[size + 1];
		strcpy(*destination, str);
	}
	else
	{
		*destination = nullptr;
	}
}