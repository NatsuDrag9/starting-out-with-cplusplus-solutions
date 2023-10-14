#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void get_in_patient_data(int &inp1, float &inp2, float &inp3, float &inp4);
void get_out_patient_data(float &inp1, float &inp2);
void calculate_hospital_charges(int days, float dailyRate, float serviceCharge, float medicalCharge);
void calculate_hospital_charges(float serviceCharge, float medicalCharge);

/**
 * @brief Gets in-patient's data from user
 *
 * @param inp1 - number of days spent in hospital
 * @param inp2 - daily rate
 * @param inp3 - hospital services charge (lab tests, etc.)
 * @param inp4 - hospital medication charges
 */
void get_in_patient_data(int &inp1, float &inp2, float &inp3, float &inp4)
{
    cout << "\nEnter number of days spent in the hospital: ";
    cin >> inp1;
    if (inp1 < 0)
    {
        cout << "Invalid input! Days spent in hospital must be greater than or equal to 0. Exiting ...";
        exit(0);
    }
    cout << "Enter daily rate (in ₹): ";
    cin >> inp2;
    if (inp2 < 0)
    {
        cout << "Invalid input! Daily rate must be a positive number. Exiting ...";
        exit(0);
    }
    cout << "Enter charges for hospital services (in ₹): ";
    cin >> inp3;
    if (inp3 < 0)
    {
        cout << "Invalid input! Hospital service charge must be a positive number. Exiting ...";
        exit(0);
    }
    cout << "Enter hospital medication charge (in ₹): ";
    cin >> inp4;
    if (inp4 < 0)
    {
        cout << "Invalid input! Hospital medication charge must be a positive number. Exiting ...";
        exit(0);
    }
}

/**
 * @brief Gets the out-patient's data from user
 *
 * @param inp1 - hospital services charge (lab tests, etc.)
 * @param inp2 - hospital medication charges
 */
void get_out_patient_data(float &inp1, float &inp2)
{
    cout << "\nEnter charges for hospital services (in ₹): ";
    cin >> inp1;
    if (inp1 < 0)
    {
        cout << "Invalid input! Hospital service charge must be a positive number. Exiting ...";
        exit(0);
    }
    cout << "Enter hospital medication charge (in ₹): ";
    cin >> inp2;
    if (inp2 < 0)
    {
        cout << "Invalid input! Hospital medication charge must be a positive number. Exiting ...";
        exit(0);
    }
}

/**
 * @brief Calculates and displays the in-patient's hospital charges
 *
 * @param days
 * @param dailyRate
 * @param serviceCharge
 * @param medicalCharge
 */
void calculate_hospital_charges(int days, float dailyRate, float serviceCharge, float medicalCharge)
{
    cout << "\nBase charges (in ₹): " << days * dailyRate << endl;
    cout << "Service charge (in ₹): " << serviceCharge << endl;
    cout << "Medication charge (in ₹): " << medicalCharge << endl;
    cout << "Total (in ₹): " << days * dailyRate + serviceCharge + medicalCharge << endl;
}

/**
 * @brief Calculates and displays the out-patient's hospital charges
 *
 * @param serviceCharge
 * @param medicalCharge
 */
void calculate_hospital_charges(float serviceCharge, float medicalCharge)
{
    cout << "\nService charge (in ₹): " << serviceCharge << endl;
    cout << "Medication charge (in ₹): " << medicalCharge << endl;
    cout << "Total (in ₹): " << serviceCharge + medicalCharge << endl;
}

int main(void)
{
    string userInput;
    cout << "Enter in-patient or out-patient: ";
    cin >> userInput;
    if ((userInput == "in-patient") || (userInput == "in"))
    {
        int inp1 = 0;
        float inp2 = 0.0, inp3 = 0.0, inp4 = 0.0;

        get_in_patient_data(inp1, inp2, inp3, inp4);
        calculate_hospital_charges(inp1, inp2, inp3, inp4);
    }
    else if ((userInput == "out-patient") || (userInput == "out"))
    {
        float inp1 = 0.0, inp2 = 0.0;

        get_out_patient_data(inp1, inp2);
        calculate_hospital_charges(inp1, inp2);
    }
    else{
        cout << "Invalid input! Program only accepts keywords \"in-patient\", \"in\", \"out-patient\" and \"or\". Exiting..." << endl;
    }

    return 0;
}