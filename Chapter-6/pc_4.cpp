#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float kinetic_energy(float mass, float velocity);

/**
 * @brief Determines the kinetic energy of an object in motion of mass "mass" and velocity "velocity" in joules.
 *
 * @param mass in kg
 * @param velocity in m/s
 * @return float - returns the amount of kinetic energy in joules
 */
float kinetic_energy(float mass, float velocity)
{
    return (0.5) * mass * pow(velocity, 2);
}

int main(void)
{
    float inp1, inp2;
    cout << "Enter object's mass (in kg): ";
    cin >> inp1;
    if(inp1 < 0.0){
        cout << "Invalid input! Mass of object must be a positive number. Exiting..." << endl;
    }
    cout << "Enter velocity of object (in m/s): ";
    cin >> inp2;

    cout << "Kinetic energy (in J): " << kinetic_energy(inp1, inp2) << endl;
    return 0;
}