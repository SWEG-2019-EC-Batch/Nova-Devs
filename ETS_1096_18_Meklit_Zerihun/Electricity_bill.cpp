▎Task 2: Electricity Bill

▎(a) Inputs and Outputs

Input
• units — an integer representing the electricity used in kilowatt-hours (kWh).

Outputs
• energyCharge — a double representing the cost of the electricity used, in birr.
• serviceCharge — a double representing the fixed service charge of 10.00 birr.
• totalBill — a double representing the total bill, in birr.

▎(b) Process

1. Read the number of electricity units used from the user.
2. Set the service charge to a constant value of 10.00 birr.
3. Calculate the energy charge using the conditional operator:
   – If units <= 50:
energyCharge = units × 1.50

• If units > 50:
energyCharge = (50 × 1.50) + ((units - 50) × 2.00)

or, equivalently:
energyCharge = 75.00 + (units - 50) × 2.00

4. Calculate the total bill:
totalBill = energyCharge + serviceCharge

5. Display the energy charge, service charge, and total bill, each formatted to two decimal places.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
int units;
const double SERVICE_CHARGE = 10.00;

cout << "Enter electricity units (kWh): ";
cin >> units;

double energyCharge = (units <= 50) ? (units * 1.50) : (50 * 1.50 + (units - 50) * 2.00);
double totalBill = energyCharge + SERVICE_CHARGE;

cout << fixed << setprecision(2);
cout << "Energy charge: " << energyCharge << endl;
cout << "Service charge: " << SERVICE_CHARGE << endl;
cout << "Total bill: " << totalBill << endl;

return 0;
}
