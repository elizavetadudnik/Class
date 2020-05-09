#include "Phonebook2.0.h"
#include <fstream>
#include <cassert>
#include <iostream>

using namespace std;

// �����������.
Phonebook::Phonebook()
{
	subscribers = new Subscriber[maxNumberOfNotes];
	fillArrayFromFile();
}

// ����������.
Phonebook::~Phonebook()
{
	delete[] subscribers;
}

// ��������� ������ ������������� �� �����.
void Phonebook::fillArrayFromFile()
{
	ifstream read("Phonebook.txt");
	assert(read.is_open());

	// ������� ������� ��� ����� � ������.
	char* name = new char[50];
	char* number = new char[50];

	while (!read.eof())
	{
		// ��������� �� ����� ��� � ����� (���������� �� ������).
		read >> name;
		read >> number;

		// ������� ������������, �������� ��� � ������ �������������.
		Subscriber* s = new Subscriber(name, number);
		subscribers[countSubscribers] = *s;
		++countSubscribers;		
	}

	delete[] name;
	delete[] number;
}

// �������� ��� ������ �� ������� �������������.
void Phonebook::printAllNotes()
{
	if (countSubscribers == 0)
	{
		cout << "Phonebook is empty" << endl;
		return;
	}

	// �������� ��� � ������� ���� ������������� �� ������� �������������.
	for (int i = 0; i < countSubscribers; ++i)
	{
		subscribers[i].print();
	}
}
