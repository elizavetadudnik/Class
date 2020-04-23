#include "userInterface.h"
#include <iostream>

using namespace std;

void menu()
{
    while (true)
    {
        cout << "Input 0 to exit\nInput 1 to print all notes\n";
        int number = 0;
        cin >> number;
        switch (number)
        {
        case 0: return;
        case 1:                 
            cout << "Print all notes!!!" << endl;
            break;
        default:
            cout << "Incorrect input" << endl;
        }
    }
}