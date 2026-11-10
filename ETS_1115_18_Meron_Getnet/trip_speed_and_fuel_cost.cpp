#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance, fuelRate, pricePerLiter;
    int hours, minutes;
    double totalTime, averageSpeed, fuelUsed, fuelCost;

    cout << "Enter trip distance (km): ";
    cin >> distance;

    cout << "Enter travel time in hours: ";
    cin >> hours;

    cout << "Enter additional minutes: ";
    cin >> minutes;

    cout << "Enter fuel use (liters per 100 km): ";
    cin >> fuelRate;

    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;

    totalTime = hours + (minutes / 60.0);

    averageSpeed = distance / totalTime;

    fuelUsed = (distance * fuelRate) / 100.0;

    fuelCost = fuelUsed * pricePerLiter;

    cout << fixed << setprecision(2);

    cout << "Average Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used: " << fuelUsed << " liters" << endl;
    cout << "Fuel Cost: " << fuelCost << " birr" << endl;

    return 0;
}