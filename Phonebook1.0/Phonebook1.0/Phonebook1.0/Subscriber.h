#pragma once

struct Subscriber
{
	Subscriber();

	// конструктор
	Subscriber(char* name, int nameSize, char* number, int numerSize);

	// деструктор
	~Subscriber();
	
	void getName();

	int getNameLength();

	int getNumberLength();

	void getNumber();

	void print();

private:
	char* name;
	int nameSize;
	char* number;
	int numberSize;
};