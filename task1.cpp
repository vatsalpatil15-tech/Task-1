#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    
    int numCourses;

    cout << "===== CGPA Calculator =====" << endl;
    cout << "Enter number of courses: ";
    cin >> numCourses;

    vector<string> courseNames(numCourses);
    vector<float> grades(numCourses);
    vector<float> credits(numCourses);

    float totalCredits = 0;
    float totalGradePoints = 0;

    // Input Course Details
    for (int i = 0; i < numCourses; i++) {

        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter course name: ";
        cin >> courseNames[i];

        cout << "Enter grade point: ";
        cin >> grades[i];

        cout << "Enter credit hours: ";
        cin >> credits[i];

        totalCredits += credits[i];
        totalGradePoints += grades[i] * credits[i];
    }

    // Calculate CGPA
    float cgpa = totalGradePoints / totalCredits;

    // Display Results
    cout << "\n\n===== Course Details =====" << endl;

    for (int i = 0; i < numCourses; i++) {
        cout << "\nCourse Name   : " << courseNames[i];
        cout << "\nGrade Point   : " << grades[i];
        cout << "\nCredit Hours  : " << credits[i] << endl;
    }

    cout << "\n============================" << endl;
    cout << "Total Credits      : " << totalCredits << endl;
    cout << "Total Grade Points : " << totalGradePoints << endl;
    cout << "Final CGPA         : " << fixed << setprecision(2) << cgpa << endl;

    return 0;
}