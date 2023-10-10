#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main(void)
{
    ifstream inputFile;
    string month1, month2, month3;
    float rainfallMonth1, rainfallMonth2, rainfallMonth3, avgMonthlyRainfall;
    int months = 3;

    inputFile.open("./pc_25.txt");
    
    inputFile >> month1;
    inputFile >> rainfallMonth1;
    cout << month1 << " rainfall (in inches): " << rainfallMonth1 << endl;
    
    inputFile >> month2;
    inputFile >> rainfallMonth2;
    cout << month2 << " rainfall (in inches): " << rainfallMonth2 << endl;
    
    inputFile >> month3;
    inputFile >> rainfallMonth3;
    cout << month3 << " rainfall (in inches): " << rainfallMonth3 << endl;
    inputFile.close();

    avgMonthlyRainfall = (rainfallMonth1 + rainfallMonth2 + rainfallMonth3) / static_cast<float>(months);

    cout << "The average monthly rainfall for " << month1 << ", " << month2 << ", " << month3 << " was " << avgMonthlyRainfall << " inches." << endl;

    return 0;
}