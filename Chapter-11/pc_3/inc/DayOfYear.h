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
    int day;
    string monthName;
    static MonthAndDays months[];

public:
    DayOfYear();
    DayOfYear(string _name, int _day);
    void error(string err);
    void print();
    void set_month(string str);
    void set_day(int d);
    string get_month();
    int get_day();
    DayOfYear operator++(); // prefix increment
    DayOfYear operator++(int); // postfix increment
    DayOfYear operator--(); // prefix decrement
    DayOfYear operator--(int); // postfix decrement
};

#endif /* NUMBERS_H */