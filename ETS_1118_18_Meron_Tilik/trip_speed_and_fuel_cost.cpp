/*
 * Task 3: Trip Speed and Fuel Cost
 *
 * (a) Inputs and Outputs:
 *     Inputs:
 *       - distance: Total trip distance in kilometers (km)
 *       - hours: Whole hours spent traveling
 *       - minutes: Remaining minutes spent traveling
 *       - fuel_per_100km: Vehicle fuel consumption rate (liters per 100 km)
 *       - price_per_liter: Cost of fuel per liter (birr)
 *     Outputs:
 *       - average_speed: Average speed of the trip in km/h (formatted to 2 decimal places)
 *       - fuel_used: Total liters of fuel consumed (formatted to 2 decimal places)
 *       - fuel_cost: Total cost of fuel in birr (formatted to 2 decimal places)
 *
 * (b) Process:
 *     1. Read distance, hours, minutes, fuel_per_100km, and price_per_liter from the user.
 *     2. Convert the total travel time into hours using: total_hours = hours + (minutes / 60.0).
 *     3. Calculate average_speed using: distance / total_hours.
 *     4. Calculate fuel_used using: (distance / 100.0) * fuel_per_100km.
 *     5. Calculate fuel_cost using: fuel_used * price_per_liter.
 *     6. Display average_speed, fuel_used, and fuel_cost formatted to 2 decimal places.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double distance, fuel_per_100km, price_per_liter;
    int hours, minutes;

    cout << "Enter distance (km): ";
    cin >> distance;
    cout << "Enter travel time hours: ";
    cin >> hours;
    cout << "Enter travel time minutes: ";
    cin >> minutes;
    cout << "Enter fuel use (liters per 100 km): ";
    cin >> fuel_per_100km;
    cout << "Enter price per liter (birr): ";
    cin >> price_per_liter;

    double total_hours = hours + (minutes / 60.0);
    double average_speed = distance / total_hours;
    double fuel_used = (distance / 100.0) * fuel_per_100km;
    double fuel_cost = fuel_used * price_per_liter;

    cout << fixed << setprecision(2);
    cout << "Average Speed: " << average_speed << " km/h" << endl;
    cout << "Fuel Used:     " << fuel_used << " liters" << endl;
    cout << "Fuel Cost:     " << fuel_cost << " birr" << endl;

    return 0;
}
