# IPO Analysis -- C++ Exercises

## Task 1: Student Course Total

### Input

-   Assignment mark (out of 100)
-   Midterm mark (out of 100)
-   Final exam mark (out of 100)

### Process

1.  Calculate 20% of the assignment mark.
2.  Calculate 30% of the midterm mark.
3.  Calculate 50% of the final exam mark.
4.  Add the three weighted marks to get the course total.
5.  Check whether the course total is at least 50:
    -   If the total is 50 or above, the result is **Pass**.
    -   Otherwise, the result is **Fail**.
6.  Format the course total to one decimal place.

**Formula:**

`total = assignment * 0.20 + midterm * 0.30 + final * 0.50`

### Output

-   Course total (one decimal place)
-   Pass or Fail

------------------------------------------------------------------------

## Task 2: Electricity Bill

### Input

-   Electricity units used in a month (whole number, kWh)

### Process

1.  Calculate the energy charge:
    -   If units are 50 or less: `energy charge = units * 1.50`
    -   If units are above 50:
        `energy charge = 50 * 1.50 + (units - 50) * 2.00`
2.  Set the fixed service charge to 10 birr.
3.  Add the energy charge and service charge to calculate the total
    bill.
4.  Format all money amounts to two decimal places.

**Formula:**

`energy charge = (units <= 50) ? units * 1.50 : 50 * 1.50 + (units - 50) * 2.00`

`service charge = 10.00`

`total bill = energy charge + service charge`

### Output

-   Energy charge (birr, two decimal places)
-   Service charge (birr, two decimal places)
-   Total bill (birr, two decimal places)

------------------------------------------------------------------------

## Task 3: Trip Speed and Fuel Cost

### Input

-   Trip distance (kilometers)
-   Travel time in hours (whole number)
-   Additional travel time in minutes (whole number)
-   Car fuel consumption (liters per 100 km)
-   Fuel price per liter (birr)

### Process

1.  Convert the travel time into total hours:

    `total time = hours + minutes / 60.0`

2.  Calculate average speed:

    `average speed = distance / total time`

3.  Calculate fuel used:

    `fuel used = (distance / 100.0) * fuel consumption`

4.  Calculate fuel cost:

    `fuel cost = fuel used * price per liter`

5.  Format average speed, fuel used, and fuel cost to two decimal
    places.

### Output

-   Average speed (km/h, two decimal places)
-   Fuel used (liters, two decimal places)
-   Fuel cost (birr, two decimal places)
