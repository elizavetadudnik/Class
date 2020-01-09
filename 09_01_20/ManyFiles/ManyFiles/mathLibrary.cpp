#include <iostream>
#include "mathLibrary.h"

using namespace std;

int factorial(int number)
{
	int numberFactorial = 1;

	for (int i = 1; i <= number; ++i)
	{
		numberFactorial *= i;
	}

	return numberFactorial;
}

double power(double number, int power)
{
	double numberPowered = 1;

	for (int i = 1; i <= power; ++i)
	{
		numberPowered *= number;
	}

	return numberPowered;
}