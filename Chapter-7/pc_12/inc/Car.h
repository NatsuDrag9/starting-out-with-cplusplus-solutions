#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car
{
private:
    int year, speed;
    string make;

public:
    Car();
    Car(int yr, string mk);
    int get_car_year();
    int get_car_speed();
    string get_car_make();
    void accelerate();
    void brake();
};

#endif /* CAR_H */