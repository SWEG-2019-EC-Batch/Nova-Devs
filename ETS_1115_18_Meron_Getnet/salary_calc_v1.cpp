#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double baseSalary, hoursWorked, bonusRate;
    double  bonusPayment, grossSalary;
    double tax, pension, netSalary;
    double overtimeHours;
    int choice;

    // Input
    cout << "Enter base salary per hour: ";
    cin >> baseSalary;

    cout << "Enter hours worked in a week: ";
    cin >> hoursWorked;

    cout << "Enter bonus rate (birr per hour ): ";
    cin >> bonusRate;

    // Calculate bonus payment
    if (hoursWorked > 40)
    {
        overtimeHours = hoursWorked - 40;
        bonusPayment = overtimeHours * bonusRate;
    }
    else
    {
        bonusPayment = 0;
    }

    // Calculate gross salary
    grossSalary = baseSalary + bonusPayment;

    // Calculate tax
    if (grossSalary <= 3500)
    {
        tax = 0;
    }
    else if (grossSalary <= 10000)
    {
        tax = grossSalary * 0.10;
    }
    else if (grossSalary <= 25000)
    {
        tax = grossSalary * 0.15;
    }
    else if (grossSalary <= 50000)
    {
        tax = grossSalary * 0.20;
    }
    else if (grossSalary <= 100000)
    {
        tax = grossSalary * 0.25;
    }
    else
    {
        tax = grossSalary * 0.30;
    }

    // Calculate pension (7%)
    pension = grossSalary * 0.07;

    // Calculate net salary
    netSalary = grossSalary - tax - pension;

    // Display results
    cout << fixed << setprecision(2);

  cout << "Choose what you want\n";
    cout << "1. Bonus\n";
    cout << "2. Gross salary\n";
    cout << "3. Pension\n";
    cout << "4. Tax\n";
    cout << "5. Net Salary\n";
    cout << "Enter the number of you want to see(1-5): ";
    
    cin >> choice;

   
switch (choice)
{
    case 1:
        cout << "Selected: Bonus\n";
        cout << "Bonus Payment: " << bonusPayment << " birr";
        break;

    case 2:
        cout << "Selected: Gross Salary\n";
        cout << "Gross Salary: " << grossSalary << " birr";
        break;

    case 3:
        cout << "Selected: Pension\n";
        cout << "Pension: " << pension << " birr";
        break;

    case 4:
        cout << "Selected: Tax\n";
        cout << "Tax: " << tax << " birr";
        break;

    case 5:
        cout << "Selected: Net Salary\n";
        cout << "Net Salary: " << netSalary << " birr";
        break;

    default:
        cout << "Invalid choice! Please select a number between 1 and 5.";
        break;
}

    
    return 0;
}