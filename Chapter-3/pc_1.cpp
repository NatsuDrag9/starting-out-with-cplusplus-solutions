#include <iostream>
using namespace std;

int main(void){
    int gallons;
    float miles;

    cout << "Enter number of gallons of gas held by car: ";
    cin >> gallons;
    cout << "Enter number of full tank miles: ";
    cin >> miles;

    cout << "Miles per gallon: " << miles * gallons << endl;
    return 0;
}