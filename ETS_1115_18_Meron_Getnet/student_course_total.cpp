#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    double assignment, midterm, finalExam, total;
    string result;

    cout << "Enter assignment mark: ";
    cin >> assignment;

    cout << "Enter midterm mark: ";
    cin >> midterm;

    cout << "Enter final exam mark: ";
    cin >> finalExam;

    total = (assignment * 0.20) + (midterm * 0.30) + (finalExam * 0.50);

    result = (total >= 50) ? "Pass" : "Fail";

    cout << fixed << setprecision(1);
    cout << "Course Total: " << total << endl;
    cout << "Result: " << result << endl;

    return 0;
}