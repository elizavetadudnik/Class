#include <iostream>
#include "mathLibrary.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������� ����� ����� (>1)" << endl;
	int number = 0;
	cin >> number;

	// ������������: if (isPrime(number) == true)
	if (isPrime(number))
	{
		cout << "����� �������" << endl;
	}
	else
	{
		cout << "����� ���������" << endl;
	}
	

	return 0;
}