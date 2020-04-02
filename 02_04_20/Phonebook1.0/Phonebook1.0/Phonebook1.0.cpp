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

    Subscriber userIsLoser(name1, 3, number1, 2);
    userIsLoser.getName();
    cout << endl;
    userIsLoser.getNumber();
}