#include <iostream>
using namespace std;
int main()
{
    int worker_type;
    float BASE_SALARY, BONUS_RATE, HOURS_WORKED, BONUS_HOURS;
    float GROSS_SALARY, BONUS_PAYMENT, NET_SALARY, tax, pension;
    float HOURLY_RATE, PENALTY, DAMAGE_AMOUNT, BONUS;
    const float PENSION_DEDUCTION = 0.07;
    cout << "Select Worker Type:" << endl;
    cout << "1. Employee" << endl;
    cout << "2. Laborer" << endl;
    cout << "Enter choice: ";
    cin >> worker_type;
    if (worker_type == 1)
    {
        cout << "Enter BASE_SALARY: ";
        cin >> BASE_SALARY;
        cout << "Enter HOURS_WORKED: ";
        cin >> HOURS_WORKED;
        cout << "Enter BONUS_RATE per hour: ";
        cin >> BONUS_RATE;
        if (HOURS_WORKED > 40)
        {
            BONUS_HOURS = HOURS_WORKED - 40;
            BONUS_PAYMENT = BONUS_HOURS * BONUS_RATE;
        }
        else
        {
            BONUS_PAYMENT = 0;
        }
        GROSS_SALARY = BASE_SALARY + BONUS_PAYMENT;
        pension = GROSS_SALARY * PENSION_DEDUCTION;
        if (GROSS_SALARY <= 3500)
            tax = 0;
        else if (GROSS_SALARY <= 10000)
            tax = GROSS_SALARY * 0.10;
        else if (GROSS_SALARY <= 25000)
            tax = GROSS_SALARY * 0.15;
        else if (GROSS_SALARY <= 50000)
            tax = GROSS_SALARY * 0.20;
        else if (GROSS_SALARY <= 100000)
            tax = GROSS_SALARY * 0.25;
        else
            tax = GROSS_SALARY * 0.30;
        NET_SALARY = GROSS_SALARY - pension - tax;
        cout << "\n----- EMPLOYEE SALARY DETAILS -----" << endl;
        cout << "BONUS_PAYMENT: " << BONUS_PAYMENT << " Birr" << endl;
        cout << "GROSS_SALARY: " << GROSS_SALARY << " Birr" << endl;
        cout << "PENSION: " << pension << " Birr" << endl;
        cout << "Tax Deduction: " << tax << " Birr" << endl;
        cout << "NET_SALARY: " << NET_SALARY << " Birr" << endl;
    }
    else if (worker_type == 2)
    {
        cout << "Enter HOURS_WORKED: ";
        cin >> HOURS_WORKED;
        cout << "Enter HOURLY_RATE: ";
        cin >> HOURLY_RATE;
        cout << "Does the laborer have a bonus? (1=Yes, 0=No): ";
        cin >> worker_type;
        if (worker_type == 1)
        {
            cout << "Enter BONUS amount: ";
            cin >> BONUS;
        }
        else
        {
            BONUS = 0;
        }
        cout << "Did the laborer damage machinery? (1=Yes, 0=No): ";
        cin >> worker_type;
        if (worker_type == 1)
        {
            cout << "Enter DAMAGE penalty amount: ";
            cin >> DAMAGE_AMOUNT;
            PENALTY = DAMAGE_AMOUNT;
        }
        else
        {
            PENALTY = 0;
        }
        GROSS_SALARY = HOURS_WORKED * HOURLY_RATE + BONUS;
        NET_SALARY = GROSS_SALARY - PENALTY;
        cout << "\n----- LABORER SALARY DETAILS -----" << endl;
        cout << "Hours Worked: " << HOURS_WORKED << endl;
        cout << "Hourly Rate: " << HOURLY_RATE << " Birr" << endl;
        cout << "Bonus: " << BONUS << " Birr" << endl;
        cout << "Machinery Penalty: " << PENALTY << " Birr" << endl;
        cout << "GROSS_SALARY: " << GROSS_SALARY << " Birr" << endl;
        cout << "Tax Deduction: 0 Birr" << endl;
        cout << "Pension Deduction: 0 Birr" << endl;
        cout << "NET_SALARY: " << NET_SALARY << " Birr" << endl;
    }
    else
    {
        cout << "Invalid worker type!" << endl;
    }
    return 0;
}
