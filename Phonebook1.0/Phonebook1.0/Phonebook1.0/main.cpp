// Phonebook1.0.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Subscriber.h"
#include "Phonebook.h"
#include "userInterface.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    Phonebook p;
    p.printAllNotes();
   // menu();
}