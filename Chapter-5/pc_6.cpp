#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    float annualRiseRate = 3.1, totalHeight = 0; // in mm/yr
    int time = 25;

    cout << "Year " << setw(20) << "Yearly height " << setw(20) << "Total height " << endl;

    for (int i = 1; i <= time; i++){
        float annualHeight = annualRiseRate * i;
        totalHeight += annualHeight;
        cout << i << setw(17) << annualHeight << setw(17) << totalHeight << endl;
    }

    return 0;
}