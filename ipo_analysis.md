
# IPO ANALYSIS – C++ ASSIGNMENT

## TASK 1: STUDENT COURSE TOTAL

### Input
- Assignment mark (out of 100)
- Midterm mark (out of 100)
- Final exam mark (out of 100)

### Process
- Assignment contribution = Assignment mark * 0.20
- Midterm contribution = Midterm mark * 0.30
- Final contribution = Final mark * 0.50
- Course total = Assignment contribution + Midterm contribution + Final contribution
- Determine result using conditional operator:
  Total >= 50 ? Pass : Fail
- Format total to one decimal place.

### Output
- Course total
- Pass or Fail

```mermaid
flowchart TD
    A([START]) --> B[/Input assignment, midterm and final marks/]
    B --> C["Assignment contribution = Assignment * 0.20"]
    C --> D["Midterm contribution = Midterm * 0.30"]
    D --> E["Final contribution = Final * 0.50"]
    E --> F["Total = Assignment contribution + Midterm contribution + Final contribution"]
    F --> G["Result = Total >= 50 ? Pass : Fail"]
    G --> H[/Display total to 1 decimal place and result/]
    H --> I([END])
```

---

## TASK 2: ELECTRICITY BILL

### Input
- Electricity units consumed (kWh)

### Process
- If units are 50 or less:
  Energy charge = Units * 1.50
- If units are above 50:
  Energy charge = 75 + (Units - 50) * 2.00
- Service charge = 10 birr
- Total bill = Energy charge + Service charge
- Format all amounts to two decimal places.

### Output
- Energy charge
- Service charge
- Total electricity bill

```mermaid
flowchart TD
    A([START]) --> B[/Input electricity units/]
    B --> C{Units <= 50?}
    C -->|YES| D["Energy = Units * 1.50"]
    C -->|NO| E["Energy = 75 + (Units - 50) * 2.00"]
    D --> F["Service charge = 10"]
    E --> F
    F --> G["Total bill = Energy + Service charge"]
    G --> H[/Display energy charge, service charge and total to 2 decimals/]
    H --> I([END])
```

---

## TASK 3: TRIP SPEED AND FUEL COST

### Input
- Trip distance in kilometers
- Travel time in hours
- Travel time in minutes
- Fuel consumption in liters per 100 km
- Fuel price per liter in birr

### Process
- Convert travel time into hours:
  Total time = Hours + Minutes / 60
- Calculate average speed:
  Average speed = Distance / Total time
- Calculate fuel used:
  Fuel used = Distance * Fuel consumption / 100
- Calculate fuel cost:
  Fuel cost = Fuel used * Price per liter
- Format all results to two decimal places.

### Output
- Average speed in km/h
- Fuel used in liters
- Fuel cost in birr

```mermaid
flowchart TD
    A([START]) --> B[/Input distance, hours, minutes, fuel consumption and price per liter/]
    B --> C["Total time = Hours + Minutes / 60"]
    C --> D["Average speed = Distance / Total time"]
    D --> E["Fuel used = Distance * Fuel consumption / 100"]
    E --> F["Fuel cost = Fuel used * Price per liter"]
    F --> G[/Display average speed, fuel used and fuel cost to 2 decimals/]
    G --> H([END])
```
