#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(void)
{

    ifstream inputFile;
    inputFile.open("pc_21.dat");

    // Input validation
    if(!inputFile){
        cerr << "Error opening file! Exiting..." << endl;
        return 0;
    }

    float ETAL_FP, ETAL_BP, MERCURY_FP, MERCURY_BP, OXYGEN_FP, OXYGEN_BP, WATER_FP, WATER_BP, temperature;

    inputFile >> ETAL_FP >> MERCURY_FP >> OXYGEN_FP >> WATER_FP;
    inputFile >> ETAL_BP >> MERCURY_BP >> OXYGEN_BP >> WATER_BP;

    cout << "Enter temperature (in degree F): ";
    cin >> temperature;

    if (temperature <= ETAL_FP)
    {
        cout << "Ethyl alcohol freezes at " << temperature << "degree F" << endl;
    }
    else if (temperature >= ETAL_BP)
    {
        cout << "Ethyl alcohol boils at " << temperature << "degree F" << endl;
    }
    if (temperature <= MERCURY_FP)
    {
        cout << "Mercury freezes at " << temperature << "degree F" << endl;
    }
    else if (temperature >= MERCURY_BP)
    {
        cout << "Mercury boils at " << temperature << "degree F" << endl;
    }
    if (temperature <= OXYGEN_FP)
    {
        cout << "Oxygen freezes at " << temperature << "degree F" << endl;
    }
    else if (temperature >= OXYGEN_BP)
    {
        cout << "Oxygen boils at " << temperature << "degree F" << endl;
    }
    if (temperature <= WATER_FP)
    {
        cout << "Water freezes at " << temperature << "degree F" << endl;
    }
    else if (temperature >= WATER_BP)
    {
        cout << "Water boils at " << temperature << "degree F" << endl;
    }

    return 0;
}