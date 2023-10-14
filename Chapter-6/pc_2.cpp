#include <iostream>
#include <iomanip>
using namespace std;

float celsius(float tempF);

/**
 * @brief converts temperature in degree Fahrenheit to degree Celsius
 *
 * @param tempF
 * @return float - temperature in degree Celsius
 */
float celsius(float tempF)
{
    float tempC = (5.0 / 9.0) * (tempF - 32);
    return tempC;
}

int main(void)
{
    for (float i = 0; i <= 20; i++)
    {
        cout << fixed << setprecision(2) << "Fahrenheit: " << i << setw(15) << "Celsius: " << celsius(i) << endl;
    }
    return 0;
}