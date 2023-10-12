#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    double wavelength;

    cout << "Enter wavelength (in m): ";
    cin >> wavelength;

    if (wavelength < pow(10, -11))
    {
        cout << "Wave type: Gamma rays" << endl;
    }
    else if ((wavelength < pow(10, -8)) && (wavelength > pow(10, -11)))
    {
        cout << "Wave type: X rays" << endl;
    }
    else if ((wavelength > pow(10, -8)) && (wavelength < 4 * pow(10, -7)))
    {
        cout << "Wave type: UV" << endl;
    }
    else if ((wavelength > 4 * pow(10, -7)) && (wavelength < 7 * pow(10, -7)))
    {
        cout << "Wave type: Visible light" << endl;
    }
    else if ((wavelength > 7 * pow(10, -7)) && (wavelength < pow(10, -3)))
    {
        cout << "Wave type: Microwaves" << endl;
    }
    else if (wavelength > pow(10, -2))
    {
        cout << "Wave type: Radio waves" << endl;
    }

    return 0;
}