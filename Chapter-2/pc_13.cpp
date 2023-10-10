#include <iostream>
using namespace std;

int main(){
    int annualIncome = 32500;
    float semiMonthlyPay = annualIncome/24.0;
    float biWeeklyPay = annualIncome/26.0;

    cout << "Semi-monthly pay: $" << semiMonthlyPay << endl;
    cout << "Bi-weekly pay: $" << biWeeklyPay << endl;

    return 0;
}