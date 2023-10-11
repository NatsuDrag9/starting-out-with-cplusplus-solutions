#include <iostream>
using namespace std;

int main(void)
{
    const float g = 9.8;
    float weight, mass;

    cout << "Enter mass of object: ";
    cin >> mass;

    weight = mass*g;
    cout << "Weight of object: " << weight << " N" << endl;
    if(weight > 1000.0){
        cout << "Object is too heavy." << endl;
    }
    else if (weight < 10.0){
        cout << "Obect is too light." << endl;
    }

    return 0;
}