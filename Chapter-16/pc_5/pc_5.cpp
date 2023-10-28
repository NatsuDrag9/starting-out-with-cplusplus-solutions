#include <iostream>
#include <vector>
using namespace std;

// Function prototypes
template <class T>
T total(int count);

/**
 * @brief Keep a running total of values entered by the user, then returns the total
 *
 * @tparam T - template type
 * @param count - number of values being read
 * @return T - running total of all items
 */
template <class T>
T total(int count) {
    T sum = T(); // Initialize sum based on the type T
    for (int i = 0; i < count; i++) {
        T value;
        cout << "Enter value " << i + 1 << ": ";
        cin >> value;
        sum += value;
    }
    return sum;
}

int main(void)
{
    int n;
    cout << "Enter number of values to read: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Invalid input! Number of values must be a positive number. Exiting..." << endl;
        return 1;
    }

    cout << total<int>(n) << endl;

    return 0;
}