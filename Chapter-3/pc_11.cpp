#include <iostream>
// #include <iomanip>
// #include <string>
using namespace std;

int main(void)
{
    float celciusTemp, fahrenheitTemp;

    cout << "Enter temperature in celcius: ";
    cin >> celciusTemp;

    fahrenheitTemp = (9.0/5.0)*celciusTemp + 32.0;

    cout << celciusTemp << " degree C = " << fahrenheitTemp << " degree F" << endl;

    return 0;
}