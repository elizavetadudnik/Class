#include "Phonebook.h"
#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;

Phonebook::Phonebook() 
{ 
	count = 0;
	readInfoFromFile();
}

void Phonebook::readInfoFromFile()
{
	fstream file;
	file.open("Phonebook.txt");

	assert(file.is_open());

	while (!file.eof())
	{
		int const bufferSize = 50;
		char buffer[bufferSize];
		file >> buffer;

		int cnt = 0;
		while (buffer[cnt] != '\0')
		{
			++cnt;
		}
		int nameSize = cnt;
		char* name = new char[cnt];

		for (int i = 0; i < nameSize; ++i)
		{
			name[i] = buffer[i];
		}

		file >> buffer;
		cnt = 0;
		while (buffer[cnt] != '\0')
		{
			++cnt;
		}
		int numberSize = cnt;
		char* number = new char[cnt];

		for (int i = 0; i < numberSize; ++i)
		{
			number[i] = buffer[i];
		}

		Subscriber* s = new Subscriber(name, nameSize, number, numberSize);
		addNote(s);

		delete[] name;
		delete[] number;

		++count;
	}
}

void Phonebook::addNote(Subscriber* s)
{
	data[count] = *s;
	count++;
}

void Phonebook::printAllNotes()
{
	if (count == 0)
	{
		cout << "Phonebook is empty" << endl;
	}
	else
	{
		for (int i = 0; i < count; i++)
		{
			data[i].print();
			cout << endl;
		}
	}
}

void Phonebook::printNumbers()
{
	for (int i = 0; i < count; i++)
	{
		data[i].getNumber();
		cout << endl;
	}
}