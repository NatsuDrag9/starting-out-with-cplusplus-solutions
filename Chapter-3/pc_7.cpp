#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(void)
{
    string month1, month2, month3;
    float rainfallMonth1, rainfallMonth2, rainfallMonth3, avgMonthlyRainfall;
    int months = 3;

    cout << "Enter month 1 name: ";
    cin >> month1;
    cout << "Enter month 1 rainfall (in inches): ";
    cin >> rainfallMonth1;
    cout << "Enter month 2 name: ";
    cin >> month2;
    cout << "Enter month 2 rainfall (in inches): ";
    cin >> rainfallMonth2;
    cout << "Enter month 3 name: ";
    cin >> month3;
    cout << "Enter month 3 rainfall (in inches): ";
    cin >> rainfallMonth3;

    avgMonthlyRainfall = (rainfallMonth1 + rainfallMonth2 + rainfallMonth3) / static_cast<float>(months);

    cout << "The average monthly rainfall for " << month1 << ", " << month2 << ", " << month3 << "was " << avgMonthlyRainfall << " inches." << endl;

    return 0;
}