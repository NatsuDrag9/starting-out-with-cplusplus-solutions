#include <iostream>
#include <cstdlib>
#include <cmath>
#include "../inc/WidgetFactory.h"
using namespace std;

/**
 * @brief Default constructor that sets the order to 0
 * 
 */
WidgetFactory::WidgetFactory(){
    order = 0;
}

/**
 * @brief Gets the number of the widgets ordered from the user, validates it and stores in the order data member
 * 
 */
void WidgetFactory::get_order_data(){
    int userInp = 0;
    cout << "Enter number of widgets ordered: ";
    cin >> userInp;

    if(userInp < 0){
        cout << "Invalid input! Widgets ordered must be a positive number. Exiting..." << endl;
        exit(0);
    }
    order = userInp;
}

/**
 * @brief - Displays the number of days it takes to produce the received order
 * 
 */
void WidgetFactory::print_production_days(){
    int dailyProduction = hourlyProdRate * dailyShift;
    float days = (static_cast<float>(order)) / (static_cast<float>(dailyProduction));
    cout << "Number of days to produce " << order << " widgets: " << ceil(days) << endl;
}