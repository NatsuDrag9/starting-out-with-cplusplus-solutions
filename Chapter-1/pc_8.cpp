#include <iostream>
using namespace std;

int main(){
    int acreTosqft = 43560;
    float sqmTosqft = 10.7639;
    float quarterAcreTosqft = acreTosqft/4.0;
    float quarterAcreTosqm = quarterAcreTosqft/sqmTosqft;

    cout << "Quarter acre of land in sq ft: " << quarterAcreTosqft << endl;
    cout << "Quarter acre of land in sq m: " << quarterAcreTosqm << endl;
    return 0;
}