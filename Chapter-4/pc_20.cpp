#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    const float ETAL_FP = -173.00;
    const float ETAL_BP = 172.00;
    const float MERCURY_FP = -38;
    const float MERCURY_BP = 676;
    const float OXYGEN_FP = -362;
    const float OXYGEN_BP = -306;
    const float WATER_FP = 32;
    const float WATER_BP = 212;
    float temperature;

    cout << "Enter temperature (in degree F): ";
    cin >> temperature;

    if (temperature <= ETAL_FP)
    {
        cout << "Ethyl alcohol freezes at " << temperature << endl;
    }
    else if (temperature >= ETAL_BP)
    {
        cout << "Ethyl alcohol boils at " << temperature << endl;
    }
    if (temperature <= MERCURY_FP)
    {
        cout << "Mercury freezes at " << temperature << endl;
    }
    else if (temperature >= MERCURY_BP)
    {
        cout << "Mercury boils at " << temperature << endl;
    }
    if (temperature <= OXYGEN_FP)
    {
        cout << "Oxygen freezes at " << temperature << endl;
    }
    else if (temperature >= OXYGEN_BP)
    {
        cout << "Oxygen boils at " << temperature << endl;
    }
    if (temperature <= WATER_FP)
    {
        cout << "Water freezes at " << temperature << endl;
    }
    else if (temperature >= WATER_BP)
    {
        cout << "Water boils at " << temperature << endl;
    }

    return 0;
}