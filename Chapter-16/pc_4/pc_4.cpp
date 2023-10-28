#include <iostream>
#include <vector>
using namespace std;

// Function prototypes
template <class T>
T accumulate(vector<T> v);

/**
 * @brief Forms and returns the sum of all items in the vector v passed into it.
 * 
 * @tparam T - template type
 * @param v - vector v
 * @return T - sum of all items of
 */
template <class T>
T accumulate(vector<T> v)
{
    T sum = T();
    for(const T& item : v){
        sum += item; // For numeric types, it adds while for string it concatenates
    }

    return sum;
}

int main(void)
{
    vector<int> vInt = {1, 2, 3, 4, 5};
    vector<double> vDouble = {1.0, 2.5, 3.9, 4.0, 5.0};
    vector<string> vString = {"h", "el", "!0"};

    cout << "Sum of integers: " << accumulate(vInt) << endl;
    cout << "Sum of doubles: " << accumulate(vDouble) << endl;
    cout << "Sum of strings: " << accumulate(vString) << endl;

    return 0;
}