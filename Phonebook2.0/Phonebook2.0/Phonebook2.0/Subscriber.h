#pragma once

class Subscriber
{
	char* name;
	char* number;

	// Копирует значение из строки "str" в строку "destination".
	void setStr(char* str, char** destination);

public:
	// Конструктор по умолчанию.
	Subscriber();

	// Конструктор, устанавливает имя и номер пользователю.
	Subscriber(char* name, char* number);

	// Деструктор. Освобождает выделенную память.
	~Subscriber();

	// Устанавливает имя у пользователя.
	void setName(char* name);

	// Устанавливает номер у пользователя.
	void setNumber(char* number);

	// Возвращает имя пользователя.
	char* getName();

	// Возвращает номер пользователя.
	char* getNumber();

	// Печатает имя и номер пользователя на консоль.
	void print();
};