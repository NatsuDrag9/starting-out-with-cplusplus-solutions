#ifndef DIVSALES_H
#define DIVSALES_H

#include <string>
using namespace std;

class DivSales{
    private:
        int quarterlySales[4];
        static int totalAnnualSales;
    public:
        DivSales();
        DivSales(int q1, int q2, int q3, int q4);
        void set_sales(int q1, int q2, int q3, int q4);
        int get_sales(int index);
        int get_total_sales();
        void error(string str);
};

#endif /* DIVSALES_H */