#pragma once

struct Subscriber
{
	Subscriber();

	// �����������
	Subscriber(char* name, int nameSize, char* number, int numerSize);

	// ����������
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