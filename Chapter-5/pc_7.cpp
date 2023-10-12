#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
    int workDays;
    float totalAmt = 0.0, penny = 0.0;

    cout << "Enter number of days worked in the month: ";
    cin >> workDays;

    // Input validation
    if((workDays < 1) || (workDays > 31)){
        cout << "Invalid input! Work days should lie between 1 and 31. Exiting...";
        return 0;
    }

    cout << "Day" << setw(15) << fixed << setprecision(2) << "Salary (in $)" << endl;
    for(int i = 1; i <= workDays; i++){
        penny = pow(2, i-1);
        totalAmt += penny;
        cout << i << setw(12) << penny/100.0 << endl;
    }
    cout << "Total salary end of month (in $): " << totalAmt/100.0 << endl;

    return 0;
}