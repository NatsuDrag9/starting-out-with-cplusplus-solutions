#ifndef POPULATION_H
#define POPULATION_H

class Population
{
private:
    int currentPopulation, annualBirths, annualDeaths;

public:
    Population();
    Population(int currPop, int annBirths, int annDeaths);
    void set_population(int pop);
    void set_births(int births);
    void set_deaths(int deaths);
    float get_birth_rate();
    float get_death_rate();
};

#endif /*POPULATION_H*/