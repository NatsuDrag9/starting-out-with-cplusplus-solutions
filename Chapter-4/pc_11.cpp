#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
    int userOption;

    cout << "Geometry Calculator" << endl;
    cout << setw(3) << "1. Calculate the area of a circle" << endl;
    cout << setw(3) << "2. Calculate the area of a rectangle" << endl;
    cout << setw(3) << "3. Calculate the area of a triangle" << endl;
    cout << setw(3) << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> userOption;

    switch (userOption)
    {
    case 1:
    {
        float radius, circleArea;
        const float pi = 3.14159;
        cout << "Enter radius of circle: ";
        cin >> radius;
        circleArea = pi * pow(radius, 2);
        cout << "Area of circle: " << circleArea << endl;
    }
    break;

    case 2:
    {
        float length, width, rectangleArea;
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
        rectangleArea = length * width;
        cout << "Area of rectangle: " << rectangleArea << endl;
    }
    break;

    case 3:
    {
        float base, height, triangleArea;
        cout << "Enter triangle base: ";
        cin >> base;
        cout << "Enter triangle height: ";
        cin >> height;
        triangleArea = 0.5 * base * height;
        cout << "Area of triangle: " << triangleArea << endl;
    }
    break;

    case 4:
        cout << "Exiting..." << endl;
        break;

    default:
        cout << "Invalid input! Please enter a choice between 1-4." << endl;
        break;
    }

    return 0;
}