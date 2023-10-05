#include <iostream>
using namespace std;

int main(){
    int nCustomers = 12467;
    float energyDrinkFrac = 0.14;
    float citrusFrac = energyDrinkFrac*0.64;

    int nCustomersEnergyDrink =  (int)(energyDrinkFrac * nCustomers);
    int nCustomersCirtus = (int)(citrusFrac * nCustomers);

    cout << "Customers purchasing one or more energy drink: $" << nCustomersEnergyDrink << endl;
    cout << "Customer preferring citrus flavour: $" << nCustomersCirtus << endl;

    return 0;
}