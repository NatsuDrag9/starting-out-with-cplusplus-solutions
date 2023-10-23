#include <iostream>
#include <cmath>
using namespace std;

// Function prototypes
int digit_sum(int n);
void find_numbers();

/**
 * @brief Gets the sum of the digits of the integer number received
 * 
 * @param n - number whose digit sum is to be calculated
 * @return int - sum of digits
 */
int digit_sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

/**
 * @brief Finds all positive numbers k < 1000 such that sum of digits of k, k^2 and k^3 are equal
 * 
 */
void find_numbers() {
    for (int k = 1; k < 1000; k++) {
        int kSquared = pow(k, 2);
        int kCubed = pow(k, 3);

        if ((digit_sum(k) == digit_sum(kSquared)) && (digit_sum(k) == digit_sum(kCubed))) {
            cout << k << " (" << kSquared << ", " << kCubed << ")" << endl;
        }
    }
}

int main() {
    find_numbers();
    return 0;
}
