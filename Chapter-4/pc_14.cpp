#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    const float OPTIMAL_WEIGHT_MIN = 18.5;
    const float OPTIMAL_WEIGHT_MAX = 25;
    float weight, height;

    cout << "Enter sedentary person's weight (in lbs): ";
    cin >> weight;
    cout << "Enter sedentary person's height (in inches): ";
    cin >> height;

    // Input validation
    if (weight < 0)
    {
        cout << "Invalid input! " << weight << " has to be a positive value." << endl;
        return 0;
    }

    if (height < 0)
    {
        cout << "Invalid input! " << height << " has to be a positive value." << endl;
        return 0;
    }

    // BMI
    float bmi = weight * 703 / (pow(height, 2));
    cout << "Person's BMI: " << bmi << " lb/m^2" << endl;

    if(bmi < OPTIMAL_WEIGHT_MIN){
        cout << "Person is underweight" << endl;
    }
    else if ((bmi > OPTIMAL_WEIGHT_MIN) && (bmi < OPTIMAL_WEIGHT_MAX)){
        cout << "Person;s weight is optimal" << endl;
    }
    else if (bmi > OPTIMAL_WEIGHT_MAX){
        cout << "Person is overweight" << endl;
    }

    return 0;
}