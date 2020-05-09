#pragma once
#include "Subscriber.h"

class Phonebook
{
	// Пользователи.
	Subscriber* subscribers;

	// Максимальное количество записей.
	int const maxNumberOfNotes = 200;

	// Количество пользователей.
	int countSubscribers;

	// Заполняет массив пользователей из файла.
	void fillArrayFromFile();

public:
	// Конструктор.
	Phonebook();

	// Деструктор.
	~Phonebook();

	// Печатает все записи из массива пользователей.
	void printAllNotes();

	// Найти номера по имени (подстроке).
	void findNumbersByName(char* name);

	// Найти имена по номеру (подстроке).
	void findNamesByNumber(char* number);

	// Добавить запись.
	void addNote(Subscriber* s);

	// Восстановить последнюю удаленную запись.
	void removeLastDeleted();

	// Отсортировать по именам в алфавитном порядке.
	void sort();
};