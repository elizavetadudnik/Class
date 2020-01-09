#include <iostream>
#include "mathLibrary.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "¬ведите целое число" << endl;

	int number = 0;
	cin >> number;

	cout << "‘акториал числа: " << factorial(number) << endl << endl;

	cout << "¬ведите вещественное число" << endl;

	double doubleNumber = 0;
	cin >> doubleNumber;
	
	cout << "¬ведите степень, в которую хотите возвести это число" << endl;
	double pow = 0;
	cin >> pow;
	
	cout << "„исло " << doubleNumber << " в степени " << pow << " : " << power(doubleNumber, pow);
	return 0;
}