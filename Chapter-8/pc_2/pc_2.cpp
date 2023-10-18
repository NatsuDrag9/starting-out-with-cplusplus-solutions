#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    const int ARRAY_LENGTH = 20;
    string romanNumerals[ARRAY_LENGTH] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X", "XI", "XII", "XIII", "XIV", "XV", "XVI", "XVII", "XVIII", "XIX", "XX"};
    int userInput;

    cout << "Enter any decimal number between 1 and 20: ";
    cin >> userInput;

    while (userInput != 0)
    {
        if ((userInput < 0) || (userInput > 20))
        {
            cout << "Invalid input! Decimal number must lie between 1 and 20." << endl;
            cout << "Enter the decimal number again: ";
            cin >> userInput;
        }
        cout << "The roman numeral equivalent of " << userInput << " is: " << romanNumerals[userInput - 1] << endl;
        cout << "\nEnter any decimal number between 1 and 20: ";
        cin >> userInput;
    }

    return 0;
}