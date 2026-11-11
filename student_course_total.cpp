Task 1: Student Course Total

▎Inputs

• Assignment mark (out of 100)
• Midterm mark (out of 100)
• Final exam mark (out of 100)

▎Process

1. Read the three marks.
2. Calculate the weighted total:
totalMark = (0.20 × assignmentMark) +
(0.30 × midtermMark) +
(0.50 × finalMark)

3. Use the conditional operator to determine the status:
   – If totalMark >= 50, status is “Pass”.
   – Otherwise, status is “Fail”.

▎Output

Display the total mark to one decimal place and the status.
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
double assignmentMarks, midtermMarks, finalMarks;

cout << "Enter assignment mark (0-100): ";
cin >> assignmentMarks;
cout << "Enter midterm mark (0-100): ";
cin >> midtermMarks;
cout << "Enter final mark (0-100): ";
cin >> finalMarks;

double totalMark = (assignmentMarks * 0.20) + (midtermMarks * 0.30) + (finalMarks * 0.50);
string result = (totalMark >= 50.0) ? "Pass" : "Fail";

cout << fixed << setprecision(1);
cout << "Total: " << totalMark << " and " << result << endl;

return 0;
}
