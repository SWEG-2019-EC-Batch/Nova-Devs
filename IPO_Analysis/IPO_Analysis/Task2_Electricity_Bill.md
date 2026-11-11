Task 2: Electricity Bill
IPO Analysis
Input Process Output
Electricity units Check if units are <= 50 Energy charge
 Calculate energy charge Service charge
 Add 10 birr service charge Total bill
Process Formula
Energy = (Units <= 50) ? Units * 1.50 : 75 + (Units - 50) * 2.00
Service charge = 10
Total bill = Energy + Service charge
Flowchart
flowchart TD
    A([Start]) --> B[/Enter electricity units/]
    B --> C{Units <= 50?}
    C -->|Yes| D[Energy = Units * 1.50]
    C -->|No| E[Energy = 75 + extra units * 2.00]
    D --> F[Service charge = 10]
    E --> F
    F --> G[Calculate total bill]
    G --> H[/Display energy, service charge and total/]
    H --> I([End])
Test Data
Units Energy Charge Service Charge Total
80 135.00 10.00 145.00
30 45.00 10.00 55.00
