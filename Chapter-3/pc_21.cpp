#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
    float angleInRad, sine, cosine, tangent;

    cout << "Enter angle (in radians): ";
    cin >> angleInRad;

    sine = sin(angleInRad);
    cosine = cos(angleInRad);
    tangent = tan(angleInRad);

    cout << "sine(" << angleInRad << "): " << fixed << setprecision(4) << sine << endl;
    cout << "cosine(" << angleInRad << "): " << fixed << setprecision(4) << cosine << endl;
    cout << "tan(" << angleInRad << "): " << fixed << setprecision(4) << tangent << endl;
    
    return 0;
}