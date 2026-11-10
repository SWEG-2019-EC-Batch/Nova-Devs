
#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // Variable declarations
    float trip_distance,fuel_use,price_per_liter;
    float average_speed,fuel_consumed,fuel_cost;
    int travel_hours, travel_minutes;
    float travel_time;

    // Read trip distance
    cout<<"Trip Distance(km): ";
    cin>>trip_distance;

    // Read travel time in hours and minutes
    cout<<"Travel Hours: ";
    cin>>travel_hours;
    cout<<"Travel Minutes: ";
    cin>>travel_minutes;

    // Read fuel consumption rate and price per liter
    cout<<"Fuel Use(liters per 100 km): ";
    cin>>fuel_use;
    cout<<"Price Per Liter(ETB): ";
    cin>>price_per_liter;

    // Convert travel time into hours
    travel_time = travel_hours + (travel_minutes/60.0);

    // Calculate average speed
    average_speed = trip_distance/travel_time;

    // Calculate total fuel consumed
    fuel_consumed = (fuel_use * trip_distance)/100;

    // Calculate total fuel cost
    fuel_cost = fuel_consumed * price_per_liter;

    // Display results to two decimal places
    cout<<"Average Speed: "<<fixed<<setprecision(2)<<average_speed<<" km/h"<<endl;
    cout<<"Fuel Consumed: "<<fixed<<setprecision(2)<<fuel_consumed<<" liters"<<endl;
    cout<<"Fuel Cost: "<<fixed<<setprecision(2)<<fuel_cost<<" birr"<<endl;

    return 0;
}
