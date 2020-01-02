#include <iostream> // ввод-вывод

using namespace std;

void cruelFunc(); // сигнатура: тип возвращаемого значения + название функции + аргументы
void helloFunc();

int main()
{
	// ctrl + F5 - запуск программы
	// F10 - отладка

	// cout - вывод на консоль, endl - вывод пустой строки
	cout << "Input two integer numbers" << endl;

	// int; float, double - вещественные (double более точный); bool

	int number1 = 0;
	int number2 = 0;

	// cin - считывание с клавиатуры
	cin >> number1 >> number2;

	int sum = number1 + number2;

	cout << "Sum is " << sum << endl;

	if (number1 > number2)
	{
		cout << "first number is greater" << endl;
	}
	else
	{
		cout << "second number is equal to the first or greater than first" << endl;
	}

	// i += 1 <=> ++i
	// (начальное значение; выполняем пока; после каждой итерации увеличиваем i на единицу)
	// <> (Pascal)  <=> != (С++)
	// = (Pascal) <=> == (C++)

	// while (условие)
	// {
	// }

	cruelFunc();

	return 0;
}

void cruelFunc()
{
	for (int i = 0; i < 10; ++i)
	{
		cout << "Hello, cruel world!!!" << endl;
	}
	helloFunc();
}

void helloFunc()
{
	cout << "Hello, good world!!!" << endl;
}
