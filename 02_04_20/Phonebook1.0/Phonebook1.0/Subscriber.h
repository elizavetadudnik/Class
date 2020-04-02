#pragma once

struct Subscriber
{
	// конструктор
	Subscriber(char* name, int nameSize, char* number, int numerSize);

	// деструктор
	~Subscriber();
	
	void getName();

	void getNumber();

private:
	char* name;
	int nameSize;
	char* number;
	int numberSize;
};