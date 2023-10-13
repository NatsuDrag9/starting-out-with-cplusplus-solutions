#include <iostream>
using namespace std;

int main(void)
{
    int annualMembershipFee = 2500, time = 6;
    float increaseFraction = 0.04, annualIncrease = annualMembershipFee * increaseFraction;

    for(int i = 1; i <= time; i++){
        cout << "Projected rate after year " << i << ": " << annualIncrease + annualMembershipFee << endl;
        annualIncrease += (annualIncrease + annualMembershipFee)*increaseFraction;
    }

    return 0;
}