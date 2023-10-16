#include <iostream>
#include <string>
using namespace std;

struct CorpData{
    string divName;
    float q1Sales;
    float q2Sales;
    float q3Sales;
    float q4Sales;
    float totalSales;
    float avgQSales;

    CorpData(string name = "", float sales1 = 0.0, float sales2 = 0.0, float sales3 = 0.0, float sales4 = 0.0){
        divName = name;
        q1Sales = sales1;
        q2Sales = sales2;
        q3Sales = sales3;
        q4Sales = sales4;
    }
};

/* Prototypes */
void calculate_sales(CorpData& div);
void display_corp_data(CorpData& div);

/**
 * @brief Calculates the total sales and average quarterly sales of a division
 * 
 * @param div - a reference paramater variable of the structure CorpData
 */
void calculate_sales(CorpData& div){
    div.totalSales = div.q1Sales + div.q2Sales + div.q3Sales + div.q4Sales;
    div.avgQSales = div.totalSales / 4.0;
}

/**
 * @brief Displays corporation data
 * 
 * @param div - a reference paramater variable of the structure CorpData
 */
void display_corp_data(CorpData& div){
    cout << "\nDivision name: " << div.divName << endl;
    cout << "First quarter sales (in ₹): " << div.q1Sales << endl;
    cout << "Second quarter sales (in ₹): " << div.q2Sales << endl;
    cout << "Third quarter sales (in ₹): " << div.q3Sales << endl;
    cout << "Fourth quarter sales (in ₹): " << div.q4Sales << endl;
    cout << "Total annual sales (in ₹): " << div.totalSales << endl;
    cout << "Average quarterly sales (in ₹): " << div.avgQSales << endl;

}

int main(void)
{

    CorpData east("East", 10000, 9000, 9121.49, 1500.56);
    CorpData west("West", 1000, 8000, 9121.49, 6500.56);
    CorpData north("North", 20000, 2000, 7121.49, 4500.56);
    CorpData south("South", 300, 9000, 9121.49, 3500.56);

    calculate_sales(east);
    calculate_sales(west);
    calculate_sales(north);
    calculate_sales(south);

    display_corp_data(east);
    display_corp_data(west);
    display_corp_data(north);
    display_corp_data(south);

    return 0;
}