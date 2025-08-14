#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int id;
    void Output()
    {
    cout<<"Name: "<<name<< " "<<"ID: "<<id<<endl;    
    }
    
};

int main(){
    Student Stu1;
    Stu1.name = "Dhrubo";
    Stu1.id = 23534923;
    Stu1.Output();

    return 0;
}