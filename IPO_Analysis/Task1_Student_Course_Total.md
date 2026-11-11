# PROGRAMMING ASSIGNMENT
## IPO CHARTS AND FLOWCHARTS

---

# TASK 1: STUDENT COURSE TOTAL

## 1. IPO CHART

| INPUT | PROCESS | OUTPUT |
|---|---|---|
| Assignment mark | Multiply assignment mark by 20% | Course total |
| Midterm mark | Multiply midterm mark by 30% | Pass or Fail |
| Final mark | Multiply final mark by 50% | |
| | Add the three weighted marks | |
| | Use conditional operator: total >= 50 ? Pass : Fail | |

### Calculation formula

Course Total = (Assignment × 0.20) + (Midterm × 0.30) + (Final × 0.50)

Pass/Fail = Total >= 50 ? "Pass" : "Fail"

## 2. FLOWCHART

```mermaid
flowchart TD
    A([Start]) --> B[/Enter assignment mark, midterm mark and final mark/]
    B --> C[Calculate weighted assignment mark]
    C --> D[Calculate weighted midterm mark]
    D --> E[Calculate weighted final mark]
    E --> F[Add all weighted marks]
    F --> G{Is total >= 50?}
    G -->|Yes| H[Result = Pass]
    G -->|No| I[Result = Fail]
    H --> J[/Display total and result/]
    I --> J
    J --> K([End])

