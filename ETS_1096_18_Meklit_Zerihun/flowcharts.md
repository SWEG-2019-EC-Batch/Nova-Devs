
# Task 1: Student Course Total

```mermaid
flowchart TD
    A([Start]) --> B[/Input assignment, midterm and final marks/]
    B --> C[Total = assignment * 0.20 + midterm * 0.30 + final * 0.50]
    C --> D{Total >= 50?}
    D -->|Yes| E[Result = Pass]
    D -->|No| F[Result = Fail]
    E --> G[/Display total and Pass/]
    F --> H[/Display total and Fail/]
    G --> I([End])
    H --> I
```


# Task 2: Electricity Bill

```mermaid
flowchart TD
    A([START]) --> B[/Enter electricity units/]
    B --> C{Units <= 50?}
    C -->|YES| D[Energy charge = Units * 1.50]
    C -->|NO| E[Energy charge = 75 + (Units - 50) * 2.00]
    D --> F[Service charge = 10]
    E --> F
    F --> G[Total bill = Energy charge + Service charge]
    G --> H[/Print energy charge/]
    H --> I[/Print service charge/]
    I --> J[/Print total bill to 2 decimal places/]
    J --> K([END])
```


# Task 3: Trip Speed and Fuel Cost

```mermaid
flowchart TD
    A([Start]) --> B[/Input distance, hours, minutes, fuel consumption and price per liter/]
    B --> C[Time = hours + minutes / 60]
    C --> D{Time > 0?}
    D -->|Yes| E[Speed = distance / time]
    E --> F[Fuel used = distance * fuel consumption / 100]
    F --> G[Fuel cost = fuel used * price per liter]
    G --> H[/Display speed, fuel used and fuel cost/]
    D -->|No| I[/Display invalid travel time/]
    H --> J([End])
    I --> J
```
