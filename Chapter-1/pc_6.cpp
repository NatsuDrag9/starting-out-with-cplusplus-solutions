#include <iostream>
using namespace std;

int main(){
    int gasolineInGallons = 16;
    int distInMiles = 350;
    int milesPerGallon = distInMiles / gasolineInGallons;

    cout << "Number of miles per gallon: " << milesPerGallon << endl;
    return 0;
}