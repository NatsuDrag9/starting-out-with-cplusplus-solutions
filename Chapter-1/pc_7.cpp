#include <iostream>
using namespace std;

/*
* Fuel in gallons
* Mileage in miles per gallon
*/
int main(){
    int tankSize = 20; 
    float mileageTown = 21.5;
    float mileageHighway = 26.8;
    float distInTown = mileageTown * tankSize;
    float distOnHighway = mileageHighway * tankSize;

    cout << "Distance in town: " << distInTown << endl;
    cout << "Distance on highway: " << distOnHighway << endl;

    return 0;
}