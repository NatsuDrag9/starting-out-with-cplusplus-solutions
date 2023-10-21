#ifndef NUMBERS_H
#define NUMBERS_H

#include <string>
using namespace std;

struct MonthAndDays
{
    string monthName;
    int days;
    MonthAndDays(string str = "", int d = 0){
        monthName = str;
        days = d;
    }
};

class DayOfYear
{
private:
    int date;
    static MonthAndDays months[];

public:
    DayOfYear();
    DayOfYear(int _number);
    void error();
    void print(); // prints the English description of the date
};

#endif /* NUMBERS_H */