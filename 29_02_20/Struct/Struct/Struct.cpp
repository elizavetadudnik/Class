// Struct.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

// структура
struct Point
{
	// метод
	int getSum()
	{
		return x + y;
	}

	// поля
	int x = 0;
	int y = 0;
};

struct LizasDiary
{
	void setMathMark(int mark)
	{
		if (!markWasChanged)
		{
			mathMark = mark;
		}
		
		markWasChanged = true;
	}

	int getMathMark()
	{
		return mathMark;
	} 

private:
	int mathMark = -1;
	bool markWasChanged = false;
};

int main()
{
	// работаем с точкой
	Point p;

	cout << p.getSum() << endl;

	p.x = 5;

	cout << p.x << endl;

	p.y = 8;

	cout << p.y << endl;

	cout << p.getSum() << endl;


	// работа с дневником

	LizasDiary diary;
	cout << "mark: " << diary.getMathMark() << endl;
	diary.setMathMark(4);
	cout << "mark: " << diary.getMathMark() << endl;
}
