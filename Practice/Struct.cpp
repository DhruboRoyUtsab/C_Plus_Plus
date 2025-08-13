#include<iostream>
using  namespace std;

struct Student{
    int ID;
    string Name;
    string Major;
    void Display(){
        cout<<"Name: "<<Name<<" Major: "<<Major<<" ID: " <<ID<<endl;
    }
}Utsab;

int main(){
    Student Dhrubo;
    Dhrubo.Name = "Dhrubo";
    Dhrubo.Major = "CSE";
    Dhrubo.ID = 23534923;
    Dhrubo.Display();
    Utsab.Name = "UTSAB";
    Utsab.Major = "CSE";
    Utsab.ID = 23534923;
    Utsab.Display();


}