/*
 * Task 1: Student Course Total
 *
 * (a) Inputs and Outputs:
 *     Inputs:
 *       - assignment: Student's assignment score (out of 100, weighted 20%)
 *       - midterm: Student's midterm exam score (out of 100, weighted 30%)
 *       - final_exam: Student's final exam score (out of 100, weighted 50%)
 *     Outputs:
 *       - total: Weighted total score formatted to 1 decimal place
 *       - result: "Pass" if total >= 50, otherwise "Fail"
 *
 * (b) Process:
 *     1. Read the assignment, midterm, and final exam scores from the user.
 *     2. Calculate the weighted total using the formula:
 *        total = (0.20 * assignment) + (0.30 * midterm) + (0.50 * final_exam).
 *     3. Use the conditional operator to check if total >= 50.0 to set result to "Pass" or "Fail".
 *     4. Display the total score formatted to 1 decimal place and the final Pass/Fail result.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double assignment, midterm, final_exam;

    cout << "Enter assignment mark: ";
    cin >> assignment;
    cout << "Enter midterm mark: ";
    cin >> midterm;
    cout << "Enter final mark: ";
    cin >> final_exam;

    double total = (0.20 * assignment) + (0.30 * midterm) + (0.50 * final_exam);

    cout << fixed << setprecision(1);
    cout << "Total: " << total << endl;
    cout << "Result: " << ((total >= 50.0) ? "Pass" : "Fail") << endl;

    return 0;
}
