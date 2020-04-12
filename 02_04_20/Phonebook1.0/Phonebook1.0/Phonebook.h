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
	Subscriber data[100];
	int count = 0;
};