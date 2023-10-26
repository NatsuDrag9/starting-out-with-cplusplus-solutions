#include <iostream>
#include <string>
using namespace std;

// Function prototype
int ackerman(int m, int n);

/**
 * @brief - Ackermann’s function is a recursive mathematical algorithm that can be used to test how well a computer performs recursion.
 * Algorithm:
 * If m = 0 then return n+1
 * If n = 0 then return A(m-1, 1)
 * Otherwise, return A(m-1, A(m, n-1))
 * 
 * @param m
 * @param n 
 * @return int 
 */
int ackerman(int m, int n){
    if(m == 0){
        return n+1;
    }
    else if (n == 0){
        return ackerman(m-1, 1);
    }
    return ackerman(m-1, ackerman(m, n-1));
}

int main(void){
    cout << "A(0, 0): " << ackerman(0, 0) << endl;
    cout << "A(0, 1): " << ackerman(0, 1) << endl;
    cout << "A(1, 1): " << ackerman(1, 1) << endl;
    cout << "A(1, 2): " << ackerman(1, 2) << endl;
    cout << "A(1, 3): " << ackerman(1, 3) << endl;
    cout << "A(2, 2): " << ackerman(2, 2) << endl;
    cout << "A(3, 2): " << ackerman(3, 2) << endl;
    return 0;
}