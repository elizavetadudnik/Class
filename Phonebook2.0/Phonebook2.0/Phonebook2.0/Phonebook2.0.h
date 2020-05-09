#pragma once
#include "Subscriber.h"

class Phonebook
{
	// ������������.
	Subscriber* subscribers;

	// ������������ ���������� �������.
	int const maxNumberOfNotes = 200;

	// ���������� �������������.
	int countSubscribers;

	// ��������� ������ ������������� �� �����.
	void fillArrayFromFile();

public:
	// �����������.
	Phonebook();

	// ����������.
	~Phonebook();

	// �������� ��� ������ �� ������� �������������.
	void printAllNotes();

	// ����� ������ �� ����� (���������).
	void findNumbersByName(char* name);

	// ����� ����� �� ������ (���������).
	void findNamesByNumber(char* number);

	// �������� ������.
	void addNote(Subscriber* s);

	// ������������ ��������� ��������� ������.
	void removeLastDeleted();

	// ������������� �� ������ � ���������� �������.
	void sort();
};