#include <iostream>
#include <vector>
using namespace std;

// Function prototypes
template <class T>
T absolute_value(T value);

/**
 * @brief Calculates and returns the received parameter's absolute value
 *
 * @tparam T - template type
 * @param value - parameter whose absolute value needs to be calculated
 * @return T - absolute value of the parameter
 */
template <class T>
T absolute_value(T value) {
    if(value < 0){
        return value*-1;
    }
    return value;
}

int main(void)
{
    cout << "Absolute value of -11: " << absolute_value<int>(-1) << endl;
    cout << "Absolute value of -2.1: " << absolute_value<float>(-2.1) << endl;

    return 0;
}