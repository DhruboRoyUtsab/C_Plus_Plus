#include <iostream>
#include <string>
using namespace std;

struct Student {
    long long RegNum;
    string name;
    string Department;
    double CGPA;
}student;

void Input(Student) {
    cout << "Enter Name: ";
    cin >> student.name;

    cout << "Enter Registration number: ";
    cin >> student.RegNum;

    cout << "Enter Department: ";
    cin >> student.Department;

    cout << "Enter CGPA: ";
    cin >> student.CGPA;
}

void Output(const Student& student) {
    cout << "Registration number: " << student.RegNum << endl;
    cout << "Name: " << student.name << endl;
    cout << "Department: " << student.Department << endl;
    cout << "CGPA: " << student.CGPA << endl;
}

int main() {
    Student students[2];

    for (int i = 0; i < 2; i++) {
        cout << "Students Data " << i + 1 << ":" << endl;
        Input(students[i]);
    }

    cout << endl;

    for (int i = 0; i < 2; i++) {
        cout << "Student " << i + 1 << " Data:" << endl;
        Output(students[i]);
        cout << endl;
    }

    return 0;
}