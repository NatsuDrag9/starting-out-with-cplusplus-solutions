#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(void)
{
    const float YEN_PER_DOLLAR = 0.952;
    const float EUROS_PER_DOLLAR = 0.7175;
    float usd;

    cout << "Enter USD: ";
    cin >> usd;

    float yen = usd*YEN_PER_DOLLAR;
    float eur = usd*EUROS_PER_DOLLAR;

    cout << "Euros: " << eur << endl;
    cout << "Yen: " << yen << endl;

    return 0;
}