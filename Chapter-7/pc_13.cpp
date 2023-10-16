#include <iostream>
#include "inc/Population.h"
using namespace std;

int main(void)
{
    Population popObject1(10000, 800, 999);
    cout << "Birth rate: " << popObject1.get_birth_rate() << endl;
    cout << "Death rate: " << popObject1.get_death_rate() << endl;

    Population popObject2;
    popObject2.set_population(1000);
    popObject2.set_births(100);
    popObject2.set_deaths(50);
    cout << endl
         << "Birth rate: " << popObject2.get_birth_rate() << endl;
    cout << "Death rate: " << popObject2.get_death_rate() << endl;

    return 0;
}