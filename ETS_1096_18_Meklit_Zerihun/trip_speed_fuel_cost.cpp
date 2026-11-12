▎#include <iostream>
#include <iomanip>

using namespace std;

int main() {
double distance, consumptionPer100Km, pricePerLiter;
int hours, minutes;

cout << "Enter distance (km): ";
cin >> distance;
cout << "Enter travel time (hours minutes): ";
cin >> hours >> minutes;
cout << "Enter fuel consumption (liters per 100 km): ";
cin >> consumptionPer100Km;
cout << "Enter fuel price per liter (birr): ";
cin >> pricePerLiter;

double totalHours = hours + (minutes / 60.0);
double averageSpeed = distance / totalHours;
double fuelUsed = (distance / 100.0) * consumptionPer100Km;
double fuelCost = fuelUsed * pricePerLiter;

cout << fixed << setprecision(2);
cout << "Average speed: " << averageSpeed << " km/h" << endl;
cout << "Fuel used: " << fuelUsed << " liters" << endl;
cout << "Fuel cost: " << fuelCost << " birr" << endl;

return 0;
}
