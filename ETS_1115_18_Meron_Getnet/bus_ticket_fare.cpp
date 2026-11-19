#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    float baggage_weight;
    const float TRIP_FARE = 300;
    const int MAX_BAGGAGE = 20;

    float baggage_fare = 0, total_fare;
    float trip_fare, age_discount, student_discount;
    float total_discount;

    int available_seats;
    int age, student, destination;

    // Display destinations
    cout<<"Available Destinations:"<<endl;
    cout<<"1. Bahir Dar"<<endl;
    cout<<"2. Gondar"<<endl;
    cout<<"3. Hawassa"<<endl;
    cout<<"4. Mekelle"<<endl;
    cout<<"5. Dire Dawa"<<endl;

    cout<<"Enter destination number: ";
    cin>>destination;

    // Select destination and fare
    switch(destination){

        case 1:
            trip_fare = 2000;
            break;

        case 2:
            trip_fare = 2500;
            break;

        case 3:
            trip_fare = 1800;
            break;

        case 4:
            trip_fare = 3000;
            break;

        case 5:
            trip_fare = 2800;
            break;

        default:
            cout<<"Invalid destination!";
            return 0;
    }

    // Enter passenger information
    cout<<"Enter baggage weight: ";
    cin>>baggage_weight;

    cout<<"Enter available seats: ";
    cin>>available_seats;

    if(available_seats > 0){

        cout<<"Enter your age: ";
        cin>>age;

        cout<<"Are you a student? (1=Yes, 0=No): ";
        cin>>student;

        // Calculate baggage fare
        if(baggage_weight > MAX_BAGGAGE){
            baggage_fare =
            10*(baggage_weight-MAX_BAGGAGE);
        }

        // Initialize discounts
        age_discount = 0;
        student_discount = 0;

        // Age discount
        if(age < 12){
            age_discount = trip_fare * 0.15;
        }

        // Student discount
        if(student == 1){
            student_discount = trip_fare * 0.30;
        }

        // Calculate total discount
        total_discount = age_discount + student_discount;

        // Calculate final fare
        trip_fare = trip_fare - total_discount;

        total_fare = trip_fare + baggage_fare;

        // Display results
        cout<<fixed<<setprecision(2);

        cout<<"Original Trip Fare: "<<trip_fare + total_discount<<endl;
        cout<<"Age Discount: "<<age_discount<<endl;
        cout<<"Student Discount: "<<student_discount<<endl;
        cout<<"Total Discount: "<<total_discount<<endl;
        cout<<"Baggage Fare: "<<baggage_fare<<endl;
        cout<<"Final Trip Fare: "<<trip_fare<<endl;
        cout<<"Total Fare: "<<total_fare<<endl;

    }
    else{
        cout<<"All seats are sold out!";
    }

    return 0;
}