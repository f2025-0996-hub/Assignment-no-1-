#include <iostream>
#include <iomanip>
#include <string>>
using namespace std;

int main() {
    float m1 , m2 , m3 , m4 , m5;
    cout << "Enter marks of 5 subjects:";
    cin >> m1 >> m2 >> m3 >> m5;
    float total = m1 + m2 + m3 + m4 + m5;
    float percentage = (total / 500) * 100;

    string grade;
    if (percentage >= 90){
        grade ="A+";
     } else if (percentage >= 80){
             grade ="A";
     } else if (percentage <= 70){
            grade = "B";
     } else if (percentage >= 60){
            grade = "C";
     } else if (percentage >= 50){
            grade = "D";
    }else 
           grade ="F";
    string result = (percentage >= 50) ? "PASS" : "FAIL";
    cout << "\n------------REPORT CARD-------------\n";
    cout << setw(15) << "Total Marks:" << total << "/500\n";
    cout << setw(15) << "Percentage:" << fixed << setprecision(2) << percentage  << "%\n";
    cout << setw(15) << "Grade:" << grade << "\n";
    cout << setw(15) << "Result:" << result << endl;
    cout << "---------------------------------------\n";

    return 0;
}