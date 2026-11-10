TASK 1: STUDENT COURSE TOTAL

A. INPUT AND OUTPUT

Inputs:
1. Student's assignment mark (out of 100).
2. Student's midterm mark (out of 100).
3. Student's final examination mark (out of 100).

Outputs:
1. Course total mark, displayed to one decimal place.
2. Pass or Fail result.

B. PROCESS (NUMBERED LIST)

1. Start the program.
2. Declare variables to store the assignment, midterm, and final marks, and the course total.
3. Read the student's assignment, midterm, and final marks.
4. Calculate the course total using the formula:
   Course Total = (Assignment × 0.20) + (Midterm × 0.30) + (Final × 0.50).
5. Apply the conditional operator to determine the result: assign "Pass" when the course total is greater than or equal to 50; otherwise, assign "Fail".
6. Display the course total to one decimal place and display the Pass or Fail result.
7. End the program.


C. FLOWCHART
```mermaid
flowchart TD
    A([Start]) --> B[/Input assignment, midterm, and final marks/]
    B --> C[Calculate course total]
    C --> D{Course total >= 50?}
    D -->|Yes| E[Result = Pass]
    D -->|No| F[Result = Fail]
    E --> G[/Display total to one decimal place and result/]
    F --> G
    G --> H([End])
  ```