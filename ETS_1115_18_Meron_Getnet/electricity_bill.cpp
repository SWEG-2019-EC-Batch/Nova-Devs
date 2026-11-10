#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int units;
    double energyCharge, serviceCharge, totalBill;

    cout << "Enter electricity units used: ";
    cin >> units;

    energyCharge = (units <= 50)
        ? units * 1.50
        : (50 * 1.50) + ((units - 50) * 2.00);

    serviceCharge = 10.00;
    totalBill = energyCharge + serviceCharge;

    cout << fixed << setprecision(2);

    cout << "Energy Charge: " << energyCharge << " birr" << endl;
    cout << "Service Charge: " << serviceCharge << " birr" << endl;
    cout << "Total Bill: " << totalBill << " birr" << endl;

    return 0;
}