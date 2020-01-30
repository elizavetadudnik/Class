#include "arraysModule.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

// Дан целочисленный массив из 20 элементов. Элементы массива могут принимать целые значения от –10 000 до 10 000 включительно. Опишите на одном 
// из языков программирования алгоритм, позволяющий найти и вывести количество пар элементов массива, в которых сумма элементов делится на 3, 
// но не делится на 9. В данной задаче под парой подразумеваются два соседних элемента массива.

void taskEge()
{
	int const size = 20;
	int arr[size];

	srand(time(NULL));

	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 20001 - 10000;
	}

	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}	
	cout << endl;

	int countPairs = 0;

	for (int i = 0; i < size - 1; ++i)
	{
		int sumPair = arr[i] + arr[i + 1];
		if ((sumPair % 3 == 0) && (sumPair % 9 != 0))
		{
			++countPairs;
		}
	}

	cout << countPairs << endl;
}

// Проверяем, содержится ли символ 'a' в массиве.
void symbolsTryOne()
{
	setlocale(LC_ALL, "Russian");
	int const size = 5;

	char symbols[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> symbols[i];
	}

	bool contains = false;

	for (int i = 0; i < size; ++i)
	{
		cout << symbols[i];
		if (symbols[i] == 'a')
		{
			contains = true;
		}
	}
	cout << endl;

	if (contains)
	{
		cout << "'a' содержится в массиве" << endl;
	}
	else
	{
		cout << "'a' не содержится в массиве" << endl;
	}
}

// Задана некоторая строка символов. Создать новую строку, которая образована из данной чтением от конца до начала.
void reverseString()
{
	int const size = 5;
	char arr[size];
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	char arrReverse[size];
	for (int i = 0; i < size; ++i)
	{ 
		arrReverse[i] = arr[size - i - 1];
	}

	for (int i = 0; i < size; ++i)
	{
		cout << arrReverse[i];
	}
	cout << endl;
}