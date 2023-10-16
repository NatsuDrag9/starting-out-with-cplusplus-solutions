#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct MonthlyBudget
{
    float housing;
    float utilities;
    float hhExpenses;
    float transport;
    float food;
    float medical;
    float insurance;
    float entertainment;
    float clothing;
    float misc;

    MonthlyBudget(float h = 0.0, float u = 0.0, float hh = 0.0, float t = 0.0, float f = 0.0, float med = 0.0, float i = 0.0, float e = 0.0, float c = 0.0, float misc = 0.0)
    {
        housing = h;
        utilities = u;
        hhExpenses = hh;
        transport = t;
        food = f;
        medical = med;
        insurance = i;
        entertainment = e;
        clothing = c;
        misc = misc;
    }
};

/* Prototypes */
void get_data(MonthlyBudget &budget);
void display_report(MonthlyBudget &budget1, MonthlyBudget &budget2);

/**
 * @brief Calculates the total sales and average quarterly sales of a division
 *
 * @param budget - a reference paramater variable of the structure MonthlyBudget
 */
void get_data(MonthlyBudget &budget)
{
    cout << "Enter user budget data." << endl;
    cout << "Enter housing expense (in ₹): ";
    cin >> budget.housing;
    if (budget.housing < 0)
    {
        cout << "Invalid input! Housing expenses must be a positive number. Exiting..." << endl;
        exit(0);
    }
    cout << "Enter utilities expense (in ₹): ";
    cin >> budget.utilities;
    if (budget.utilities < 0)
    {
        cout << "Invalid input! Utitlities expenses must be a positive number. Exiting..." << endl;
        exit(0);
    }
    cout << "Enter household expenses (in ₹): ";
    cin >> budget.hhExpenses;
    if (budget.hhExpenses < 0)
    {
        cout << "Invalid input! Household expenses must be a positive number. Exiting..." << endl;
        exit(0);
    }
    cout << "Enter transportation (in ₹): ";
    cin >> budget.transport;
    if (budget.transport < 0)
    {
        cout << "Invalid input! Transportation expenses must be a positive number. Exiting..." << endl;
        exit(0);
    }
    cout << "Enter food (in ₹): ";
    cin >> budget.food;
    if (budget.food < 0)
    {
        cout << "Invalid input! Food expenses must be a positive number. Exiting..." << endl;
        exit(0);
    }
    cout << "Enter medical expense (in ₹): ";
    cin >> budget.medical;
    if (budget.medical < 0)
    {
        cout << "Invalid input! Medical expenses must be a positive number. Exiting..." << endl;
        exit(0);
    }
    cout << "Enter insurance expense (in ₹): ";
    cin >> budget.insurance;
    if (budget.insurance < 0)
    {
        cout << "Invalid input! Insurance must be a positive number. Exiting..." << endl;
        exit(0);
    }
    cout << "Enter entertainment expense (in ₹): ";
    cin >> budget.entertainment;
    if (budget.entertainment < 0)
    {
        cout << "Invalid input! Entertainment expenses must be a positive number. Exiting..." << endl;
        exit(0);
    }
    cout << "Enter clothing expense (in ₹): ";
    cin >> budget.clothing;
    if (budget.clothing < 0)
    {
        cout << "Invalid input! Clothing expenses must be a positive number. Exiting..." << endl;
        exit(0);
    }
    cout << "Enter miscellaneous expense (in ₹): ";
    cin >> budget.misc;
    if (budget.misc < 0)
    {
        cout << "Invalid input! Miscellaneous expenses must be a positive number. Exiting..." << endl;
        exit(0);
    }
}

/**
 * @brief Displays a report indicating whether budget1 was over or under budget2
 *
 * @param budget1 - a reference paramater variable of the structure MonthlyBudget (here, student)
 * @param budget2 - a reference paramater variable of the structure MonthlyBudget
 */
