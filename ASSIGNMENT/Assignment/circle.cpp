/*Write a C++ program to calculate the circle's area and circumference. 
You need to create a class called Circle that has public member variables for the radius*/
#include<iostream>
using namespace std;
class Circle {
    public:
        double Radius;

        double CalculateArea() {
            return 3.14159 * Radius * Radius;
        }

        double CalculateCircumference() {
            return 2 * 3.14159 * Radius;
        }
};

int main() {
    Circle C;
    cout << "Enter Radius of Circle: "<<endl;
    cin >> C.Radius;

    cout<<"Area of Circle: "<<C.CalculateArea()<<endl;
    cout<<"Circumference of Circle: "<<C.CalculateCircumference()<<endl;
    return 0;
}