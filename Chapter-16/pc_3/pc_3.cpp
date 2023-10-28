#include <iostream>
#include <cmath>
using namespace std;

// Function prototypes
template <class T>
T calculate_min(T n1, T n2);

template <class T>
T calculate_max(T n1, T n2);

/**
 * @brief Accepts two arguments and returns the minimum of the two arguments
 *
 * @tparam T - template class
 * @param n1 - parameter 1
 * @param n2 - parameter 2
 * @return T - minimum of the two arguments
 */
template <class T>
T calculate_min(T n1, T n2)
{
    return n1 < n2 ? n1 : n2;
}

/**
 * @brief Accepts two arguments and returns the maximum of the two arguments
 *
 * @tparam T - template class
 * @param n1 - parameter 1
 * @param n2 - parameter 2
 * @return T - maximum of the two arguments
 */
template <class T>
T calculate_max(T n1, T n2)
{
    return n1 < n2 ? n1 : n2;
}

int main(void)
{
    cout << "Minimum of 2, 3: " << min(2, 3) << endl;
    cout << "Maximum of 2, 3: " << max(2, 3) << endl;

    cout << "\nMinimum of 1.543, 3.9: " << min(1.543, 3.9) << endl;
    cout << "Maximum of 1.543, 1.542: " << max(1.543, 1.542) << endl;

    string s1 = "hello", s2 = "hi";
    cout << "\nMinimum of \"" << s1 << "\", and \"" << s2 << "\": " << min(s1, s2) << endl;
    cout << "Maximum of \"" << s1 << "\", and \"" << s2 << "\": " << max(s1, s2) << endl; 


    return 0;
}