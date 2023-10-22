#ifndef NUMDAYS_H
#define NUMDAYS_H

#include <string>
using namespace std;

class NumDays
{
private:
    int hours;
    float days;

public:
    NumDays();
    NumDays(int _hours);
    void set_hours(int h);
    int get_hours();
    void set_days(float d);
    float get_days();
    void calculate_days();
    void error(string str);
    void print();
    friend NumDays operator+(NumDays n1, NumDays n2);
    friend NumDays operator-(NumDays n1, NumDays n2);
    NumDays operator++();    // prefix increment
    NumDays operator++(int); // postfix increment
    NumDays operator--();    // prefix decrement
    NumDays operator--(int); // postfix decrement
};

#endif /**/