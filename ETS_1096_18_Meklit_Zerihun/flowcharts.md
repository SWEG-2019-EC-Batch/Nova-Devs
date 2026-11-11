flowchart TD
    A([START]) --> B[/Enter Assignment, Midterm and Final Marks/]
    B --> C[Calculate Total = Assignment * 0.20 + Midterm * 0.30 + Final * 0.50]
    C --> D{Total >= 50?}
    D -->|YES| E[/Print Total and PASS/]
    D -->|NO| F[/Print Total and FAIL/]
    E --> G([END])
    F --> G
flowchart TD
    A([START]) --> B[/Enter Electricity Units/]
    B --> C{Units <= 50?}
    C -->|YES| D[Energy Charge = Units * 1.50]
    C -->|NO| E[Energy Charge = 75 + Units Above 50 * 2.00]
    D --> F[Service Charge = 10 Birr]
    E --> F
    F --> G[Total Bill = Energy Charge + Service Charge]
    G --> H[/Print Energy Charge, Service Charge and Total Bill/]
    H --> I([END])
flowchart TD
    A([START]) --> B[/Enter Distance, Hours, Minutes, Fuel Consumption and Price Per Liter/]
    B --> C[Total Time = Hours + Minutes / 60.0]
    C --> D[Average Speed = Distance / Total Time]
    D --> E[Fuel Used = Distance * Fuel Consumption / 100]
    E --> F[Fuel Cost = Fuel Used * Price Per Liter]
    F --> G[/Print Average Speed, Fuel Used and Fuel Cost/]
    G --> H([END])
