#include "functions.h"
#include <iostream>

using namespace std;

// 1.0 ��������� ���������� ����� �������� ����� a � b.
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

// 2.0 ���� ����������� ����� N > 1. �������� ����� YES, ���� ����� N �������� ������ �������� ������, ��� ����� NO � ��������� ������.
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

// 3.0 ���� ����������� ����� N. �������� ��� ��� ����� �� �����, � �������� �������, �������� �� ��������� ��� ������ ��������.
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


// 1.1 ��������� ���������� ����� �������� ����� a � b.

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


// 2.1 ���� ����������� ����� N > 1. �������� ����� YES, ���� ����� N �������� ������ �������� ������, ��� ����� NO � ��������� ������.
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

// 3.1 ���� ����������� ����� N.�������� ��� ��� ����� �� �����, � ������ �������, �������� �� ��������� ��� ������ ��������.

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