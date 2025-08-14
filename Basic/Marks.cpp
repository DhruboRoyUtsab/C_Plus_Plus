#include<iostream>
using namespace std;
class Student {
    public:
        string name;
        int marks;

        Student(string name, int marks) {
            this->name = name;
            this->marks = marks;
        }
};

double calculateAverageMarks(Student &student1, Student &student2) {
    return static_cast<double>(student1.marks + student2.marks) / 2;
}

int main() {
    Student student1("John", 85);
    Student student2("Alice", 90);

    cout << "Average marks of the students is: "<<calculateAverageMarks(student1, student2)<<endl;

    return 0;
}