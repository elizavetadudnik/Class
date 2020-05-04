#pragma once

class Phonebook
{
	// ПОЛЯ ???

public:
	// Печатает все записи из файла.
	void printAllNotes();

	// Найти номера по имени (подстроке).
	void findNumbersByName();

	// Найти имена по номеру (подстроке).
	void findNamesByNumber();

	// Добавить запись.
	void addNote(Subscriber* s);

	// Восстановить последнюю удаленную запись.
	void removeLastDeleted();

	// Отсортировать по именам в алфавитном порядке.
	void sort();

};