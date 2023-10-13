#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int num1 = 0, num2 = 0;

    cout << "This program requires two positive integers to display a rectangle made of 'x'" << endl;
    cout << "Enter first positive integer: ";
    cin >> num1;
    cout << "Enter second positive integer: ";
    cin >> num2;

    // Input validation
    if (num1 < 1)
    {
        cout << "Invalid input!" << num1 << " should be a positive integer. Exiting..." << endl;
        return 0;
    }
    if (num2 < 1)
    {
        cout << "Invalid input!" << num2 << " should be a positive integer. Exiting..." << endl;
        return 0;
    }

    // Display rectangle of character 'x'
    if (num1 >= num2)
    {
        for (int width = 1; width <= num2; width++)
        {
            for (int length = 1; length <= num1; length++)
            {
                cout << "x";
            }
            cout << endl;
        }
    }
    else if (num2 > num1)
    {
        for (int width = 1; width <= num1; width++)
        {
            for (int length = 1; length <= num2; length++)
            {
                cout << "x";
            }
            cout << endl;
        }
    }

    return 0;
}