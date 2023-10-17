#include <iostream>
#include <cstdlib>
#include "../inc/Population.h"

using namespace std;

/**
 * @brief Default constructor that sets the current population, annual births and annual deaths to its default values
 * Default value of population = 2
 * Default value of annual births = 0
 * Default value of annual deaths = 0
 *
 */
Population::Population()
{
    currentPopulation = 2;
    annualBirths = 0;
    annualDeaths = 0;
}

/**
 * @brief Constructor that sets the current population, annual births and annual deaths to the received values
 *
 * @param currPop
 * @param annBirths
 * @param annDeaths
 */
Population::Population(int currPop, int annBirths, int annDeaths)
{
    if (currPop < 2)
    {
        cout << "Invalid input! Population must be greater than 2. Exiting..." << endl;
        exit(0);
    }
    currentPopulation = currPop;
    if (annBirths < 0)
    {
        cout << "Invalid input! Annual births must be a positive number. Exiting..." << endl;
        exit(0);
    }
    annualBirths = annBirths;
    if (annDeaths < 0)
    {
        cout << "Invalid input! Annual deaths must be a positive number. Exiting..." << endl;
        exit(0);
    }
    annualDeaths = annDeaths;
}

/**
 * @brief Sets the value of current population
 *
 * @param pop
 */
void Population::set_population(int pop)
{
    if (pop < 2)
    {
        cout << "Invalid input! Population must be greater than 2. Exiting..." << endl;
        exit(0);
    }
    currentPopulation = pop;
}

/**
 * @brief Sets the number of annual births
 *
 * @param births
 */
void Population::set_births(int births)
{
    if (births < 0)
    {
        cout << "Invalid input! Annual births must be a positive number. Exiting..." << endl;
        exit(0);
    }
    annualBirths = births;
}

/**
 * @brief Sets the number of annual deaths
 * 
 * @param deaths 
 */
void Population::set_deaths(int deaths)
{
    if (deaths < 0)
    {
        cout << "Invalid input! Annual deaths must be a positive number. Exiting..." << endl;
        exit(0);
    }
    annualDeaths = deaths;
}

/**
 * @brief Computes the birth rate and returns the value
 * 
 * Birth rate = Number of births / Population
 * 
 * @return float - birth rate value
 */
float Population::get_birth_rate(){
    return (static_cast<float>(annualBirths) / static_cast<float>(currentPopulation));
}

/**
 * @brief Computes the death rate and returns the value
 * 
 * Birth rate = Number of deaths / Population
 * 
 * @return float - death rate value
 */
float Population::get_death_rate(){
    return (static_cast<float>(annualDeaths) / static_cast<float>(currentPopulation));
}