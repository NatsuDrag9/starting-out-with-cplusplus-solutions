#include <iostream>
using namespace std;

int main(void)
{
    int sales1, sales2, sales3;

    cout << "This program produces a sales bar chart" << endl;
    cout << "Enter today's sales of store 1 (rounded to nearest $100): ";
    cin >> sales1;
    cout << "Enter today's sales of store 2 (rounded to nearest $100): ";
    cin >> sales2;
    cout << "Enter today's sales of store 3 (rounded to nearest $100): ";
    cin >> sales3;

    // Input validation
    if ((sales1 < 0) || (sales2 < 0) || (sales3 < 0))
    {
        cout << "Invalid input! Sales cannot be negative. Exiting...";
        return 0;
    }

    // Bar graph using '*'
    cout << endl << "Daily Sales bar graph (each * = $100)" << endl;
    cout << "Store 1:";
    for (int i = 1; i < sales1 / 100; i++)
    {
        cout << "*";
    }
    cout << endl;
    cout << "Store 2:";
    for (int i = 1; i < sales2 / 100; i++)
    {
        cout << "*";
    }
    cout << endl;
    cout << "Store 3:";
    for (int i = 1; i < sales3 / 100; i++)
    {
        cout << "*";
    }
    cout << endl;

    return 0;
}