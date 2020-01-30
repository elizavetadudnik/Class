#include "arraysModule.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

// ��� ������������� ������ �� 20 ���������. �������� ������� ����� ��������� ����� �������� �� �10 000 �� 10 000 ������������. ������� �� ����� 
// �� ������ ���������������� ��������, ����������� ����� � ������� ���������� ��� ��������� �������, � ������� ����� ��������� ������� �� 3, 
// �� �� ������� �� 9. � ������ ������ ��� ����� ��������������� ��� �������� �������� �������.

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

// ���������, ���������� �� ������ 'a' � �������.
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
		cout << "'a' ���������� � �������" << endl;
	}
	else
	{
		cout << "'a' �� ���������� � �������" << endl;
	}
}

// ������ ��������� ������ ��������. ������� ����� ������, ������� ���������� �� ������ ������� �� ����� �� ������.
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