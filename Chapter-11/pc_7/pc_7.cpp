#include <iostream>
#include <iomanip>
#include "./inc/DivSales.h"
using namespace std;

int main(void)
{
    DivSales salesObj[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter quarterly sales figures for division " << i+1 << " (in ₹)" << endl;
        int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
        cout << "Q1: ";
        cin >> q1;
        cout << "Q2: ";
        cin >> q2;
        cout << "Q3: ";
        cin >> q3;
        cout << "Q4: ";
        cin >> q4;
        salesObj[i].set_sales(q1, q2, q3, q4);
    }

    cout << endl;
    cout << setw(5) << "Division" << setw(25) << "Quarterly"
         << " Sales (in ₹)" << endl;
    cout << setw(22) << "Q1" << setw(15) << "Q2" << setw(15) << "Q3" << setw(15) << "Q4" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << setw(5) << i+1;
        for (int j = 0; j < 4; j++){
            if(j == 0){
                cout << setw(17) << right << salesObj[i].get_sales(j);
            }
            else{
                cout << setw(15) << right << salesObj[i].get_sales(j);
            }
        }
        cout << endl;
    }

    cout << "\nTotal sales (in ₹): " << salesObj[3].get_total_sales() << endl;

    return 0;
}