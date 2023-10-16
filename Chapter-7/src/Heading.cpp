#include <iostream>
#include <cstdlib>
#include "../inc/Heading.h"

/**
 * @brief Default constructor that sets the company name and report name to default values
 *
 */
Heading::Heading()
{
    companyName = "ABC Industries";
    reportName = "Report";
}

/**
 * @brief - Constructor with two parameters to set the company name and report name
 *
 */
Heading::Heading(string cName, string rName)
{
    companyName = cName;
    reportName = rName;
}

/**
 * @brief - Displays the heading in one line format:
 * Pet Pals Payroll Report
 */
void Heading::print_heading_one_line(){
    cout << companyName << " " << reportName << endl;
}

/**
 * @brief - Displays the heading in four line format:
 * *************************************************
 *                  Pet Pals
 *                 Payroll Report
 * *************************************************
 */
void Heading::print_heading_four_lines(){
    cout << "*******************************************************" << endl;
    cout << "                    " << companyName << "              " << endl;
    cout << "                    " << reportName << "               " << endl;
    cout << "*******************************************************" << endl;
}