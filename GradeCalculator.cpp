#include <iostream>
#include <string>
using namespace std;

// Function to determine grade
char getGrade(float avg) {
    if(avg >= 70) return 'A';
    else if(avg >= 60) return 'B';
    else if(avg >= 50) return 'C';
    else if(avg >= 45) return 'D';
    else return 'F';
}

// Function to check pass/fail
string getStatus(float avg) {
    if(avg >= 50) return "PASSED";
    else return "FAILED";
}

int main() {
    string name;
    float math, english, cs, avg;
    
    cout << "=== Student Grade Calculator ===" << endl;
    cout << "Enter Student Name: ";
    cin >> name;
    
    cout << "Enter Math Score: ";
    cin >> math;
    cout << "Enter English Score: ";
    cin >> english;
    cout << "Enter Computer Science Score: ";
    cin >> cs;
    
    // Calculate average
    avg = (math + english + cs) / 3;
    
    cout << "\n--- Result for " << name << " ---" << endl;
    cout << "Average Score: " << avg << endl;
    cout << "Grade: " << getGrade(avg) << endl;
    cout << "Status: " << getStatus(avg) << endl;
    
    return 0;
}
cout << "\nPress Enter to exit...";
cin.ignore();
cin.get();ahmad
