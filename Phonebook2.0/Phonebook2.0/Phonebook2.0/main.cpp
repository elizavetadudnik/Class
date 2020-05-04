// Phonebook2.0.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Subscriber.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char* name = new char[5];
	char* number = new char[3];

	name[0] = 'a';
	name[1] = 'b';
	name[2] = 'c';
	name[3] = 'd';
	name[4] = 'e';

	number[0] = '1';
	number[1] = '2';
	number[2] = '3';

	
	Subscriber s(name, number);

	s.print();

	delete[] name;
	delete[] number;

	return 0;
}