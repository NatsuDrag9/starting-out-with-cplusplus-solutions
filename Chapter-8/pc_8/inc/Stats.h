#ifndef STATS_H
#define STATS_H

#include <stdbool.h>

class Stats
{
private:
    const static int ARRAY_LENGTH = 30; // 30 days in a month
    int currentIndex;
    double arr[ARRAY_LENGTH];

public:
    Stats();
    double get_total();
    double get_average();
    double get_lowest();
    double get_highest();
    bool store_value(double val);
};

#endif /* STATS_H */