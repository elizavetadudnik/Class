// Phonebook2.0.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Subscriber.h"
#include "Phonebook2.0.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	Phonebook p = Phonebook();
	p.printAllNotes();

	return 0;
}