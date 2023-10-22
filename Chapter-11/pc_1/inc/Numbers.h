#ifndef NUMBERS_H
#define NUMBERS_H

#include <string>
using namespace std;

class Numbers{
    private:
        int number;
        static string lessThan20[];
        static string tens[];
        static string hundred;
        static string thousand;
    public:
        Numbers();
        Numbers(int _number);
        void error();   // out of range error
        void print();   // prints the English description of member number
};

#endif /* NUMBERS_H */