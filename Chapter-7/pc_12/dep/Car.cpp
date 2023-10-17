#include <iostream>
#include <cstdlib>
#include <string>
#include "../inc/Car.h"

using namespace std;

/**
 * @brief Default constructor that sets the value if nothing is passed
 * 
 */
Car::Car(){
    year = 1900;
    make = "Some make";
    speed = 0;
}

/**
 * @brief Constructor that accepts parameters to set the data members
 * Speed of the car is initialized to 0
 * 
 * @param yr - car's model year
 * @param mk - make of the car
 */
Car::Car(int yr, string mk){
    year = yr;
    make = mk;
    speed = 0;  // Initializing speed to 0
}

/**
 * @brief Accelerates the car by increased the speed by 5 units
 * 
 */
void Car::accelerate(){
    speed += 5;
}

/**
 * @brief Decelerates the car's speed by 5 units
 * 
 */
void Car::brake(){
    speed -= 5;
}

/**
 * @brief Return's the car's year
 * 
 * @return int 
 */
int Car::get_car_year(){
    return year;
}

/**
 * @brief Returns the car's speed
 * 
 * @return int 
 */
int Car::get_car_speed(){
    return speed;
}

/**
 * @brief Returns the car's make
 * 
 * @return string 
 */
string Car::get_car_make(){
    return make;
}