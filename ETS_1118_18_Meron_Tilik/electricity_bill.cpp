/*
 * Task 2: Electricity Bill
 *
 * (a) Inputs and Outputs:
 *     Inputs:
 *       - electricity_units: Total electricity units consumed in kWh (whole number)
 *     Outputs:
 *       - energy_charge: Cost of electricity based on consumption tiers (formatted to 2 decimal places)
 *       - service_charge: Fixed monthly service fee of 10.00 birr
 *       - total_bill: Sum of energy_charge and service_charge (formatted to 2 decimal places)
 *
 * (b) Process:
 *     1. Define constants for service_charge (10.00 birr) and unit_limit (50 kWh).
 *     2. Read the whole number of electricity_units consumed from the user.
 *     3. Use the conditional operator to calculate energy_charge:
 *        - If electricity_units > 50, charge 1.50 birr for the first 50 units (75.00 birr) plus 2.00 birr for each unit above 50.
 *        - Otherwise, charge 1.50 birr per unit.
 *     4. Calculate total_bill by adding service_charge to energy_charge.
 *     5. Display energy_charge, service_charge, and total_bill formatted to 2 decimal places.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int electricity_units;
    double energy_charge, total_bill;
    const double service_charge = 10.00;
    const int unit_limit = 50;

    cout << "Electricity Units: ";
    cin >> electricity_units;

    energy_charge = (electricity_units > unit_limit)
        ? 2.0 * (electricity_units - unit_limit) + 75.0
        : 1.5 * electricity_units;

    total_bill = energy_charge + service_charge;

    cout << fixed << setprecision(2);
    cout << "Energy Charge:  " << energy_charge << " birr" << endl;
    cout << "Service Charge: " << service_charge << " birr" << endl;
    cout << "Total Charge:   " << total_bill << " birr" << endl;

    return 0;
}
