#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double distance, fuelRate, pricePerLiter;
    int hours, minutes;
    
    cout << "Enter distance of the trip (km): ";
    cin >> distance;
    cout << "Enter travel time (hours component): ";
    cin >> hours;
    cout << "Enter travel time (minutes component): ";
    cin >> minutes;
    cout << "Enter car's fuel use (liters per 100 km): ";
    cin >> fuelRate;
    cout << "Enter price per liter of fuel (birr): ";
    cin >> pricePerLiter;
    
    double totalTimeHours = hours + (minutes / 60.0);
    double averageSpeed = distance / totalTimeHours;
    double fuelUsed = (distance / 100.0) * fuelRate;
    double fuelCost = fuelUsed * pricePerLiter;
    
    cout << fixed << setprecision(2);
    cout << "\nAverage Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used: " << fuelUsed << " liters" << endl;
    cout << "Fuel Cost: " << fuelCost << " birr" << endl;
    
    return 0;
}
