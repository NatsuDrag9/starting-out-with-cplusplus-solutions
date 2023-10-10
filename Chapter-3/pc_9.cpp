#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(void)
{
    float widgetWeight = 9.2;
    float totalWeight;

    cout << "Etner total weight of pallet with widgets (in lbs): ";
    cin >> totalWeight;

    int nWidgets = totalWeight / widgetWeight;

    cout << "Number of widgets stacked on pallet: " << nWidgets << endl;

    return 0;
}