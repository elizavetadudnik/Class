#include "functions.h"
#include <iostream>

using namespace std;

// Вычисляем наибольший общий делитель чисел a и b.
int gcdRecursion(int a, int b)
{
	if (a > b)
	{
		return gcdRecursion(a - b, b);
	}
	else if (b > a)
	{
		return gcdRecursion(a, b - a);
	}
	else
	{
		return a;
	}
}

// Дано натуральное число N > 1. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
bool powerOfTwo(int number)
{
	if (number % 2 == 0)
	{
		return powerOfTwo(number / 2);
	}
	else if (number % 2 != 0 && number != 1)
	{
		return false;
	}
	else
	{
		return true;
	}
}

// Дано натуральное число N. Выведите все его цифры по одной, в обратном порядке, разделяя их пробелами или новыми строками.
void reverseNumber(int number)
{
	if (number > 9)
	{
		cout << number % 10 << " ";
		reverseNumber(number / 10);
	}
	else
	{
		cout << number;
	}
}