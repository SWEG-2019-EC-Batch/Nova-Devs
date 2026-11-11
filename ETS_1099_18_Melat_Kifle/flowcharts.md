 Task 1: Student Course Total
```mermaid
flowchart TD
    A([Start]) --> B[/Input assignment, midterm and final marks/]
    B --> C[Calculate weighted total]
    C --> D{Total >= 50?}
    D -->|Yes| E[Result = Pass]
    D -->|No| F[Result = Fail]
    E --> G[/Display total and Pass/]
    F --> H[/Display total and Fail/]
    G --> I([End])
    H --> I
    ```
   Task 2: Electricity Bill
    ```mermaid
    flowchart TD
    A([Start]) --> B[/Input electricity units/]
    B --> C{Units <= 50?}
    C -->|Yes| D[Energy = Units * 1.50]
    C -->|No| E[Energy = 75 + (Units - 50) * 2.00]
    D --> F[Service charge = 10]
    E --> F
    F --> G[Total bill = Energy + Service]
    G --> H[/Display energy, service and total bill/]
    H --> I([End])
    ```
  Task 3: Trip Speed an Fuel Cost 
    ```mermaid
    flowchart TD
    A([Start]) --> B[/Input distance, hours, minutes, fuel consumption and price/]
    B --> C[Convert time to hours]
    C --> D[Calculate average speed]
    D --> E[Calculate fuel used]
    E --> F[Calculate fuel cost]
    F --> G[/Display speed, fuel used and fuel cost/]
    G --> H([End])
    ```
