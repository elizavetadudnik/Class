#include <iostream>
#include "mathLibrary.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������� ����� �����" << endl;

	int number = 0;
	cin >> number;

	cout << "��������� �����: " << factorial(number) << endl << endl;

	cout << "������� ������������ �����" << endl;

	double doubleNumber = 0;
	cin >> doubleNumber;
	
	cout << "������� �������, � ������� ������ �������� ��� �����" << endl;
	double pow = 0;
	cin >> pow;
	
	cout << "����� " << doubleNumber << " � ������� " << pow << " : " << power(doubleNumber, pow);
	return 0;
}