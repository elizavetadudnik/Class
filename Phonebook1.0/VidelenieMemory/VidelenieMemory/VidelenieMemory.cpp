// VidelenieMemory.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Введите размер массива" << endl;
    int size = 0;
    cin >> size;
    
    // выделили память под size ячеек
    char* arr = new char[size];

    for (int i = 0; i < size; ++i)
    {
        arr[i] = 'a';
    }

    for (int i = 0; i < size; ++i)
    {
        cout << arr[i];
    }
    cout << endl;

    // освобождение памяти
    delete[] arr;
}