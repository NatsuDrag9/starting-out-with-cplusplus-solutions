#ifndef DATE_H
#define DATE_H

class Date
{
private:
    int day, month, year;

public:
    Date();
    Date(int d, int m, int y);
    void print_numeric_date();
    void print_date_format1();
    void print_date_format2();
};

#endif /*DATE_H*/