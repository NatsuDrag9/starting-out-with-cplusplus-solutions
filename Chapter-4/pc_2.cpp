#include <iostream>
using namespace std;

int main(void)
{
    int num1;

    cout << "Enter a number within the range of 1 through 10: ";
    cin >> num1;

    switch (num1)
    {
    case 1:
        cout << num1 << " in Roman Numeral: I" << endl;
        break;
    case 2:
        cout << num1 << " in Roman Numeral: II" << endl;
        break;
    case 3:
        cout << num1 << " in Roman Numeral: III" << endl;
        break;
    case 4:
        cout << num1 << " in Roman Numeral: IV" << endl;
        break;
    case 5:
        cout << num1 << " in Roman Numeral: V" << endl;
        break;
    case 6:
        cout << num1 << " in Roman Numeral: VI" << endl;
        break;
    case 7:
        cout << num1 << " in Roman Numeral: VII" << endl;
        break;
    case 8:
        cout << num1 << " in Roman Numeral: VIII" << endl;
        break;
    case 9:
        cout << num1 << " in Roman Numeral: IX" << endl;
        break;
    case 10:
        cout << num1 << " in Roman Numeral: X" << endl;
        break;
    default:
        cout << "Invalid number. Please enter number within range 1 through 10" << endl;
    }

    return 0;
}