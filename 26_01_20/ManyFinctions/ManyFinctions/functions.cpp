#include "functions.h"
#include <iostream>

using namespace std;

// ��������� ���������� ����� �������� ����� a � b.
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

// ���� ����������� ����� N > 1. �������� ����� YES, ���� ����� N �������� ������ �������� ������, ��� ����� NO � ��������� ������.
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

// ���� ����������� ����� N. �������� ��� ��� ����� �� �����, � �������� �������, �������� �� ��������� ��� ������ ��������.
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