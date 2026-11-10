
#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // Variable declarations
    float assignment_mark,midterm_mark,final_mark;
    float total_mark;

    // Read the student's marks (percentages)
    cout<<"Assignment Mark (%): ";
    cin>>assignment_mark;

    cout<<"Midterm Mark (%): ";
    cin>>midterm_mark;

    cout<<"Final Mark (%): ";
    cin>>final_mark;

    // Calculate the weighted course total
    // Assignment = 20%, Midterm = 30%, Final = 50%
    total_mark = 0.2*assignment_mark + 0.3*midterm_mark + 0.5*final_mark;

    // Display the total mark to one decimal place
    cout<<"Total: "<<fixed<<setprecision(1)<<total_mark<<endl;

    // Determine Pass or Fail using the conditional operator
    // Pass mark = 50
    total_mark>=50?cout<<"Result: Pass"<<endl:cout<<"Result: Fail"<<endl;

    return 0;
}
