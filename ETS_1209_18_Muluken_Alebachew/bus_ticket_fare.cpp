#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float baggage_weight;
    float TRIP_FARE = 0.0;
    int destination;
    float Bahir_Dar = 1600,
          Gondar = 1900,
          Mekele = 2100,
          Jimma = 1700,
          Nekemte = 1800,
          Axum = 2200,
          Hawassa = 400,
          Adama = 350,
          Arba_Minch = 1400,
          Sodo = 1200,
          Bale_Robe = 2000,
          Dessie = 1500,
          Addis_Ababa = 300,
          Dire_Dawa = 1300,
          Harar = 1400,
          Debre_Markos = 1200,
          Shashamane = 600,
          Dilla = 750,
          Hosaena = 800,
          Assosa = 2500,
          Gambella = 2300,
          Jijiga = 1800,
          Adigrat = 2300,
          Debre_Birhan = 600;

    const int MAX_BAGGAGE = 20;
    float baggage_fare = 0.0, total_fare;
    int available_seats;
    int age;
    int student;

    cout << "========== ETHIOPIAN DESTINATIONS ==========" << endl;
    cout << "1. Bahir Dar" << endl;
    cout << "2. Gondar" << endl;
    cout << "3. Mekele" << endl;
    cout << "4. Jimma" << endl;
    cout << "5. Nekemte" << endl;
    cout << "6. Axum" << endl;
    cout << "7. Hawassa" << endl;
    cout << "8. Adama" << endl;
    cout << "9. Arba Minch" << endl;
    cout << "10. Sodo" << endl;
    cout << "11. Bale Robe" << endl;
    cout << "12. Dessie" << endl;
    cout << "13. Addis Ababa" << endl;
    cout << "14. Dire Dawa" << endl;
    cout << "15. Harar" << endl;
    cout << "16. Debre Markos" << endl;
    cout << "17. Shashamane" << endl;
    cout << "18. Dilla" << endl;
    cout << "19. Hosaena" << endl;
    cout << "20. Assosa" << endl;
    cout << "21. Gambella" << endl;
    cout << "22. Jijiga" << endl;
    cout << "23. Adigrat" << endl;
    cout << "24. Debre Birhan" << endl;

    cout << "Enter destination number: ";
    cin >> destination;

    // Determine the trip fare based on the destination
    switch (destination)
    {
    case 1:
        TRIP_FARE = Bahir_Dar;
        break;

    case 2:
        TRIP_FARE = Gondar;
        break;

    case 3:
        TRIP_FARE = Mekele;
        break;

    case 4:
        TRIP_FARE = Jimma;
        break;

    case 5:
        TRIP_FARE = Nekemte;
        break;

    case 6:
        TRIP_FARE = Axum;
        break;

    case 7:
        TRIP_FARE = Hawassa;
        break;

    case 8:
        TRIP_FARE = Adama;
        break;

    case 9:
        TRIP_FARE = Arba_Minch;
        break;

    case 10:
        TRIP_FARE = Sodo;
        break;

    case 11:
        TRIP_FARE = Bale_Robe;
        break;

    case 12:
        TRIP_FARE = Dessie;
        break;

    case 13:
        TRIP_FARE = Addis_Ababa;
        break;

    case 14:
        TRIP_FARE = Dire_Dawa;
        break;

    case 15:
        TRIP_FARE = Harar;
        break;

    case 16:
        TRIP_FARE = Debre_Markos;
        break;

    case 17:
        TRIP_FARE = Shashamane;
        break;

    case 18:
        TRIP_FARE = Dilla;
        break;

    case 19:
        TRIP_FARE = Hosaena;
        break;

    case 20:
        TRIP_FARE = Assosa;
        break;

    case 21:
        TRIP_FARE = Gambella;
        break;

    case 22:
        TRIP_FARE = Jijiga;
        break;

    case 23:
        TRIP_FARE = Adigrat;
        break;

    case 24:
        TRIP_FARE = Debre_Birhan;
        break;

    default:
        TRIP_FARE = 0;
        cout << "There is no transportation service for your destination." << endl;
        break;
    }

    if (TRIP_FARE > 0)
    {
        cout << "Enter available seats: ";
        cin >> available_seats;

        if (available_seats > 0)
        {

            cout << "Baggage Weight: ";
            cin >> baggage_weight;

            if (baggage_weight < 0)
            {
                cout << "Invalid baggage weight!" << endl;
            }
            else if (baggage_weight > MAX_BAGGAGE)
            {
                baggage_fare = 10 * (baggage_weight - MAX_BAGGAGE);
            }

            cout << "Age: ";
            cin >> age;

            cout << "Are you a student? (1 for Yes, 0 for No): ";
            cin >> student;

            if (age <= 12)
            {
                TRIP_FARE = 0.5 * TRIP_FARE;

                if (student == 1)
                {
                    TRIP_FARE = 0.2 * TRIP_FARE;
                }
            }
            else if (age >= 60)
            {
                TRIP_FARE = 0.75 * TRIP_FARE;
                if (student == 1)
                {
                    TRIP_FARE = 0.45 * TRIP_FARE;
                }
            }
            else
            {
                if (student == 1)
                {
                    TRIP_FARE = 0.7 * TRIP_FARE;
                }
            }

            total_fare = baggage_fare + TRIP_FARE;

            cout << "Trip Fare: " << TRIP_FARE << endl;
            cout << "Baggage Fare: " << baggage_fare << endl;
            cout << "Total Fare: " << fixed << setprecision(2) << total_fare << endl;
        }
        else
        {
            cout << "All seats are sold out!";
        }
    }
    return 0;
}