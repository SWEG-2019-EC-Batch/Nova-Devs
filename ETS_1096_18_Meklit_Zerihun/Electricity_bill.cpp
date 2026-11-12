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
