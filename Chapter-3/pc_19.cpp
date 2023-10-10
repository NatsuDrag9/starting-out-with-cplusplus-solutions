#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    const float pi = 3.14;
    int nSlices;
    float pizzaDiameter, sliceArea = 14.125;   // in sq inch

    cout << "Enter diameter of pizza (in inches): ";
    cin >> pizzaDiameter;

    nSlices = (pi * (pow(pizzaDiameter, 2)/4.0)) / sliceArea;

    cout << "Number of pizza slices: " << nSlices << endl;

    return 0;
}