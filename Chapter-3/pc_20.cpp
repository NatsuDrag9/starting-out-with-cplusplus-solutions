#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    const float pi = 3.14;
    int nSlicePerPerson = 4, nSlicesPerPizza, people;
    float pizzaDiameter, sliceArea = 14.125;   // in sq inch

    cout << "Enter diameter of pizza (in inches): ";
    cin >> pizzaDiameter;
    cout << "Enter number of people attending the party: ";
    cin >> people;

    nSlicesPerPizza = (pi * (pow(pizzaDiameter, 2)/4.0)) / sliceArea;
    int totalSlicesReqd = nSlicePerPerson * people;

    // Remainder != 0 implies that no. of pizzas are not sufficient
    // Adding one to account for non-zero remainders
    // A better option would be to use if statement but control statements are not
    // introduced yet
    int totalPizzasReqd = totalSlicesReqd / nSlicesPerPizza + 1;

    cout << "Number of pizzas: " << totalPizzasReqd << endl;

    return 0;
}