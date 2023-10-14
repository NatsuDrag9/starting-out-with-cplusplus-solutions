#include <iostream>
#include <cstdlib>
using namespace std;

double population_projection(double p, float b, float d, double arrivals, double departures);

/**
 * @brief Calculates and returns the projected new size of the population of a year
 * N = P(1+B)(1-D)
 * Assumption to simplify the projection formula: people arriving to and departing from this region do not produce babies and do not die in that year
 * N = N + arrivals - departures
 * @param p - previous population size
 * @param b - annual birth rate
 * @param d - annual death rate
 * @param arrivals - no. of people arriving into this area each year
 * @param departures - no. of people departing from this area each year
 * @return double (N) - new population size
 */
double population_projection(double p, float b, float d, double arrivals, double departures)
{
    double N = p * (1 + b) * (1 - d);
    N = N + arrivals - departures;
    return N;
}

int main(void)
{
    double inp1 = 0, inp4 = 0.0, inp5 = 0.0;
    float inp2 = 0.0, inp3 = 0.0;
    int years = 0;
    cout << "Enter starting size of population: ";
    cin >> inp1;
    if (inp1 < 2)
    {
        cout << "Invalid input! Starting population size must be greater than or equal to 2. Exiting ..." << endl;
        return 0;
    }
    cout << "Enter annual birth rate (in %): ";
    cin >> inp2;
    inp2 = inp2 / 100.0;
    if (inp2 < 0)
    {
        cout << "Invalid input! Annual birth rate must be greater than 0. Exiting ..." << endl;
        return 0;
    }
    cout << "Enter annual death rate (in %): ";
    cin >> inp3;
    inp3 = inp3 / 100.0;
    if (inp3 < 0)
    {
        cout << "Invalid input! Annual death rate must be greater than 0. Exiting ..." << endl;
        return 0;
    }
    cout << "Enter number of people arriving in each year: ";
    cin >> inp4;
    if (inp4 < 0)
    {
        cout << "Invalid input! Number of people arriving must be a positive value. Exiting ..." << endl;
        return 0;
    }
    cout << "Enter number of people departing from each year: ";
    cin >> inp5;
    if (inp5 < 0)
    {
        cout << "Invalid input! Number of people departing must be a positive value. Exiting ..." << endl;
        return 0;
    }
    cout << "Enter number of years to display: ";
    cin >> years;
    if (years < 1)
    {
        cout << "Invalid input! Number of years must be greater than 1. Exiting ..." << endl;
        return 0;
    }
    double initialPopulation = inp1;
    for (int i = 1; i <= years; i++)
    {
        double newPopulation = population_projection(initialPopulation, inp2, inp3, inp4, inp5);
        cout << "\nStarting population at the end of year " << i << ": " << initialPopulation << endl;
        cout << "Projected population at the end of year " << i << ": " << newPopulation << endl;
        initialPopulation = newPopulation;
    }

    return 0;
}