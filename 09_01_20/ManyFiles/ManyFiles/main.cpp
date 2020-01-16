#include <iostream>
#include "mathLibrary.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите целое число (>1)" << endl;
	int number = 0;
	cin >> number;

	// эквивалентно: if (isPrime(number) == true)
	if (isPrime(number))
	{
		cout << "Число простое" << endl;
	}
	else
	{
		cout << "Число составное" << endl;
	}
	

	return 0;
}