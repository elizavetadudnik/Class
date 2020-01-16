#include <iostream>
#include "mathLibrary.h"

using namespace std;

// ��������� ��������� �����.
int factorial(int number)
{
	int numberFactorial = 1;

	for (int i = 1; i <= number; ++i)
	{
		numberFactorial *= i;
	}

	return numberFactorial;
}

// �������� ����� � ����� �������.
double power(double number, int power)
{
	double numberPowered = 1;

	for (int i = 1; i <= power; ++i)
	{
		numberPowered *= number;
	}

	return numberPowered;
}

// ����������, ������� �� �����.
bool isPrime(int number)
{
	if (number <= 1)
	{
		cout << "������������ ����" << endl;
	}

	if (number == 2)
	{
		return true;
	}

	for (int i = 2; i < number; ++i)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}