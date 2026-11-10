
  #include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double assignment, midterm, finalExam;
    
    cout << "Enter assignment mark (0-100): ";
    cin >> assignment;
    cout << "Enter midterm mark (0-100): ";
    cin >> midterm;
    cout << "Enter final exam mark (0-100): ";
    cin >> finalExam;
    
    double total = (assignment * 0.20) + (midterm * 0.30) + (finalExam * 0.50);
    string status = (total >= 50) ? "Pass" : "Fail";
    
    cout << fixed << setprecision(1);
    cout << "\nTotal Mark: " << total << endl;
    cout << "Status: " << status << endl;
    
    return 0;
}

