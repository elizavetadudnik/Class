#pragma once
#include "Subscriber.h"

struct Phonebook
{
	Phonebook();

	// add note
	void addNote(Subscriber* s);

	// print all notes
	void printAllNotes();

	void printNumbers();

private:
	void readInfoFromFile();

	Subscriber data[100];
	int count;
};