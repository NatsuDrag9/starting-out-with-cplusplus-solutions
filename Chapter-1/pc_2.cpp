#include <iostream>
using namespace std;

int main(){
    float eastCoastFraction = 0.62;
    int revenue = 4600000;
    float eastCoastRevenue = (revenue * eastCoastFraction)/100000;
    cout << "East Coast generated " << eastCoastRevenue << " million dollars" << endl;
    return 0;
}