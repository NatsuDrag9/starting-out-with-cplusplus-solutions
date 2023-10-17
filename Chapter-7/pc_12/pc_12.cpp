#include <iostream>
#include "inc/Car.h"
using namespace std;

int main(void)
{
    Car newCar(1990, "Ferrari");
    for (int i = 0; i < 5; i++)
    {
        newCar.accelerate();
        cout << "Car's current speed: " << newCar.get_car_speed() << endl;
    }

    cout << endl << "Applying brake" << endl;
    for (int i = 0; i < 5; i++)
    {
        newCar.brake();
        cout << "Car's current speed: " << newCar.get_car_speed() << endl;
    }

    return 0;
}