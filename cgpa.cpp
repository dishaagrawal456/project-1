#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

int main() {
    int numCourses;

    string courseName[50];
    float grade[50], credit[50];
    float totalGradePoints = 0, totalCredits = 0;

    cout<<"Enter number of courses:";
    cin>>numCourses;

    cout << "\nEnter details for each course:\n";
    for (int i = 0; i < numCourses; i++) {
        cout << "\nCourse " << i + 1 << " name: ";
        cin >> courseName[i];
        cout << "Enter grade (0 - 10): ";
        cin >> grade[i];
        cout << "Enter credit hours: ";
        cin >> credit[i];

        totalGradePoints += grade[i] * credit[i];
        totalCredits += credit[i];
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\n----------------------------------------\n";
    cout << "Course\tGrade\tCredits\n";
    cout << "----------------------------------------\n";
    for (int i = 0; i < numCourses; i++) {
        cout << courseName[i] << "\t" << grade[i] << "\t" << credit[i] << endl;
    }

    cout << "----------------------------------------\n";
    cout << fixed << setprecision(2);
    cout << "Your Final CGPA: " << cgpa << endl;

    // Optional: Grade Evaluation
    if (cgpa >= 9)
        cout << "Excellent Performance!\n";
    else if (cgpa >= 8)
        cout << "Very Good Performance!\n";
    else if (cgpa >= 7)
        cout << "Good Performance!\n";
    else if (cgpa >= 6)
        cout << "Average Performance.\n";
    else
        cout << "Needs Improvement.\n";
    return 0;
  }