// Phonebook1.0.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Subscriber.h"
#include "Phonebook.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    char* name1 = new char[3];
    name1[0] = 'l';
    name1[1] = 'o';
    name1[2] = 'l';

    char* number1 = new char[2];
    number1[0] = '0';
    number1[1] = '3';

    Subscriber userIsLoser1(name1, 3, number1, 2);

    char* name2 = new char[3];
    name2[0] = 'o';
    name2[1] = 'l';
    name2[2] = '0';

    char* number2 = new char[2];
    number2[0] = '0';
    number2[1] = '1';

    Subscriber userIsLoser2(name2, 3, number2, 2);

    Phonebook p;

    p.addNote(&userIsLoser1);
    p.addNote(&userIsLoser2);

    p.printAllNotes();
}