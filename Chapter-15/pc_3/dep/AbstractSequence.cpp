#include <iostream>
#include "../inc/AbstractSequence.h"
using namespace std;

/**
 * @brief Prints all terms from fun(k) to fun(m)
 * 
 * @param k - kth value of the sequence
 * @param m - number of terms in the sequence
 */
void AbstractSequence::print_seq(int k, int m){
    cout << "Generated sequence: ";
    for(int i = k; i <= m; i++){
        cout << fun(i) << " ";
    }
    cout << endl;
}

/**
 * @brief Sums the terms of the sequence and  returns it
 * 
 * @param k - kth value of the sequence
 * @param m - number of terms in the sequence
 * @return int - sum of the sequence terms
 */
int AbstractSequence::sum_seq(int k, int m){
    int tempSum = 0;
    for(int i = k; i <= m; i++){
        tempSum += fun(i);
    }
    return tempSum;
}

// /**
//  * @brief Sets the value of the sum member
//  * 
//  * @param _sum - value to set the sum member
//  */
// void AbstractSequence::set_sum(int _sum){
//     sum = _sum;
// }

/*
Sequence 1
*/

/**
 * @brief Default constructor does nothing
 * 
 */
Sequence1::Sequence1(){
  // Do nothing  
}

/**
 * @brief Generates a sequence of odd numbers and returns the term
 * 
 * @param k - kth value of the sequencye
 * @return int - sequence term
 */
int Sequence1::fun(int k){
    return 2*k + 1;
}

/*
Sequence 2
*/

/**
 * @brief Default constructor does nothing
 * 
 */
Sequence2::Sequence2(){
  // Do nothing  
}

/**
 * @brief Generates a sequence of even numbers and returns the term
 * 
 * @param k - kth value of the sequencye
 * @return int - sequence term
 */
int Sequence2::fun(int k){
    return 2*k;
}