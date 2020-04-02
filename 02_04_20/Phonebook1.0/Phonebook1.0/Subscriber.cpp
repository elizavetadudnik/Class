#include "Subscriber.h"
#include <iostream>

using namespace std;

Subscriber::Subscriber(char* name, int nameSize, char* number, int numberSize)
{
	this->name = new char[nameSize];
	for (int i = 0; i < nameSize; ++i)
	{
		this->name[i] = name[i];
	}

	this->nameSize = nameSize;
	this->number = new char[numberSize];
	for (int i = 0; i < nameSize; ++i)
	{
		this->number[i] = number[i];
	}

	this->numberSize = numberSize;
}

Subscriber::~Subscriber()
{
	delete[] name;
	delete[] number;
}

void Subscriber::getName()
{
	for (int i = 0; i < nameSize; i++)
	{
		cout << name[i];
	}
}

void Subscriber::getNumber()
{
	for (int i = 0; i < numberSize; i++)
	{
		cout << number[i];
	}
}