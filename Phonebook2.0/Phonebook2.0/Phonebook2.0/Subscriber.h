#pragma once

class Subscriber
{
	char* name = nullptr;
	char* number = nullptr;

	// �������� �������� �� ������ "str" � ������ "destination".
	void setStr(char* str, char** destination);

public:
	// �����������, ������������� ��� � ����� ������������.
	Subscriber(char* name, char* number);

	// ����������. ����������� ���������� ������.
	~Subscriber();

	// ������������� ��� � ������������.
	void setName(char* name);

	// ������������� ����� � ������������.
	void setNumber(char* number);

	// ���������� ��� ������������.
	char* getName();

	// ���������� ����� ������������.
	char* getNumber();

	// �������� ��� � ����� ������������ �� �������.
	void print();
};