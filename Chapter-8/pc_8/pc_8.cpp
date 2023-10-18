#include <iostream>
#include <iomanip>
#include "./inc/Stats.h"
using namespace std;

int main(void)
{
    Stats statsObject;
    double userInput = 0.0;
    cout << "Enter rainfall data (in inch or -1 to quit): ";
    cin >> userInput;

    while (userInput != -1)
    {
        if (userInput < 0)
        {
            cout << "Invalid input! Rainfall data must be a positive value." << endl;
            cout << "Enter again (in inch or -1 to quit): ";
            cin >> userInput;
        }
        if (statsObject.store_value(userInput))
        {
            cout << "Stored successfully" << endl;
        }
        else
        {
            cout << "Failed to store value. Maximum number of entries is 30" << endl;
        }
        cout << "Enter rainfall data (in inch or -1 to quit): ";
        cin >> userInput;
    }

    cout << "\nTotal rainfall in this month (in inch): " << statsObject.get_total() << endl;
    cout << "Average rainfall in this month (in inch): " << statsObject.get_average() << endl;
    cout << "Highest rainfall in this month (in inch): " << statsObject.get_highest() << endl;
    cout << "Lowest rainfall in this month (in inch): " << statsObject.get_lowest() << endl;

    return 0;
}