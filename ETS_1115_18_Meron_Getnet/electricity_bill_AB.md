TASK 2: ELECTRICITY BILL

A. INPUT AND OUTPUT

Input:
1. Electricity units used in one month (in kWh), as a whole number.

Outputs:
1. Energy charge, displayed to two decimal places.
2. Fixed service charge of 10.00 birr, displayed to two decimal places.
3. Total bill, displayed to two decimal places.

B. PROCESS (NUMBERED LIST)

1. Start the program.
2. Declare variables to store the electricity units, energy charge, service charge, and total bill.
3. Read the number of electricity units used in one month.
4. Calculate the energy charge using the conditional operator:
   - When the units are less than or equal to 50, multiply the units by 1.50 birr.
   - When the units are greater than 50, charge 1.50 birr for the first 50 units and 2.00 birr for every additional unit.
5. Set the fixed service charge to 10.00 birr.
6. Calculate the total bill by adding the energy charge and service charge.
7. Display the energy charge, service charge, and total bill to two decimal places.
8. End the program.


C. FLOWCHART
```mermaid
flowchart TD
    A([Start]) --> B[/Input electricity units/]
    B --> C{Units <= 50?}
    C -->|Yes| D[Energy charge = Units * 1.50]
    C -->|No| E[Energy charge = 50 * 1.50 + Units above 50 * 2.00]
    D --> F[Service charge = 10.00]
    E --> F
    F --> G[Total bill = Energy charge + Service charge]
    G --> H[/Display all charges to 2 decimal places/]
    H --> I([End])
    ```