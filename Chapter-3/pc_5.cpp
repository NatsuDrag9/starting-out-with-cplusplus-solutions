#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    float batAvg = 0.0;
    int nBat, nHits;

    cout << "Enter no. of times player was at bat: ";
    cin >> nBat;
    cout << "Enter no. of hits: ";
    cin >> nHits;

    batAvg = (float) nHits / nBat;
    
    cout << "Batting avg (without stream manipulator): " << batAvg << endl;
    cout << fixed << setprecision(4) << "Batting avg (4 decimal places): " << batAvg << endl;

    return 0;
}