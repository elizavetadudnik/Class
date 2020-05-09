#include "Phonebook2.0.h"
#include <fstream>
#include <cassert>
#include <iostream>

using namespace std;

// Конструктор.
Phonebook::Phonebook()
{
	subscribers = new Subscriber[maxNumberOfNotes];
	fillArrayFromFile();
}

// Деструктор.
Phonebook::~Phonebook()
{
	delete[] subscribers;
}

// Заполняет массив пользователей из файла.
void Phonebook::fillArrayFromFile()
{
	ifstream read("Phonebook.txt");
	assert(read.is_open());

	// Создаем буфферы для имени и номера.
	char* name = new char[50];
	char* number = new char[50];

	while (!read.eof())
	{
		// Считываем из файла имя и номер (считывание по словам).
		read >> name;
		read >> number;

		// Создали пользователя, положили его в массив пользователей.
		Subscriber* s = new Subscriber(name, number);
		subscribers[countSubscribers] = *s;
		++countSubscribers;		
	}

	delete[] name;
	delete[] number;
}

// Печатает все записи из массива пользователей.
void Phonebook::printAllNotes()
{
	if (countSubscribers == 0)
	{
		cout << "Phonebook is empty" << endl;
		return;
	}

	// Печатает имя и телефон всех пользователей из массива пользователей.
	for (int i = 0; i < countSubscribers; ++i)
	{
		subscribers[i].print();
	}
}
