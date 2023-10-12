#include <iostream>
using namespace std;

int main(void)
{
    float calPerMin = 3.9, caloriesBurnt = 0.0;

    for (int min = 1; min <= 30; min++)
    {
        caloriesBurnt += calPerMin * min;
        if (min == 10)
        {
            cout << "Calories burnt after " << min << " minutes: " << caloriesBurnt << endl;
        }
        if (min == 15)
        {
            cout << "Calories burnt after " << min << " minutes: " << caloriesBurnt << endl;
        }
        if (min == 20)
        {
            cout << "Calories burnt after " << min << " minutes: " << caloriesBurnt << endl;
        }
        if (min == 25)
        {
            cout << "Calories burnt after " << min << " minutes: " << caloriesBurnt << endl;
        }
        if (min == 30)
        {
            cout << "Calories burnt after " << min << " minutes: " << caloriesBurnt << endl;
        }
    }

    return 0;
}