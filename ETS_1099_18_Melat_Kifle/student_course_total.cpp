#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int units;
    const double SERVICE_CHARGE = 10.0;
    
    cout << "Enter electricity units used (kWh): ";
    cin >> units;
    
    // Calculates the tiered pricing using the conditional operator instead of an 'if' statement
    double energyCharge = (units <= 50) ? (units * 1.50) : (50 * 1.50 + (units - 50) * 2.00);
    double totalBill = energyCharge + SERVICE_CHARGE;
    
    cout << fixed << setprecision(2);
    cout << "\nEnergy Charge: " << energyCharge << " birr" << endl;
    cout << "Service Charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total Bill: " << totalBill << " birr" << endl;
    
    return 0;
}
