#pragma once

class Phonebook
{
	// ���� ???

public:
	// �������� ��� ������ �� �����.
	void printAllNotes();

	// ����� ������ �� ����� (���������).
	void findNumbersByName();

	// ����� ����� �� ������ (���������).
	void findNamesByNumber();

	// �������� ������.
	void addNote(Subscriber* s);

	// ������������ ��������� ��������� ������.
	void removeLastDeleted();

	// ������������� �� ������ � ���������� �������.
	void sort();

};