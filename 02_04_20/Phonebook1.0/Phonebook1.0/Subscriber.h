#pragma once

struct Subscriber
{
	// �����������
	Subscriber(char* name, int nameSize, char* number, int numerSize);

	// ����������
	~Subscriber();
	
	void getName();

	void getNumber();

private:
	char* name;
	int nameSize;
	char* number;
	int numberSize;
};