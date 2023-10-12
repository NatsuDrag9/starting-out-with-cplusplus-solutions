#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    float tempF;

    cout << setw(2) << "Degree C" << setw(15) << "Degree F" << endl;
    for(float tempC = 0; tempC <= 20; tempC++){
        tempF = (9.0/5.0)*tempC + 32.0;
        cout << setw(2) << tempC << setw(15 - tempC/10) << fixed << setprecision(2) << tempF << endl;
    }

    return 0;
}