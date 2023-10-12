#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    float calories, fatGrams, fatLimitFraction = 0.3;

    cout << "Enter number of calories in a food: ";
    cin >> calories;
    cout << "Enter fat grams in the same food: ";
    cin >> fatGrams;

    // Input validation
    if(calories < 0){
        cout << "Invalid input! " << calories << " must be a positive number." << endl;
        return 0;
    }

    if(fatGrams < 0){
        cout << "Invalid input! " << fatGrams << " must be a positive number." << endl;
        return 0;
    }

    // Calories from fat
    float calFromFat = fatGrams * 9;
    float calFromFatFraction = calFromFat / calories;

    // Input validation
    if(calFromFat > calories){
        cout << "Invalid Input! " << calFromFat << " cannot be greater than " << calories << ". Either calories or fat grams were incorrectly entered. Exiting..." << endl;
        return 0;
    }

    cout << "Calories from fat: " << calFromFat << endl;
    cout << "Calories from fat (in %): " << calFromFatFraction*100 << endl;
    
    if(calFromFatFraction < fatLimitFraction){
        cout << "Food is low in fat" << endl;
    }

    return 0;
}