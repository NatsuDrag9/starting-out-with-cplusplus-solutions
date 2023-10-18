#include <string>
#include "../inc/Stats.h"

/**
 * @brief Default constructor that sets the default values of member variables
 * 
 */
Stats::Stats(){
    currentIndex = 0;
    lowestIndex = 0;
    highestIndex = 0;
    for(int i = 0; i < ARRAY_LENGTH; i++){
        arr[i] = 0.0;
    }
}

/**
 * @brief - Performs the following functions:
 * 1.) Stores the received value in the array.
 * 2.) Tracks how full is the array
 * 3.) Ensures that no more than ARRAY_LENGTH values are accepted
 * 
 * @param val - times received from the client
 * @param str - name of the athlete
 * @return true - when value is successfully stored in array
 * @return false - when value could not be stored in array
 */
bool Stats::store_value(double val, string str){
    if(currentIndex < ARRAY_LENGTH){
        arr[currentIndex] = val;
        names[currentIndex] = str;
        currentIndex++;
        return true;
    }
    return false;
}

/**
 * @brief - Calculates and returns the total of the values stored in the array
 * 
 * @return double - returns the total value
 */
double Stats::get_total(){
    double total = 0;
    for(int i = 0; i < currentIndex; i++){
        total += arr[i];
    }
    return total;
}

/**
 * @brief - Calculates and returns the average of the values stored in the array
 * 
 * @return double - returns the average value
 */
double Stats::get_average(){
    double average = get_total() / (static_cast<double>(currentIndex));
    return average;
}

/**
 * @brief - Calculates and returns the lowest of the values stored in the array
 * 
 * @return double - returns the lowest value
 */
double Stats::get_lowest(){
    double lowest = arr[0];
    for(int i = 1; i < currentIndex; i++){
        if(arr[i] <= lowest){
            lowest = arr[i];
            lowestIndex = i;
        }
    }
    return lowest;
}

/**
 * @brief - Calculates and returns the highest of the values stored in the array
 * 
 * @return double - returns the highest value
 */
double Stats::get_highest(){
    double highest = arr[0];
    for(int i = 1; i < currentIndex; i++){
        if(arr[i] >= highest){
            highest = arr[i];
            highestIndex = i;
        }
    }
    return highest;
}

/**
 * @brief - Returns the name of the athlete located at the received index position in the names array
 * 
 * @param index - array index to retrieve the name
 * @return string - athlete name
 */
string Stats::get_name(int index){
    return names[index];
}