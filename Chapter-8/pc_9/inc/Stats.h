#ifndef STATS_H
#define STATS_H

#include <stdbool.h>
#include <string>
using namespace std;

class Stats
{
private:
    const static int ARRAY_LENGTH = 15; // 15 track runners
    int currentIndex;
    double arr[ARRAY_LENGTH];
    string names[ARRAY_LENGTH]; // names of the athletes

public:
    int lowestIndex, highestIndex;
    Stats();
    double get_total();
    double get_average();
    double get_lowest();
    double get_highest();
    string get_name(int index);
    bool store_value(double val, string str);
};

#endif /* STATS_H */