#include <iostream>
using namespace std;

int main() {
    int classesHeld, classesAttended;
    float attendancePercentage;

    // Taking input from the user
    cout << "Enter the number of classes held: ";
    cin >> classesHeld;
    cout << "Enter the number of classes attended: ";
    cin >> classesAttended;

    // Calculating attendance percentage
    attendancePercentage = (float)classesAttended / classesHeld * 100;

    // Checking if the student is allowed to sit for the exam
    if (attendancePercentage >= 80) {
        cout << "Attendance percentage: " << attendancePercentage << "%" << endl;
        cout << "The student is allowed to sit for the exam." << endl;
    } else {
        cout << "Attendance percentage: " << attendancePercentage << "%" << endl;
        cout << "The student is not allowed to sit for the exam." << endl;
    }

    return 0;
}