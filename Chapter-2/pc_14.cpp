#include <iostream>
using namespace std;

int main(){
    int totalHeightInInches = 73;
    int heightFeet = totalHeightInInches/12;
    float heightInch = totalHeightInInches%12;

    cout << "Feet: " << heightFeet << endl;
    cout << "Inches: " << heightInch << endl;

    return 0;
}