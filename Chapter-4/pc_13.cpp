#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string name, date1, date2, date3;;
    float height1, height2, height3;

    cout << "Enter name of a pole vaulter: ";
    getline(cin, name);
    cout << "Enter height1 (in m): ";
    cin >> height1;
    cout << "Enter date corresponding to height1: ";
    cin >> date1;
    cout << "Enter height2 (in m): ";
    cin >> height2;
    cout << "Enter date corresponding to height2: ";
    cin >> date2;
    cout << "Enter height3 (in m): ";
    cin >> height3;
    cout << "Enter date corresponding to height3: ";
    cin >> date3;

    // Input validation
    if ((height1 < 2.0) || (height1 > 5.0))
    {
        cout << "Invalid input! " << height1 << " should be between 2.0 and 5.0." << endl;
        return 0;
    }
    if ((height2 < 2.0) || (height2 > 5.0))
    {
        cout << "Invalid input! " << height2 << " should be between 2.0 and 5.0." << endl;
        return 0;
    }
    if ((height3 < 2.0) || (height3 > 5.0))
    {
        cout << "Invalid input! " << height3 << " should be between 2.0 and 5.0." << endl;
        return 0;
    }

    // Comparing heights
    if ((height1 > height2) && (height1 > height3))
    {
        cout << "First: " << height1 << " m on " << date1 << endl;

        if (height2 < height3)
        {
            cout << "Second: " << height3 << " m on " << date3 << endl;
            cout << "Third: " << height2 << " m on " << date2 << endl;
        }
        else if (height2 > height3)
        {
            cout << "Second: " << height2 << " m on " << date2 << endl;
            cout << "Third: " << height3 << " m on " << date3 << endl;
        }
        else if (height2 == height3)
        {
            cout << "Second: " << height2 << " m on " << date2 << " and " << height3 << " m on " << date3 << endl;
        }
    }

    else if ((height2 > height1) && (height2 > height3))
    {
        cout << "First: " << height2 << " m on " << date2 << endl;

        if (height1 < height3)
        {
            cout << "Second: " << height1 << " m on " << date1 << endl;
            cout << "Third: " << height2 << " m on " << date2 << endl;
        }
        else if (height3 < height1)
        {
            cout << "Second: " << height1 << " m on " << date1 << endl;
            cout << "Third: " << height3 << " m on " << date3 << endl;
        }
        else if (height1 == height3)
        {
            cout << "Second: " << height1 << " m on " << date1 << " and " << height3 << " m on " << date3 << endl;
        }
    }
    else if ((height3 > height1) && (height3 > height2))
    {
        cout << "First: " << height3 << " m on " << date3 << endl;

        if (height2 < height1)
        {
            cout << "Second: " << height1 << " m on " << date1 << endl;
            cout << "Third: " << height2 << " m on " << date2 << endl;
        }
        else if (height1 < height2)
        {
            cout << "Second: " << height2 << " m on " << date2 << endl;
            cout << "Third: " << height1 << " m on " << date1 << endl;
        }
        else if (height1 == height2)
        {
            cout << "Second: " << height1 << " m on " << date1 << " and " << height2 << " m on " << date2 << endl;
        }
    }
    else if ((height1 == height2) && (height1 < height3))
    {
        // Also covers the case of (height2 == height1) && (height2 < height3)
        cout << "First: " << height3 << " m on " << date3 << endl;
        cout << "Second: " << height1 << " m on " << date1 << " and " << height2 << " m on " << date2 << endl;
    }
    else if ((height1 == height3) && (height1 < height2))
    {
        // Also covers the case of (height3 == height1) && (height3 < height2)
        cout << "First: " << height2 << " m on " << date2 << endl;
        cout << "Second: " << height1 << " m on " << date1 << " and " << height3 << " m on " << date3 << endl;
    }
    else if ((height2 == height3) && (height2 < height1))
    {
        cout << "First: " << height1 << " m on " << date1 << endl;
        cout << "Second: " << height2 << " m on " << date2 << " and " << height3 << " m on " << date3 << endl;
    }
    else if ((height1 == height2) && (height1 == height3))
    {
        cout << "All the three heights are same!" << endl;
    }

    return 0;
}