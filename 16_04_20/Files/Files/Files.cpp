#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("file.txt");

    if (file.is_open())
    {
        file << "The weather is good" << endl; // запись в файл
        file.close();
    }
    else
    {
        cout << "File was not open!" << endl;
    }

    file.open("file.txt");
    if (file.is_open())
    {
        int const size = 50;
        char buffer[size];

        file >> buffer;
        cout << buffer << endl;
        file >> buffer;
        cout << buffer << endl;

        file.getline(buffer, 50);
        cout << buffer << endl;
    }
}