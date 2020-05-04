#define _CRT_SECURE_NO_WARNINGS
#include "Subscriber.h"
#include <cstring>
#include <iostream>

using namespace std;

// Конструктор, устанавливает имя и номер пользователя.
Subscriber::Subscriber(char* name, char* number)
{
	setName(name);
	setNumber(number);
}

// Деструктор. Освобождает выделенную память.
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

// Устанавливает имя у пользователя.
void Subscriber::setName(char* name)
{
	setStr(name, &(this->name));
}

// Устанавливает номер у пользователя.
void Subscriber::setNumber(char* number)
{
	setStr(number, &(this->number));
}

// Возвращает имя пользователя.
char* Subscriber::getName()
{
	return name;
}

// Возвращает номер пользователя.
char* Subscriber::getNumber()
{
	return number;
}

// Печатает имя и номер пользователя на консоль.
void Subscriber::print()
{
	if (number != nullptr && name != nullptr)
	{
		cout << name << "\t" << number << endl;
	}
}

// Копирует значение из строки "str" в строку "destination".
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