void display_report(MonthlyBudget &budget1, MonthlyBudget &budget2)
{
    // Housing
    if (budget1.housing > budget2.housing)
    {
        cout << "\nIn housing, student went over by ₹ " << budget1.housing - budget2.housing << endl;
    }
    else if (budget1.housing < budget2.housing)
    {
        cout << "In housing, student went under by ₹ " << -1*(budget1.housing - budget2.housing) << endl;
    }
    else
    {
        cout << "In housing, both had same expenses" << endl;
    }

    // Utilities
    if (budget1.utilities > budget2.utilities)
    {
        cout << "In utilities, student went over by ₹ " << budget1.utilities - budget2.utilities << endl;
    }
    else if (budget1.utilities < budget2.utilities)
    {
        cout << "In utilities, student went under by ₹ " << -1*(budget1.utilities - budget2.utilities) << endl;
    }
    else
    {
        cout << "In utilities, both had same expenses" << endl;
    }

    // Household expenses
    if (budget1.hhExpenses > budget2.hhExpenses)
    {
        cout << "In hhExpenses, student went over by ₹ " << budget1.hhExpenses - budget2.hhExpenses << endl;
    }
    else if (budget1.hhExpenses < budget2.hhExpenses)
    {
        cout << "In hhExpenses, student went under by ₹ " << -1*(budget1.hhExpenses - budget2.hhExpenses) << endl;
    }
    else
    {
        cout << "In hhExpenses, both had same expenses" << endl;
    }

    // Transportation
    if (budget1.transport > budget2.transport)
    {
        cout << "In transport, student went over by ₹ " << budget1.transport - budget2.transport << endl;
    }
    else if (budget1.transport < budget2.transport)
    {
        cout << "In transport, student went under by ₹ " << -1*(budget1.transport - budget2.transport) << endl;
    }
    else
    {
        cout << "In transport, both had same expenses" << endl;
    }

    // Food
    if (budget1.food > budget2.food)
    {
        cout << "In food, student went over by ₹ " << budget1.food - budget2.food << endl;
    }
    else if (budget1.food < budget2.food)
    {
        cout << "In food, student went under by ₹ " << -1*(budget1.food - budget2.food) << endl;
    }
    else
    {
        cout << "In food, both had same expenses" << endl;
    }

    // Medical
    if (budget1.medical > budget2.medical)
    {
        cout << "In medical, student went over by ₹ " << budget1.medical - budget2.medical << endl;
    }
    else if (budget1.medical < budget2.medical)
    {
        cout << "In medical, student went under by ₹ " << -1*(budget1.medical - budget2.medical) << endl;
    }
    else
    {
        cout << "In medical, both had same expenses" << endl;
    }

    // Insurance
    if (budget1.insurance > budget2.insurance)
    {
        cout << "In insurance, student went over by ₹ " << budget1.insurance - budget2.insurance << endl;
    }
    else if (budget1.insurance < budget2.insurance)
    {
        cout << "In insurance, student went under by ₹ " << -1*(budget1.insurance - budget2.insurance) << endl;
    }
    else
    {
        cout << "In insurance, both had same expenses" << endl;
    }

    // Entertainment
    if (budget1.entertainment > budget2.entertainment)
    {
        cout << "In entertainment, student went over by ₹ " << budget1.entertainment - budget2.entertainment << endl;
    }
    else if (budget1.entertainment < budget2.entertainment)
    {
        cout << "In entertainment, student went under by ₹ " << -1*(budget1.entertainment - budget2.entertainment) << endl;
    }
    else
    {
        cout << "In entertainment, both had same expenses" << endl;
    }

    // Clothing
    if (budget1.clothing > budget2.clothing)
    {
        cout << "In clothing, student went over by ₹ " << budget1.clothing - budget2.clothing << endl;
    }
    else if (budget1.clothing < budget2.clothing)
    {
        cout << "In clothing, student went under by ₹ " << -1*(budget1.clothing - budget2.clothing) << endl;
    }
    else
    {
        cout << "In clothing, both had same expenses" << endl;
    }

    // Miscellaneous
    if (budget1.misc > budget2.misc)
    {
        cout << "In miscellaneous, student went over by ₹ " << budget1.misc - budget2.misc << endl;
    }
    else if (budget1.misc < budget2.misc)
    {
        cout << "In miscellaneous, student went under by ₹ " << -1*(budget1.misc - budget2.misc) << endl;
    }
    else
    {
        cout << "In miscellaneous, both had same expenses" << endl;
    }
}

int main(void)
{

    MonthlyBudget student(500.00, 150.00, 65.00, 50.00, 250.00, 30.00, 100.0, 150.00, 75.00, 50.00);
    MonthlyBudget user;
    get_data(user);
    display_report(student, user);

    return 0;
}