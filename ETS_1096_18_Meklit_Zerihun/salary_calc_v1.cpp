#include <iostream>
using namespace std;
int main()
{

                   if hours worked >BASE_HOUR extra hour = hours worked-40
                    bonus=bonus rate*extra
                    if extra hour >=0 bonus=0
                    tax rate=0 for case 1,10 for case 2 ,.....
                    tax=tax rate * gross salary
                    pension=gross salary*PESNION_RATE
                    net salary=gross salary-(tax+pension)+bonus
    */
    float base_salary, hours_worked, bonus_rate, tax_rate, net_salary, gross_salary, tax, extra_hour, bonus;
    int     choice;
    enum choice
    {
        case1 = 1,
        case2,
        case3,
        case4,
        case5,
        case6
    };
    const float BASE_HOUR = 40;
    const float PENSION_RATE = 0.07;

    cout << "please enter your base salary: " << endl;
    cin >> base_salary;
    cout << "please enter your hours worked per week: " << endl;
    cin >> hours_worked;
    cout << "please enter your bonus rate in ETB: " << endl;
    cin >> bonus_rate;
    if (hours_worked > BASE_HOUR)
    {
        extra_hour = hours_worked - 40;
    }
    else if (hours_worked == BASE_HOUR)
    {
        bonus = 0;
    }
    else if (hours_worked < BASE_HOUR)
    {
        gross_salary = base_salary - (0.1 * base_salary);
    }
    else
    {
        cout << "invalid input" << endl;
        return 0;
    }
    bonus = bonus_rate * extra_hour;
    gross_salary = base_salary + bonus;

    if(gross_salary <= 3500)
    {
        tax_rate = 0;
    }
    else if (gross_salary > 3500 && gross_salary <= 10000)
    {
        tax_rate = 0.1;
    }
    else if (gross_salary > 10000 && gross_salary <= 25000)
    {
        tax_rate = 0.15;
    }
    else if (gross_salary > 25000 && gross_salary <= 50000)
    {
        tax_rate = 0.2;
    }
    else if (gross_salary > 50000 && gross_salary <= 100000)
    {
        tax_rate = 0.25;
    }
    else if (gross_salary > 100000)
    {
        tax_rate = 0.3;
    }
    tax = gross_salary * tax_rate;
    float pension = gross_salary * PENSION_RATE;
    net_salary = gross_salary - (tax + pension);
    //allow the user to choose what they want to see from the following options
    cout<<"dear employee,please choose what you want to see from the following options: "<<endl;
    cout<<"1. gross salary"<<endl;
    cout<<"2. bonus payment"<<endl;
    cout<<"3. tax deduction"<<endl;
    cout<<"4. pension deduction"<<endl;
    cout<<"5. net salary"<<endl;
    cout<<"6.all the above"<<endl;
    cout << "please enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "your gross salary is: " << gross_salary << endl;
        break;
    case 2:
        cout << "your bonus is: " << bonus << endl;
        break;
    case 3:
        cout << "your tax is: " << tax << endl;
        break;
    case 4:
        cout << "your pension is: " << pension << endl;
        break;
    case 5:
        cout << "your net salary is: " << net_salary << endl;
        break;
    case 6:
        cout << "your gross salary is: " << gross_salary << endl;
        cout << "your bonus is: " << bonus << endl;
        cout << "your tax is: " << tax << endl;
        cout << "your pension is: " << pension << endl;
        cout << "your net salary is: " << net_salary << endl;
        break;
    default:
        cout << "invalid choice" << endl;
    }
    cout << fixed << setprecision(2);
    return 0;
}

