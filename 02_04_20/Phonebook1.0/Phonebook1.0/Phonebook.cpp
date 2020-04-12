#include "Phonebook.h"
#include <iostream>

using namespace std;

Phonebook::Phonebook() { }

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