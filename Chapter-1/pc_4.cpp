#include <iostream>
using namespace std;

int main(){
    float mealCharge = 44.50;
    float taxFraction = 0.0675;
    float tipFraction = 0.15;

    float tax = mealCharge*taxFraction;
    float tip = tipFraction*(tax + mealCharge);
    float totalBill = mealCharge + tax + tip;

    cout << "Meal cost: " << mealCharge << endl;
    cout << "Tax: " << tax << endl;
    cout << "Tip: " << tip << endl;
    cout << "Total bill: " << totalBill << endl;
    return 0;
}