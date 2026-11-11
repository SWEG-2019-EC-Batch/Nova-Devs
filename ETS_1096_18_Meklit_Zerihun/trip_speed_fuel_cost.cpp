▎Task 3: Trip Speed and Fuel Cost

▎(a) Inputs and Outputs

Inputs:
• distance (double): Total distance traveled, in kilometers.
• hours (int): Travel time in hours.
• minutes (int): Additional travel time in minutes.
• consumptionPer100Km (double): Fuel consumption in liters per 100 kilometers.
• pricePerLiter (double): Fuel price in birr per liter.

Outputs:
• averageSpeed (double): Average speed, in kilometers per hour.
• fuelUsed (double): Total fuel used, in liters.
• fuelCost (double): Total fuel cost, in birr.

▎(b) Process

1. Read distance, hours, minutes, consumptionPer100Km, and pricePerLiter from the user.
2. Convert the travel time to hours:
totalHours = hours + minutes / 60.0

3. Calculate the average speed:
averageSpeed = distance / totalHours

4. Calculate the total fuel used:
fuelUsed = distance × ((consumptionPer100Km / 100.0))

5. Calculate the total fuel cost:
fuelCost = fuelUsed × pricePerLiter

6. Display averageSpeed, fuelUsed, and fuelCost, formatted to two decimal places.
#include <iostream>
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
