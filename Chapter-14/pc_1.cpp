#include <iostream>
using namespace std;

int main(void)
{
    int userInput = 0, n = 0, fact = 1;
    cout << "Enter number to calculate factorial: ";
    cin >> userInput;
    if (userInput < 0)
    {
        cout << "Invalid input! Input must be a whole number. Exiting..." << endl;
        return 0;
    }

    n = userInput;

    while (n >= 0)
    {
        if ((n == 0) || (n == 1))
        {
            cout << userInput << "! = " << fact << endl;
            break;
        }
        else {
            fact = fact*n;
            n--;
        }
    }

    return 0;
}