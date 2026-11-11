Task 1: Student Course Total
IPO Analysis
Input Process Output
Assignment mark Multiply assignment by 0.20 Course total
Midterm mark Multiply midterm by 0.30 Pass or Fail
Final mark Multiply final by 0.50 
Process Formula
Total = (Assignment * 0.20) + (Midterm * 0.30) + (Final * 0.50)
Status = Total >= 50 ? "Pass" : "Fail"
Flowchart
flowchart TD
    A([Start]) --> B[/Enter assignment, midterm and final marks/]
    B --> C[Calculate weighted course total]
    C --> D{Is total >= 50?}
    D -->|Yes| E[Status = Pass]
    D -->|No| F[Status = Fail]
    E --> G[/Display total and status/]
    F --> G
    G --> H([End])
Test Data
Assignment Midterm Final Total Result
80 60 70 69.0 Pass
40 30 45 39.5 Fail
