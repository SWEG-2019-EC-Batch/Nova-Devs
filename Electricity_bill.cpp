# TASK 2: ELECTRICITY BILL

## 1. IPO CHART

| INPUT | PROCESS | OUTPUT |
|---|---|---|
| Electricity units (kWh) | Check whether units are less than or equal to 50 | Energy charge |
| | If units <= 50, multiply units by 1.50 birr | Service charge |
| | Otherwise, calculate 50 × 1.50 + (units - 50) × 2.00 | Total bill |
| | Add fixed service charge of 10 birr | |
| | Use conditional operator (?:) | |

### Calculation formula

Energy Charge = Units <= 50 ? Units × 1.50 : 50 × 1.50 + (Units - 50) × 2.00

Service Charge = 10.00 birr

Total Bill = Energy Charge + Service Charge

## 2. FLOWCHART

```mermaid
flowchart TD
    A([Start]) --> B[/Enter electricity units/]
    B --> C{Are units <= 50?}
    C -->|Yes| D[Energy = Units × 1.50]
    C -->|No| E[Energy = 50 × 1.50 + Units above 
