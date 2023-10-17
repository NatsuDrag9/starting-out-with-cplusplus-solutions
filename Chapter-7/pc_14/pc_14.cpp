#include <iostream>
#include "inc/Tips.h"
using namespace std;

int main(void)
{
    // Enter tax rate and tip rate as a percentage
    Tips tip1(10);
    cout << "Tip (in ₹): " << tip1.compute_tip(500, 20) << endl;

    return 0;
}