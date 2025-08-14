#include<iostream>
using namespace std;
class Student {
    public:
    int id;
    double cgpa;
    void display()
    {
    cout<<id<< " "<<cgpa<<endl;    
    }
    void setValue(int x, double y){
        id = x;
        cgpa = y;
    }
};

int main(){
    Student sakib;
    sakib.id=100;
    sakib.cgpa= 3.80;
    //cout<<sakib.id<< " "<<sakib.cgpa<<endl;
    sakib.display();
    sakib.setValue(102,3.95);
    return 0;
}