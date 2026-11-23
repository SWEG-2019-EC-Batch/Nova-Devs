
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double base_salary = 0,
           pension = 0,
           bonus_rate = 0,
           gross_salary = 0,
           bonus_payment = 0,
           tax_deduction = 0,
           net_salary = 0;

    double WORKED_HOURS = 0,
           HOURLY_RATE = 0,
           BONUS_PAYMENT = 0,
           PENALTY = 0,
           NET_PAYMENT = 0;

    int HAVE_BONUS = 0,
        DAMAGE = 0;

    float hours_worked = 0;

    const float EXPECTED_HOURS = 40,
                PENSION_RATE = 0.07;

    float TAX_RATE = 0;

    int choice = 0,
        employment_type = 0;

    float penalty = 0,
          PENALTY_RATE = 0;

    cout << "Choose the number of your employment type: " << endl;
    cout << "1. Labor worker" << endl;
    cout << "2. Employee" << endl;
    cin >> employment_type;

    switch (employment_type)
    {
    case 1:
        cout << "Hours Worked: ";
        cin >> WORKED_HOURS;

        cout << "Payment Rate Per Hour (ETB): ";
        cin >> HOURLY_RATE;

        cout << "Does the laborer have Bonus? (1 for yes, 2 for No): ";
        cin >> HAVE_BONUS;

        if (HAVE_BONUS == 1)
        {
            cout << "Bonus Amount: ";
            cin >> BONUS_PAYMENT;
        }
        else if (HAVE_BONUS != 2)
        {
            cout << "Invalid Input!";
            break;
        }

        cout << "Did the laborer damage any machinery? (1 for yes, 2 for No): ";
        cin >> DAMAGE;

        if (DAMAGE == 1)
        {
            cout << "Penalty: ";
            cin >> PENALTY;
        }
        else if (DAMAGE != 2)
        {
            cout << "Invalid Input!";
            break;
        }

        cout << fixed << setprecision(2);

        cout << "Gross Payment: "
             << HOURLY_RATE * WORKED_HOURS + BONUS_PAYMENT << " ETB" << endl;

        cout << "Penalty: " << PENALTY << " Birr" << endl;
        cout << "Bonus: " << BONUS_PAYMENT << " Birr" << endl;
        cout << "Tax Payment: 0 Birr" << endl;
        cout << "Pension Payment: 0 Birr" << endl;

        NET_PAYMENT = HOURLY_RATE * WORKED_HOURS + BONUS_PAYMENT - PENALTY;

        cout << "Net Payment: " << NET_PAYMENT << " Birr" << endl;

        break;

    case 2:
        cout << "Base Salary: ";
        cin >> base_salary;

        if (base_salary >= 0)
        {
            cout << "Hours Worked: ";
            cin >> hours_worked;

            cout << "Bonus Rate (ETB): ";
            cin >> bonus_rate;

            if (hours_worked >= 0 && hours_worked <= 168)
            {
                if (hours_worked >= EXPECTED_HOURS)
                {
                    bonus_payment = bonus_rate * (hours_worked - EXPECTED_HOURS);
                }
                else
                {
                    PENALTY_RATE = base_salary / EXPECTED_HOURS;
                    bonus_payment = 0;
                    penalty = PENALTY_RATE * (EXPECTED_HOURS - hours_worked);
                }

                gross_salary = base_salary + bonus_payment;
                pension = PENSION_RATE * gross_salary;

                if (gross_salary >= 0 && gross_salary <= 3500)
                {
                    TAX_RATE = 0;
                }
                else if (gross_salary > 3500 && gross_salary <= 10000)
                {
                    TAX_RATE = 0.1;
                }
                else if (gross_salary > 10000 && gross_salary <= 25000)
                {
                    TAX_RATE = 0.15;
                }
                else if (gross_salary > 25000 && gross_salary <= 50000)
                {
                    TAX_RATE = 0.2;
                }
                else if (gross_salary > 50000 && gross_salary <= 100000)
                {
                    TAX_RATE = 0.25;
                }
                else
                {
                    TAX_RATE = 0.3;
                }

                tax_deduction = TAX_RATE * gross_salary;
                net_salary = gross_salary - tax_deduction - pension - penalty;

                cout << "Choose one number from the following: " << endl;
                cout << "1. Bonus Payment" << endl;
                cout << "2. Tax Deduction" << endl;
                cout << "3. Pension (7%)" << endl;
                cout << "4. Gross Salary" << endl;
                cout << "5. Net Salary" << endl;
                cout << "6. Penalty" << endl;
                cout << "7. All" << endl;

                cout << fixed << setprecision(2);
                cout << "Choice: ";
                cin >> choice;

                switch (choice)
                {
                case 1:
                    cout << "Bonus Payment: " << bonus_payment << " ETB" << endl;
                    break;

                case 2:
                    cout << "Tax deduction: " << tax_deduction << " ETB" << endl;
                    break;

                case 3:
                    cout << "Pension (7%): " << pension << " ETB" << endl;
                    break;

                case 4:
                    cout << "Gross Salary: " << gross_salary << " ETB" << endl;
                    break;

                case 5:
                    cout << "Net Salary: " << net_salary << " ETB" << endl;
                    break;

                case 6:
                    cout << "Penalty: " << penalty << " ETB" << endl;
                    break;

                case 7:
                    cout << "Bonus Payment: " << bonus_payment << " ETB" << endl;
                    cout << "Tax deduction: " << tax_deduction << " ETB" << endl;
                    cout << "Pension (7%): " << pension << " ETB" << endl;
                    cout << "Gross Salary: " << gross_salary << " ETB" << endl;
                    cout << "Net Salary: " << net_salary << " ETB" << endl;
                    cout << "Penalty: " << penalty << " ETB" << endl;
                    break;

                default:
                    cout << "Invalid choice!" << endl;
                }
            }
            else
            {
                cout << "Invalid working hours!";
            }
        }
        else
        {
            cout << "Invalid Input!";
        }

        break;

    default:
        cout << "Invalid employment type!" << endl;
    }

    return 0;
}
