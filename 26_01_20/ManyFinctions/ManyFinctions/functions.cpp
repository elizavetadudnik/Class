#include "functions.h"
#include <iostream>

using namespace std;

// 1.0 Вычисляем наибольший общий делитель чисел a и b.
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

// 2.0 Дано натуральное число N > 1. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
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

// 3.0 Дано натуральное число N. Выведите все его цифры по одной, в обратном порядке, разделяя их пробелами или новыми строками.
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


// 1.1 Вычисляем наибольший общий делитель чисел a и b.

int gcd(int a, int b)

while a != b
{
	if a > b
	{
		a -= b;
	}
	if b > a
	{
		b -= a;
	}
	retutn 0;
}


// 2.1 Дано натуральное число N > 1. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
void powerOfTwo(int number)
while powerOfTwo > 1 
{
	if powerOfTwo % 2 == 0
	{
		powerOfTwo(number / 2);
	}
	if powerOfTwo % 2 != 0
	{
		return false
	}
	if powerOfTwo == 1
	{
		return true;
	}
}

// 3.1 Дано натуральное число N.Выведите все его цифры по одной, в прямом порядке, разделяя их пробелами или новыми строками.

	void reverseNumber(int number)
{
	if (number > 9)
	{
		cout << number / 10 << " ";
		reverseNumber(number);
	}
	else
	{
		cout << number;
	}
}