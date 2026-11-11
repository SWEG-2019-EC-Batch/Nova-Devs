Task 3: Trip Speed and Fuel Cost
IPO Analysis
Input Process Output
Distance in km Convert minutes to hours Average speed
Travel hours Calculate total travel time Fuel used
Travel minutes Calculate average speed Fuel cost
Fuel use per 100 km Calculate fuel consumption 
Price per liter Calculate fuel cost 
Process Formulas
Time = Hours + (Minutes / 60)
Speed = Distance / Time
Fuel used = (Distance * Fuel use) / 100
Fuel cost = Fuel used * Price per liter
Flowchart
flowchart TD
    A([Start]) --> B[/Enter distance, hours, minutes, fuel use and price/]
    B --> C[Convert minutes into hours]
    C --> D[Calculate total travel time]
    D --> E[Calculate average speed]
    E --> F[Calculate fuel used]
    F --> G[Calculate fuel cost]
    G --> H[/Display speed, fuel used and fuel cost/]
    H --> I([End])
Test Data
Distance Time Fuel Use Price Speed Fuel Used Fuel Cost
150 km 2h 30min 8 L/100km 60 birr 60.00 12.00 720.00
