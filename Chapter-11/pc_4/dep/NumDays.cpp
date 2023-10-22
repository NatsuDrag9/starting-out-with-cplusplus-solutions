#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "../inc/NumDays.h"

/**
 * @brief Default constructor
 *
 */
NumDays::NumDays()
{
    this->hours = 0;
    this->days = 0.0;
}

/**
 * @brief Initialization constructor
 *
 * @param _hours
 */
NumDays::NumDays(int _hours)
{
    if(_hours < 0){
        error("Number of work hours must be a postive number.");
    }
    this->set_hours(_hours);
}

/**
 * @brief Sets the number of work hours
 *
 * @param h - received integer containing work hours
 */
void NumDays::set_hours(int h)
{
    this->hours = h;
}

/**
 * @brief Gets the number of work hours that was set
 *
 * @return int
 */
int NumDays::get_hours()
{
    return this->hours;
}

/**
 * @brief Sets the number of days from the specified work hours
 *
 * @param d - value of days to be set
 */
void NumDays::set_days(float d){
    this->days = d;
}

/**
 * @brief Gets the number of days
 *
 * @return float
 */
float NumDays::get_days(){
    return this->days;
}

/**
 * @brief Calculates the number of days from the specified work hours
 * 
 */
void NumDays::calculate_days(){
    this->set_days(static_cast<float>(this->get_hours())/8.0);
}

/**
 * @brief - Overloading addition operator. This function is a friend to class NumDays and returns its object
 *
 * @param n1 - NumDays object 1 is the first operand
 * @param n2 - NumDays object 2 is the second operand
 * @return NumDays
 */
NumDays operator+(NumDays n1, NumDays n2)
{
    return NumDays(n1.get_hours() + n2.get_hours());
}

/**
 * @brief - Overloading subtraction operator. This function is a friend to class NumDays and returns its object
 *
 * @param n1 - NumDays object 1 is the first operand
 * @param n2 - NumDays object 2 is the second operand
 * @return NumDays
 */
NumDays operator-(NumDays n1, NumDays n2)
{
    if (n1.get_hours() > n2.get_hours())
    {
        return NumDays(n1.get_hours() - n2.get_hours());
    }
    return NumDays(n2.get_hours() - n1.get_hours());
}

/**
 * @brief Prints an error when input received is invalid
 *
 */
void NumDays::error(string err)
{
    cout << "Invalid input! " << err << " Exiting..." << endl;
    exit(0);
}

/**
 * @brief Prints the number of days for the hours
 *
 */
void NumDays::print()
{
    cout << "Days: " << fixed << setprecision(2) << this->get_days() << endl;
}

/**
 * @brief Overloading prefix increment operator. The number of hours in the object is incremented by one
 * 
 * @return NumDays 
 */
NumDays NumDays::operator++(){
    ++this->hours;
    return *this;
}

/**
 * @brief Overloading postfix increment operator. The number of hours in the object is incremented by one
 * 
 * @param int - dummy parameter to indicate postfix incrementation
 * @return NumDays 
 */
NumDays NumDays::operator++(int){
    NumDays temp = *this;
    this->hours++;
    return temp;
}

/**
 * @brief Overloading prefix decrement operator. The number of hours in the object is decremented by one
 * 
 * @return NumDays 
 */
NumDays NumDays::operator--(){
    --this->hours;
    return *this;
}

/**
 * @brief Overloading postfix decrement operator. The number of hours in the object is decremented by one
 * 
 * @param int - dummy parameter to indicate postfix decrementation
 * @return NumDays 
 */
NumDays NumDays::operator--(int){
    NumDays temp = *this;
    this->hours--;
    return temp;
}
