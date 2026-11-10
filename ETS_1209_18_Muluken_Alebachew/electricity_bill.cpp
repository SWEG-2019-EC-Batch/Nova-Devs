
#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // Variable declarations
    int electricity_units;
    float energy_charge, total_bill;

    // Constant values
    const int service_charge = 10;
    const int unit_limit = 50;

    // Read electricity units consumed
    cout << "Electricity Units (kWh): ";
    cin >> electricity_units;

    // Calculate energy charge using the conditional operator
    // First 50 units cost 1.50 birr each; additional units cost 2.00 birr each
    electricity_units > unit_limit
        ? energy_charge = 2 * (electricity_units - unit_limit) + 75
        : energy_charge = 1.5 * electricity_units;

    // Calculate the total bill
    total_bill = energy_charge + service_charge;

    // Display the service charge, energy charge, and total bill
    cout << fixed << setprecision(2);

    cout << "Service Charge: " << service_charge << " birr" << endl;
    cout << "Energy Charge: " << energy_charge << " birr" << endl;
    cout << "Total Charge: " << total_bill << " birr" << endl;

    return 0;
}
