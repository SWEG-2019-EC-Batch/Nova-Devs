# Chapter 2 C++ Exercises — Meron Tilik (ETS 1118/18)

## Task 1: Student Course Total (`student_course_total.cpp`)

```mermaid
flowchart TD
    A([Start]) --> B[/Read assignment, midterm, final_exam/]
    B --> C["total = 0.20*assignment + 0.30*midterm + 0.50*final_exam"]
    C --> D{total >= 50.0?}
    D -- Yes --> E["result = 'Pass'"]
    D -- No --> F["result = 'Fail'"]
    E --> G[/Display total and result/]
    F --> G
    G --> H([End])
```

---

## Task 2: Electricity Bill (`electricity_bill.cpp`)

```mermaid
flowchart TD
    A([Start]) --> B["service_charge = 10.00, unit_limit = 50"]
    B --> C[/Read electricity_units/]
    C --> D{electricity_units > 50?}
    D -- Yes --> E["energy_charge = 2.0 * (electricity_units - 50) + 75.0"]
    D -- No --> F["energy_charge = 1.5 * electricity_units"]
    E --> G["total_bill = energy_charge + service_charge"]
    F --> G
    G --> H[/Display energy_charge, service_charge, total_bill/]
    H --> I([End])
```

---

## Task 3: Trip Speed and Fuel Cost (`trip_speed_and_fuel_cost.cpp`)

```mermaid
flowchart TD
    A([Start]) --> B[/Read distance, hours, minutes, fuel_per_100km, price_per_liter/]
    B --> C["total_hours = hours + (minutes / 60.0)"]
    C --> D["average_speed = distance / total_hours"]
    D --> E["fuel_used = (distance / 100.0) * fuel_per_100km"]
    E --> F["fuel_cost = fuel_used * price_per_liter"]
    F --> G[/Display average_speed, fuel_used, fuel_cost/]
    G --> H([End])
```
