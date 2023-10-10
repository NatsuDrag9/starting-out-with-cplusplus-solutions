#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(void)
{
    int totalCookies = 40, nServings = 10, caloriesPerServing = 300, userCookies;
    int caloriesPerCookie = caloriesPerServing * nServings / totalCookies;

    cout << "Enter number of cookies eaten: ";
    cin >> userCookies;

    int totalCaloriesConsumed = userCookies * caloriesPerCookie;
    
    cout << "Total calories consumed: " << totalCaloriesConsumed << endl;

    return 0;
}